#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{

    double a,b,c,d;
    double result;
    while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=EOF)
    {
        result=pow((a-c)*(a-c)+(b-d)*(b-d),0.5);
        printf("%.2f\n",result);
    }
    return 0;
}
