#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
	int x[200];
	int i,n,k;
    float sum,b,d;
    sum=0;
    b=0;
    
	cin>>n>>k;
{

	for (i=0; i<n;i++)

	
	cin>>x[i];
}
for(i=0; i<n; i++)
 if(x[i]>k){
 	cout<<setw(2)<<x[i];
 	b++;
 }
{

 	for (i=0; i<n;i++)
	cout<<setw (5) <<x[i];
	cout<<endl;
}
	return 0;
}
