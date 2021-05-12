#include<iostream>
using namespace std;
main()
{
	int n,r,res=0;
	cout<<"enter the value of n \n";
	cin>>n;
	while(n>9)
	{
		while(n)
		{
			r=n%10;
			n=n/10;
			res=res+(r*r);
		}
		n=res;
		res=0;
	}
	if(n==1)
		cout<<"happy number";
	else
		cout<<"not happy number";
}
