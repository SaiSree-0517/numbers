#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	while(1)
	{
		if(n2<n1)
		{
			swap(n2,n1);
		}
		n2=n2%n1;
		if(n2==0)
		{
			cout<<"gcd="<<n1;
			break;
		}	
	}
}
