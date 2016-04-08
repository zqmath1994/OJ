#include <iostream>
#include <cstdio>
using namespace std;
void maxx(char *a,char *b)
{
    char temp;
    if(*a>*b)
    {
        temp = *a;
        *a = *b;
        *b =temp;
    }
}
int main()
{
    char x,y,z;
    while(scanf("%c%c%c",&x,&y,&z)!=EOF)
    {
        getchar();
        maxx(&x,&y);
        maxx(&x,&z);
        maxx(&y,&z);
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
