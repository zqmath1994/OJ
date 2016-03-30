#include<iostream>
using namespace std;
void get_next(string &T,int *next);
int main()
{
	string str1="aaaaaaaaaaaaaax";
	int next[50]={0};
	get_next(str1,next);
	cin.get();
	return 0;
}
void get_next(string &T,int *next)
{
	int i,j;
	int len=T.size();
	i=1;
	j=0;
	next[0]=0;
	while(i<len)
	{
		if(j==0||T[i]==T[j])
		{
			++i;
			++j;
			if(T[i]!=T[j])
			next[i]=j;
			else
				next[i]=next[j];
		}
		else
			j=next[j];
	}
	for(int i=0;i<len;i++)
	{
		cout<<next[i]<<" ";
	}
}
