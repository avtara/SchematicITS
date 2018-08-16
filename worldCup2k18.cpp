#include <iostream>
using namespace std;

int main(){
	long long int p,k,n,hasil;
	cin>>p>>k>>n;
	hasil = p+k;
	if(hasil>n)
	{
		hasil=hasil%n;	
	}
	if(hasil<k){
		hasil=k;
	}
	cout<<hasil<<endl;
	return 0;
}
