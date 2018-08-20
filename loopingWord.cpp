#include <stdio.h>
#include <string.h>
#include <iostream>

int main(){
	std::string word1, word2;
	std::getline(std::cin, word1);
	word2 = word1.substr(word1.find("-") + 1, word1.size());
	word1 = word1.substr(0, word1.find("-"));
	int t;
	scanf("%i", &t);
	for(int i = 1;i <= t;i++){
		long word, charIndex;
		char character;
		scanf("%ld %ld %c", &word, &charIndex, &character);
		if(word == 1)
			word1[charIndex - 1] = character;
		else
			word2[charIndex - 1] = character;
		printf("Proses #%i: %skata berulang.\n", i, strcmp(word1.c_str(), word2.c_str()) == 0 ? "" : "bukan ");
		
	}
	return 0;
}
