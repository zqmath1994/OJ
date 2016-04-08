#include <iostream>
#include <cstdio>
#define PI 3.1415927
using namespace std;

int main()
{
    double a,b;
    while(scanf("%lf",&a)!=EOF)
    {
        b=4*(PI*a*a*a)/3;
        printf("%.3f\n",b);
    }
    //cout << "Hello world!" << endl;
    return 0;
}
