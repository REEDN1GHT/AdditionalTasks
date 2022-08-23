#include <iostream>
using namespace std;
float c3(float m, float p, float k,int d)
{
	setlocale(LC_CTYPE, "RUSSIAN");
	if (m>k) 
	{
	cout<<"Кол-во дней "<<d<<endl<<"Кол-во км "<<m<<endl;
	}
	else
	{
    c3(m+m*p/100,p,k,d+1); 
}
}
int main() {
	float p,m,a,k,n;
	int d=1;
	cout<<"M=";
	cin>>m;
	cout<<"P%=";
	cin>>p;
	cout<<"K=";
	cin>>k;	
	c3(m,p,k,d);
}
