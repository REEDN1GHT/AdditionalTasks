#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{

	int x[200];
	int i,n;
	int max;
	cin>>n;
	for (i=0; i<n;i++)
	cin>>x[i];
    for(i=0; i<n; i++)
    if (x[i]%2==0)
	{
    cout<<x[i]<<setw (2);	
	}
    
	for (i=0; i<n;i++)
	cout<<setw (5) <<x[i];
	cout<<endl;

	
}
