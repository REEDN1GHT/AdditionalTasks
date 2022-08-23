#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int j,i,n,l,k;
	cout<<"N=";
	cin>>n;
	cin>>l>>k;
	for (i=l; i<=k; i++)
	if (i<=k)
	{
	    j=n*i;
	    cout<<setw(4)<<j;}
	else
	    cout<<"konec";
	
	return 0;
}
