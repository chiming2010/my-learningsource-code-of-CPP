#include <bits/stdc++.h>
using namespace std;
unsigned long long a[25];
int main()
{
	unsigned long long n, b, c;
	cin >> n >> b >> c;
	a[1] = c;
	for(int i = 2; i <= b + 1; i++)
	{
		a[i] = (c + 1) * n;
		c = a[i];
	}
	for(int i = b + 1; i >= 1; i--)
	{
		cout << a[i] << " "; 
	}
	
	return 0;
 }

