#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	float R1, R1_temp, P1, R2, R2_temp, P2, R, P;
	cin>>R1>>P1>>R2>>P2;

	R1_temp = R1*cos(P1);
	R2_temp = R2*cos(P2);
	P1 = R1*sin(P1);
	P2 = R2*sin(P2);
	R = R1_temp*R2_temp - P1*P2;
	P = R1_temp*P2 + R2_temp*P1;

	
	if(R>0 || R<-0.005)
		printf("%.2f", R);
	else if(R<=0 && R>=-0.005)
		printf("0.00");

	if(P>0)
		printf("+%.2fi", P);
	else if(P<=0 && P>=-0.005)
		printf("+0.00i");
	else
		printf("%.2fi",P);

	return 0;
}

