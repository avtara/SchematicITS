#include <stdio.h>
#include <cmath>

int main(){
	double positionX, positionY, totalDistance;
	int t;
	scanf("%lf %lf", &positionX, &positionY);
	scanf("%i", &t);
	int startPositionX = positionX, endPositionY = positionY;
	for(int i = 0;i < t; i ++){
		double tempX, tempY, distance;
		scanf("%lf %lf", &tempX, &tempY);
		distance = sqrt(pow(std::abs(tempX - positionX), 2)+ pow(std::abs(tempY-positionY), 2));
		totalDistance += distance * 2;
	}
	
	printf("Pengeluaran Yoyo selama %i kali pengiriman adalah : Rp %.2lf,-\n", t, totalDistance * 500);
	return 0;
}
