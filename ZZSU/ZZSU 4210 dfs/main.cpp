#include <iostream>

using namespace std;
int n,m;
int ans;
void dfs(int n,int m,int num)
{
    if(num>m)return;
    if(num == 0)
    {
        if(n==0&&m==0)
            ++ans;
        return;
    }
    if(n!=0)dfs(n-1,m,num<<1);
    if(m!=0)dfs(n,m-1,num-1);
}
int main()
{
    while(cin>>n>>m)
    {
        ans = 0;
        dfs(n,m,2);
        cout<<ans<<endl;
    }
    return 0;
}
