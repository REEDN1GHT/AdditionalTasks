#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{

	int x[200];
	int i,n,l;
	int max;
	cout<<"Vedite col-vo elementov v massive"<<endl;
	cin>>n>>l;
	for (i=0; i<n;i++)
	cin>>x[i];
    for(i=0; i<n; i++)
    if (x[i]>l)
	{
	 x[i]=5;
	}
	
    for (i=0; i<n;i++)
	cout<<setw (5) <<x[i];
	cout<<endl;

	
}
