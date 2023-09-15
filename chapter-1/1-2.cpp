#include <iostream>
using namespace std;
class Circle //说明类
{
    double radius; //类的数据成员
    public:
        //类的成员函数
    void Set_Radius( double r )
    { radius = r; }
    double Get_Radius()
    { return radius; }
    double Get_Girth()
    { return 2 * 3.14 *radius; }
    double Get_Area()
    { return 3.14 * radius * radius; }
};
int main()
{
    Circle A,B; //说明对象
    A.Set_Radius( 6.23 );
    cout << "A.Radius =" << A.Get_Radius() << endl;
    cout << "A.Girth =" << A.Get_Girth() << endl;
    cout << "A.Area =" << A.Get_Radius() << endl;
    B.Set_Radius( 10.5 );
    cout << "B.Radius =" << A.Get_Radius() << endl;
    cout << "B.Girth =" << A.Get_Girth() << endl;
    cout << "B.Area =" << A.Get_Radius() << endl;
}

