#include<iostream>
using namespace std;
int findDivisor(int x)
{
	int y=1,i,z;
	y=x;
	for(i=1;i<x;i++)
	{
		if(x%y==0)
		{
			z=y;
		}
		y--;		
	}
	
	return z;
}


int main()
{
	int a;
	cout<<"Enter num = ";
	cin>>a;
	if(a>1)
	{
		cout<<findDivisor(a);
	}
	return 0;
}
