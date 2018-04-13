#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TOL 1e-4
#define N 20

double f(double p) {
	double sonuc = p*p*p - 2 * p*p - 5;
	return sonuc;
}

double g(double p,double p1) {
	double p2 = p1 -( (f(p1)*(p1 - p)) /( f(p1) - f(p)) );
	return p2;
}

void main() {
	int i = 0;
	double p = -1;
	double p1 = 0;
	double p2;
	do {
		p2 = g(p, p1);
		printf("p=%f\t\t\t\tp1=%f\t\t\tp2=%f\n",p,p1,p2);
		if (fabs(p2 - p1) < TOL) {
			printf("kok bulundu");
			break;
		}
		p=p1;
		p1 = p2;
		++i;
	} while ( i<N);


	system("PAUSE");
}
