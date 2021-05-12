#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r=0,e=0,o=0;;
	cout<<"enter the number";
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
			e++;
		else
			o++;
	}
	cout<<"even"<<e;
	cout<<"odd"<<o;
	return 0;
}
