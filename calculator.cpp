#include<iostream>
 
using namespace std;
 
int main()
{
   int a,b,c=0;
   do{
   
	cin >> a ;
	if(a!=-1){
     if(a!=6)
		cin >> b;
	 }else{
	  
	 break;}
	switch(a){
		case 1:
			c+=b;
            break;
        case 2:
			c-=b;
            break;
        case 3:
			c*=b;
            break;
        case 4:
			c/=b;
            break;
        case 5:
			c%=b;
            break;
        case 6:
			c=0;
			break;
		default:
			break;    
	}	
	if (a!=-1)
	cout << "   " << c << endl;
	}
	while(a!=-1);
}
