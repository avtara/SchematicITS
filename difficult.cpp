#include <stdio.h>
#include <string>

int main(){
	int x,y, p;
	std::string separator = "+", space ="", tempSeparator;
	scanf("%i %i %i", &x, &y, &p);
	
	for(int i = 0;i < p;i++){
		separator +="-";
		space += " ";
	}
	tempSeparator = separator;
	for(int i = 0;i < y - 1;i++)
		separator += tempSeparator;
	separator +="+";
	
	for(int i = 0;i < x;i++){
		printf("%s\n", separator.c_str());
		for(int k = 0;k < p;k++){
			std::string temp = space;
			if(k == p - 1 - k){
				temp[k] = 'x';
			}else{
				temp[k] = '\\';
				temp[p - 1 - k] = '/';
			}
			
			for(int j = 0;j < y;j++)
				printf("|%s", temp.c_str());
			printf("|\n");
		}
	}
	
	printf("%s\n", separator.c_str());
	return 0;
}
