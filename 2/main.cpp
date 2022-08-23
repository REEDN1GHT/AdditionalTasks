#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	float const a=2.54; 
	float n,m;
	setlocale(LC_CTYPE, "RUSSIAN");
	cout<<"¬ведите число"<<endl;
	cin>>n;
	m=n*a;
	cout<<n<<"="<<m;
	return 0;
}
