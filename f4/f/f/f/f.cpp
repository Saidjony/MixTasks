#include <iostream>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "ru");
    int* arr = new int[] {4,3,5,7,8};
    int target = 14;
    vector<int> vec(arr, arr + 5);
    sort(vec.begin(), vec.end());
    reverse(vec.begin(),vec.end());
    int sum = 0;
    for (int i = 0; i <vec.size(); i++)
    {
        sum += vec[i];
        if (sum > target)
        {
            sum -= vec[i];
            break;
        }
    }
    int s = 0;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        
        if (sum == target)
        {
            cout << "rfmgdfgklsfmkls" << endl;
            break;
        }
        else if (sum > target)
        {
            sum += vec[i];
            sum -= vec[s]; 
            s++;
        }
        sum += vec[i];
    }
    cout << "sum " << sum << endl;


    return 0;
}



 