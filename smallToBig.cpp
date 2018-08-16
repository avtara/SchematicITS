#include <stdio.h>      /* printf, fgets */
#include <locale>

int main ()
{
  	char a;
  	char b;
  
  	scanf("%c %c",&a,&b);
  	printf("/ ""%c " , tolower(b));
	printf("%c ", toupper(a));
	printf("\\""\n");
}
