#include<stdio.h>
#include<math.h>

int main(void) {
	
	float a,b,sum;
	a=0;
	b=M_PI*60/(float)180;
	int i,N=12;
	
	for (i=5;i<60;i+=5) {
		sum+=2*tan(M_PI*(float)i/180.0);
	}
	sum+=tan(M_PI*60.0/(float)180);
	sum*=(b-a)/(2*(float)N);
	printf("The computed value is %f\n",sum);
	printf("The actual value is %f\n",logf(2));
	printf("The difference is %f\n",fabs(sum-logf(2)));
	return(0);
}
