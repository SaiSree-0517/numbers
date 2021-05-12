#include <bits/stdc++.h>
using namespace std;
int squareSum(int n)
{
    int sq = 0;
    while (n)
    {
        sq += (n % 10) * (n % 10);
        n /= 10;
    }
    return sq;
}
bool isHappynumber(int n)
{
    int s, f;
    s = f = n;
    do
    {
        s = squareSum(s);
        f = squareSum(squareSum(f));
 
    }
    while (s != f);
    	return (s == 1);
}
int main()
{
    int n = 13;
    if (isHappynumber(n))
        cout << n << " is a Happy number\n";
    else
        cout << n << " is not a Happy number\n";
}
