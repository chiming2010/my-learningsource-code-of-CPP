#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

const double eps = 1e-8;
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	if(fabs(delta) < eps)	//有两个相同的根 
	{
		double x = (-b + sqrt(delta)) / (2 * a);
		printf("x1=x2=%.5lf", x);
	}
	else if(delta > eps)
	{
		double x1 = (-b - sqrt(delta)) / (2 * a), x2 = (-b + sqrt(delta)) / (2 * a);
		if(x1 > x2) swap(x1, x2);
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	else puts("No answer!");
}