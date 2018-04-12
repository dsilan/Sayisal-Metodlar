#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define TOLERANS 0.001

double fonk(double );

double a = 0;
double b = 3;

void main() {
	printf("denklem = x^2 - 2x - 2\n");
	printf("Yarilama metodu ile cozum:\n");


	if ((fonk(a)*fonk(b)) >= 0) {
		printf("Yanlis degerler girildi.\n");
		return;
	}
	else {
		printf("%5.2s\t%12.2s\t%12.2s\t%15.5s\t%15.5s\t%15.5s\n", "a", "b", "c", "f(a)", "f(b)", "f(c)");

		while ((b - a) >= TOLERANS) {
			double c = (a + b) / 2;

			printf("%f\t%f\t%f\t%f\t%f\t%f\n", a,b,c, fonk(a), fonk(b), fonk(c));
			
			if (fonk(c) == 0.0) {
				break;
			}
			else if (fonk(c)*fonk(a) < 0) {
				b = c;
			}
			else
				a = c;
		}
	}

	/*Sabit nokta*/

	printf("Sabit Nokta metodu ile cozum:\n");

	int i = 1;
	double ps = 1.5;

	printf("\t%3s\t\t%3s\n","i","p");
	double p = 0;
	double d = 0;
	while (i<=10) {


		 p = fonk(ps);
		 d = p - ps;
	

		if (fabs(d) < TOLERANS)
			printf("%d\t Sonlandırıldı kok=  \t%f", i, p);

		++i;
		ps = p;

	}

	system("PAUSE");
}

double fonk(double p)
{
	double sonuc;
	sonuc = (p*p) - (2 * p) - 2;

	return sonuc;
}
