#include <stdio.h>
#include <math.h>
float disc (float a, float b, float c);
float main(){
	float a,b,c,d;
	printf("\n\t ************* ************* ************* ************* *************\n");
	printf("\t Type  in 3 values for a,b and c. Type Enter after each input.\n");
	printf("\t The square root of a+b+c will be calculater and displayed.\n");
	printf("\t Input a:");
	scanf("%f", &a );
	printf("\t input b:");
	scanf("%f", &b );
	printf("\t Input c:");
	scanf("%f", &c );
	d = disc(a,b,c);
	printf("\n\t a = %f b = %f c = %f",a,b,c);
	printf("\n\t The discriminate of a+b+c is %f ",d);
		printf("\n\t  ************* ************* ************* ************* *************\n");
	return 0;
}


float disc (float a, float b, float c){
		float d = b*b-4*a*c;
		return d;
}
