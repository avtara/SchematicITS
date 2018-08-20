#include <stdio.h>

int main(){
	int t;
	scanf("%i", &t);
	for(int i = 1;i <= t;i++){
		int arrayLength, highest = 0;
		scanf("%i", &arrayLength);
		int cards [arrayLength];
		for(int j = 0;j < arrayLength;j++){
			int temp;
			scanf("%i", &temp);
			cards[j] = temp;
			if(temp > highest)
				highest = temp;
		}
		
		int tempArray [10000] = {0};
		highest = 0;
		for(int j : cards){
			tempArray[j]++;
			if(tempArray[j] > highest)
				highest = tempArray[j];
		}
		
		printf("Kasus #%i: %i\n", i, highest);
	}
	return 0;
}
