#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
	int x[200];
	int i,n;
    float sum,b,d;
    sum=0;
    b=0;
    
	cin>>n;
{

	for (i=0; i<n;i++)

	
	cin>>x[i];
}
for(i=0; i<n; i++)
 if(x[i]>0){
 	sum += x[i];
 	b++;
 }
{

 	for (i=0; i<n;i++)
	cout<<setw (5) <<x[i];
	cout<<endl;
}
    d=sum/b;
    cout<<"Sredneorifmeticheskoe "<<d;
	return 0;
}
