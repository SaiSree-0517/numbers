#include<bits/stdc++.h> 
using namespace std;  
int main()  
{  
  int n,i,count=1;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;   
  for(i=2;i<=sqrt(n+1);i++)  
  {  
      if(n%i==0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          count=0;  
          break;  
      }  
  }  
  if (count)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}  
