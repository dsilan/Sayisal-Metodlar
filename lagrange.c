#include<stdio.h>
#include<stdlib.h>
#define SAYI 5
double p(double,double[],double[]);
double toplam=0;
double carpim = 1;
int main() {

	double deger=1.5;
	double x[SAYI];
	double y[SAYI];
	//x değerlerinin atanması
	x[0] = 1.0;
	x[1] = 1.3;
	x[2] = 1.6;
	x[3] = 1.9;
	x[4] = 2.2;

	//y değerlerinin atanması
	y[0] = 0.7651977;
	y[1] = 0.6200860;
	y[2] = 0.4554022;
	y[3] = 0.2818186;
	y[4] = 0.1103623;

	double sonuc=p(deger,x, y);
	printf("%lf\n", sonuc);
	system("PAUSE");
	return 0;
}
double p(double deger,double x[],double y[]) {
	
	for (int i = 1; i <= SAYI; i++) {
		carpim = 1;
		for (int j = 1; j<=SAYI; j++) {
			if (i != j) {
				/*çarpma kısımları*/
				carpim *=( (deger - x[j]) / (x[i] - x[j]));
				
		
			}
		
		}
		carpim *= y[i];
		toplam  = toplam + carpim;
	}
	return toplam;
}
