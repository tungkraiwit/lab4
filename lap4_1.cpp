#include<iostream>
#include<cmath>
using namespace std;

int num(int x)
{
	float y,e=2.71828;
	y=(3*pow(x,3))+(2*e)+(pow(2,(2*x)+1))+sqrt(pow(x,2)+1);
	cout<<y;
	return 0;
}
int main()
{
	float b;
	cout<<"Enter x = ";
	cin>>b;
	num(b);
	return 0;
}
