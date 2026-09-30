#include<iostream>
#include<iomanip>
using namespace std;

long long number (long long a)
{
	int p = 10;
	while ( a > 9) {
		a /= 10;
		p *= 10;	
	}		
	return p;
}	


int main()
{
	long long n;
	long long i;
	long long j; 
    long long q;
	
	cin>>n;
	
	for( i = 0 ; i <= n ; i++ ){
		j = i * i;
		
		q = number(i);
		
		if (j % q == i){
			cout<<i;
			cout<<"     "<<j<<endl;
		}
		
	}
	
}
