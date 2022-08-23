#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{

	int x[200];
	int i,n,d;
	int max;
	cin>>n;
	d=0;
	for (i=0; i<n;i++)
	cin>>x[i];
    for(i=0; i<n; i++)
    if (x[i]%3==0)
	{
		for (i=0; i<n; i++)
		d=d+x[i];
    cout<<d<<setw (2);	
	}
    
	for (i=0; i<n;i++)
	cout<<setw (5) <<x[i];
	cout<<endl;

	
}
