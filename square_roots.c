#include <stdio.h>
#include <math.h>

double descrim(double a,double b,double c){
	return b*b - 4*a*c;
}

int main(){
	double a,b,c,d;
	if (scanf("%lf %lf %lf",&a,&b,&c) != 3){
		printf("Ty ne prav");
		return 1;
	}
	if (a == 0){
		printf("Ty ne prav");
		return 2;
	}
	d = descrim(a,b,c);
	if (d < 0){
		printf("Net korney");
		return 0;
	}
	printf("%.5f %.5f",(-b + d) / (2 * a) , ( -b - d ) / ( 2 * a ));
	return 0;
		
}
