#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

char c;
int d,d1;

cin >> d >> c ;
d1 = d + 96;
cout << "Bilangan " << d << " menandakan huruf "<< char(d1) << "." << endl;
cout << "Huruf " << c << " memiliki nilai ASCII " << int(c) << "." << endl;

return 0;

}

