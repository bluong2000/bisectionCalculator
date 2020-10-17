#include<stdio.h>
#include<iostream>
using namespace std;
 
double f(double x)
{
    return x*x*x + x - 5;
}
 
 
void bisection(double L,double R, double tolerance)
{
    double c;

    if(f(L) * f(R) >= 0)
    {
        printf("No solution for given inputs\n");
        return;
    }
 
 
    while ((R-L)/2 >= tolerance)
    {
        c = (L+R)/2;
        if (f(c) == 0.0){
            break;
        }
        else if (f(c)*f(L) < 0){
                R = c;
        }
        else{
                L = c;
        }

    }
    printf("Root = %lf\n",c);


}
 
int main()
{
    double tolerance, Lend, Rend, L, R;
    cout<<"Enter tolerance: ";
    cin >> tolerance;
     cout<<"Enter left interval endpoint: ";
    cin >> L;
    cout<<"Enter right interval endpoint: ";
    cin >> R;
 

    bisection(L,R, tolerance);
 
    return 0;
}