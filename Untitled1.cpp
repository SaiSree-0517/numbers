#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[10],size,target=9;
	cout<<"enter the size of the array";
	cin>>size;
	cout<<"enter elements to the array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=1;j<size-1;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				cout<<"["<<j<<","<<i<<"]";
				break;
			}
		}
	}
	return 0;
}
