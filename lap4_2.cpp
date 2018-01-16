#include<iostream>

using namespace std;
int findDistance(float u,float a,float t)
{
	float s;
	s=(u*t)+(0.5*a*t*t);
	cout<<"s = " <<s;
	return 0;
}
int main()
{
	float u,a,t;
	cout<<"Enter u = ";
	cin>>u;
	cout<<"Enter a = ";
	cin>>a;
	cout<<"Enter t = ";
	cin>>t;
	findDistance(u,a,t);
	
	return 0;
}
