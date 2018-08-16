#include<iostream>
 
using namespace std;
 
int main()
{
	int x;
   cin >> x;
   if(x%2==1)
   if(x/2%2==1)
   x=2;
   else
   x=1;
   
   else
  if(x/2%2==1)
   x=3;
   else
   x=4;
   
   
   
   switch (x) {
	case 2:
		cout << "Bilangan ganjil-ganjil" << endl;
	break;
	case 1:
		cout << "Bilangan ganjil-genap" << endl;
	break;
	case 3:
		cout << "Bilangan genap-ganjil" << endl;
	break;
	default:
		cout << "Bilangan genap-genap" << endl;
 
   return 0;
}
}

