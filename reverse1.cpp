#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rev=0,rem,p;
	cout<<"enter the number";
	cin>>n;
	p=n;
	while(n)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(p==rev)
	    cout<<rev<<"palindrome";
	else
		cout<<rev<<"not palindrome";
	return 0;
}
