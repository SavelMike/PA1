#include <stdio.h>

int main(void) 
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double tmp;
	int res;
	

	/* Get input information about first triangle */
	printf("Triangle #1:\n");
	res = scanf("%lf %lf %lf", &a, &b, &c);
	if (res != 3) {
		printf("Invalid input.\n");
		return 0;
	}
	if (!((a > 0) && (b > 0) && (c > 0))) {
		printf("Invalid input.\n");
		return 0;
	}
	if (!(((a + b) > c) && ((a + c) > b) && ((c + b) > a))) {
		printf("The sides do not form a triangle.\n");
		return 0;
	}
	
	/* Get input information about second triangle */
	printf("Triangle #2:\n");
	res = scanf("%lf %lf %lf", &d, &e, &f);
	if (res != 3) {
		printf("Invalid input.\n");
		return 0;
	}
	if (!((d > 0) && (e > 0) && (f > 0))) {
		printf("Invalid input.\n");
		return 0;
	}
	if (!(((d + e) > f) && ((d + f) > e) && ((f + e) > d))) {
		printf("The sides do not form a triangle.\n");
		return 0;
	}
	
	/* Sort first triangle side length */
	if ((a < b) && (a < c)) { 
		/* a is minimum */
		if (c < b) {
			tmp = b;
			b = c;
			c = tmp;
		}
	} else if ((b < a) && (b < c)) {
		/* b is minimum */
		tmp = a;
		a = b;
		b = tmp;
		if (c < b) {
			tmp = b;
			b = c;
			c = tmp;
		}
	} else {
		/* c is minimum */
		tmp = a;
		a = c;
		c = tmp;
		if (c < b) {
			tmp = b;
			b = c;
			c = tmp;
		}
	}
	if ((a > b) || (b > c)) {
		printf("Sort did not work\n");
		return 0;
	}

	/* Sort triangle #2 side length */
	if ((d < e) && (d < f)) { 
		/* d is minimum */
		if (f < e) {
			tmp = e;
			e = f;
			f = tmp;
		}
	} else if ((e < d) && (e < f)) {
		/* e is minimum */
		tmp = d;
		d = e;
		e = tmp;
		if (f < e) {
			tmp = e;
			e = f;
			f = tmp;
		}
	} else {
		/* f is minimum */
		tmp = d;
		d = f;
		f = tmp;
		if (f < e) {
			tmp = e;
			e = f;
			f = tmp;
		}
	}
	if ((d > e) || (e > f)) {
		printf("Sort did not work\n");
		return 0;
	}

	/* Compare triangles */
	if ((a == d) && (b == e) && (c == f)) {
		printf("The triangles are identical.\n");
		return 0;
	}
	if (((a / d) == (b / e)) && ((a / d) == (c / f))) {
		printf("The triangles are not identical, however, they are similar.\n");
	} else {
		printf("The triangles are neither identical nor similar.\n");
	}
	return 0;
}
