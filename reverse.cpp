#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*rem;
		n=n/10;
	}
	cout<<rev;
}
