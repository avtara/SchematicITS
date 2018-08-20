#include <stdio.h>

int main(){
	int t;
	scanf("%i", &t);
	int price[t];
	for(int i = 0;i < t;i++){
		scanf("%i", &price[i]);
	}
	
	scanf("%i", &t);
	for(int i =  1;i <= t;i++){
		int buy, result = 0;
		scanf("%i", &buy);
		for(int j = 0;j < buy;j++){
			int item;
			scanf("%i", &item);
			result += price[item - 1];
		}
		
		printf("Kasus #%i: %i\n", i, result);
	}
	return 0;
}
