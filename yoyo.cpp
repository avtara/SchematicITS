#include<stdio.h>
#include<bitset>
#include<string.h>
#include<iostream>

int main(){
	int t;
	scanf("%i", &t);
	
	for(int i = 0;i < t;i++){
		std::string c;
		std::cin >> c;
		int lastPos = 0;
		while(lastPos < c.size()){
			std::string temp = c.substr(lastPos, 5);
			lastPos += 6;
			printf("%c", std::bitset<5>(temp).to_ulong() + 96);
		}
		printf("\n");
	}
	
	return 0;
}

