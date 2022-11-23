#include <iostream>
#include<string>


using namespace std;


class point
{
public:
    double x = 0, y = 0;
};
 
class shape
{ 
public:
    point* pt=nullptr;
    string id = "";
    virtual ~shape() {};
};
 
class rectangle : public shape
{
public:
    rectangle() { pt = new point[4]; 
    cout << "input dl ";
    cin >> pt[0].x; cin >> pt[0].y;
    cout << endl << "input tl ";
    cin >> pt[1].x; cin >> pt[1].y;
    cout << endl << "input tr ";
    cin >> pt[2].x; cin >> pt[2].y;
    cout << endl << "input dr ";
    cin >> pt[3].x; cin >> pt[3].y;
    id = "прямоугольник"; }
    ~rectangle() { delete[] pt; }
};

class trapezoid : public shape
{
public:
    trapezoid() { pt = new point[4];
    cout << endl << "input dl ";
    cin >> pt[0].x; cin >> pt[0].y;
    cout << endl << "input tl ";
    cin >> pt[1].x; cin >> pt[1].y;
    cout << endl << "input tr ";
    cin >> pt[2].x; cin >> pt[2].y;
    cout << endl << "input dr ";
    cin >> pt[3].x; cin >> pt[3].y; 
    id = "трапеция"; }
    ~trapezoid() { delete[] pt; }
};  


class operation
{
public:
    static string  compare (shape* rec, shape* tra)
    {
        point dl = rec->pt[0];
        point tr = rec->pt[2];

        point  dl1 = tra->pt[0];
        point tl1 = tra->pt[1];
        point tr1 = tra->pt[2];
        point dr1 = tra->pt[3];
      
        double s = (tr.x-dl.x)*(tr.y-dl.y);

        double a1 = sqrt(pow(tl1.x - dl1.x, 2) + pow(tl1.y- dl1.y,2));
        double c1 = sqrt(pow(tr1.x - tl1.x, 2) + pow(tr1.y- tl1.y,2));
        double b1 = sqrt(pow(dr1.x - tr1.x, 2) + pow(dr1.y-tr1.y,2));
        double d1 = sqrt(pow(dl1.x - dr1.x, 2) + pow(dl1.y- dr1.y,2));

        double s1 = ((a1 + b1) / 2) * (sqrt(pow(c1, 2) - pow(((pow((b1 - a1), 2) + pow(c1, 2) - pow(d1, 2)) / (2 * (b1 - a1))),2)));

        if (s > s1)
            return "площадь прямоугольника больще чем площадь трапеции";
        else if (s < s1)
            return "площадь прямоугольника меньще чем площадь трапеции";
        return "площады равны"; 
    }
    
   static bool isintersect(shape* rec, shape* tra)
    {
        point dl = rec->pt[0];
        point tl = rec->pt[1];      
        point tr = rec->pt[2];     
        point dr = rec->pt[3]; 

        point  dl1= tra->pt[0]; 
        point tl1 = tra->pt[1];      
        point tr1 = tra->pt[2];     
        point dr1 = tra->pt[3];    
         
        bool intera = tr.x >= dl1.x && tr.y >= dl1.y && tr.x<tr1.x && tr.y<tr1.y;
        bool interb = tl.x <= dr1.x && tl.y >= dr1.y && tl.x>tl1.x&&tl.y>tl1.y;
        bool interc =dl.x <= tr1.x && dl.y <= tr1.y && dl.x>dl1.x&&dl.y>dl1.y;
        bool interd = dr.x >= tl1.x && dr.y <= tl1.y && dr.x<dr1.x&&dr.y>dr1.y;
         
        return intera||interb||interc||interd;
    }

    static bool isinclude(shape* rec, shape* tra)
    {
        point  dl = rec->pt[0];
        point tl = rec->pt[1];
        point tr = rec->pt[2];
        point dr = rec->pt[3];

       point mn = tra->pt[0]; //нижный левый 
       point mx = tra->pt[1]; // нижный правый 
       point ma = tra->pt[2]; //вверхный правый 
       point mb = tra->pt[3]; //вверхный левый
       
       double h = ma.y - mx.y;
       double h1 = tr.y - dl.y;

       double eqleft = ((mb.y - mn.y) / (tl.y - mn.y)) - ((mb.x - mn.x) / (tl.x - mn.x));
       double eqright = ((ma.y-mx.y)/(tr.y-mx.y)) - ((ma.x - mx.x) / (tr.x - mx.x));
       bool thirdcond = mn.y <= dl.y;
       if (dl.x <= mn.x && tr.x >= mx.x && h1 >= h)
       {
           return true;
       }

       if (eqleft >= 0 && eqright <= 0 && thirdcond)
       {
           return true;
       }

       return false;
   }
};
 

int main()
{
    setlocale(LC_ALL, "ru"); 

    shape* rec = nullptr;
    shape* tra = nullptr;
    
    cout << "input points of rectangle" << endl;
    rec = new rectangle();
    cout << "input points of trapezoid"<<endl;
    tra = new trapezoid();
       
    operation::isintersect(rec, tra);
    operation::isinclude(rec, tra);
     
    return 0;
}