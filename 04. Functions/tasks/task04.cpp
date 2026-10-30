#include <iostream>
#include <cmath>

double getABSide(int xa, int ya, int xb, int yb)
{
    return sqrt((xb-xa)*(xb-xa) +(yb-ya)*(yb-ya));
}


int main() 
{
    int a;
    std::cin>>a;

    int b;
    std::cin>>b;

    int c;
    std::cin>>c;

    int d;
    std::cin>>d;

    int e;
    std::cin>>e;

    int f;
    std::cin>>f;


    std::cout<<getABSide(a, b, c, d) + getABSide(c, d, e, f) + getABSide(a, b, e, f);


}
