#include<stdio.h>
#include<sstream>
#include<string>

 
int main()
{
   int n, pertama = 0, kedua = 1;
 	
   std::string result ="0 1";
   scanf("%i",&n);
  
   for ( int i = 1 ; i < n -1 ; i++ )
   {
		int hasil=pertama+kedua;
		pertama=kedua;
		kedua=hasil;
		result += " "+ 	
		std::to_string(hasil);
   }
   printf("%s\n",result.c_str());
 
   return 0;
}
