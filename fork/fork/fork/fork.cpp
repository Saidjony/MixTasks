#include <iostream>
#include <string>
#include <string_view>
#include <forward_list>
#include <algorithm>
#include <string_view>
#include<sstream>
using namespace std;

struct CodeNode
{
    unsigned char beg;
    unsigned char len;
    char ch;
};

bool push_shift(string& s, char c, size_t len)  // return true if first symbol were erased
{
    if (s.size() < len) { s.push_back(c); return false; }
    move(next(s.begin()), s.end(), s.begin());
    s.back() = c; return true;
}

forward_list<CodeNode> LZ77(string s, size_t win_len = 255)
{
    forward_list<CodeNode> res; auto it = res.before_begin();
    string win, buf; win.reserve(win_len); buf.reserve(win_len);
    CodeNode next{}; size_t saved_win_len = 0;
    for (char c : s) {
        buf.push_back(c);
        size_t pos;
        next.ch = c;
        cout << win << ' '  << '\n';
        if ((pos = win.rfind(buf)) != string::npos) {
            next.beg = saved_win_len - pos; next.len = buf.size();
            if (push_shift(win, c, win_len)) saved_win_len--;  //shift
        }
        else {
            it = res.insert_after(it, next); buf.resize(0);
            next.beg = 0; next.len = 0;
            push_shift(win, c, win_len);
            saved_win_len = win.size();
        }
        // cout << buf <<"   "<< endl;
    }
    if (next.len != 0) { next.len--; res.insert_after(it, next); }
    return res;
}

size_t LZ77length(const forward_list<CodeNode>& code) { // get length of original string
    size_t len = 0;
    for (const CodeNode& cn : code)
    {
        len += cn.len + 1;
        cout  << (int)cn.len << endl;
    }
    return len;
}

size_t LZ77size(const forward_list<CodeNode>& code) {  // get size of coded data
    return sizeof(CodeNode) * distance(code.begin(), code.end());
}

string LZ77decode(const forward_list<CodeNode>& code)
{
    string res;
    res.reserve(LZ77length(code)); // can not be
    for (CodeNode cn : code) {
        for (size_t i = res.size() - cn.beg, e = i + cn.len; i != e; ++i)
            res += res[i];
        res += cn.ch;
    }
    return res;
}

ostream& operator<< (ostream& os, CodeNode cn) {
    return os << '<' << int(cn.beg) << ',' << int(cn.len) << ',' << cn.ch << '>';
}

int main()
{
    string s;
    getline(cin, s);
    //s = "helolohelololololololololololololo"; // для тестирования
    auto code = LZ77(s, 8);
    auto code1 = LZ77(s, 5);
    for (CodeNode cn : code)
        cout << cn << endl;
    cout << endl;
    for (CodeNode cn : code1)
        cout << cn << endl;

    cout << LZ77length(code) << "     " << LZ77length(code1) << endl;

  
    cout << s.size() << ' ' << LZ77size(code) << endl;
    return 0;
}
 