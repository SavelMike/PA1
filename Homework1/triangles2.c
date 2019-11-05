#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Function for comparing doubles with precision of 0.0000001 */
int doubles_same(double a, double b) {

	double tmp;
	
	tmp = a / b;
	if (tmp < 0) {
		return 0;
	}
	if (fabs(1.0 - tmp) > 1.0E-6) {
		return 0;
	} else {
		return 1;
	}
}

/*
 * Input: three sides of triangle.
 * Result: 1 if triangle is valid, 0 - otherwise
 */
int SSS_valid(double a, double b, double c) 
{
	if (!((a > 0) && (b > 0) && (c > 0))) {
		printf("Invalid input.\n");
		exit(0);
	}
	if (!(((a + b) > c) && ((a + c) > b) && ((c + b) > a))) {
		printf("The input does not form a triangle.\n");
		exit(0);
	}	
	return 1;
}

/*
 * Input: two sides(a, c) and angle(b)
 * Result: 1 if triangle is valid, 0 - otherwise
 */
int SAS_valid(double a, double b, double c)
{
	if (!((a > 0) && (b > 0) && (c > 0))) {
		printf("Invalid input.\n");
		exit(0);
	}
	if (!(b < 180)) {
		printf("Invalid input.\n");
		exit(0);
	}
	return 1;	
}

/*
 * Input: two angles(a, c) and one side (b)
 * Result: 1 if triangle is valid, 0 - otherwise
 */
int ASA_valid(double a, double b, double c)
{
	if (!((a > 0) && (b > 0) && (c > 0))) {
		printf("Invalid input.\n");
		exit(0);
	}
	if (!(a + c < 180)) {
		printf("The input does not form a triangle.\n");
		exit(0);
	}
	return 1;
}
	
	
/* This reads standart input information about triangles */
int get_input(double *a, double *b, double *c) 
{
	int res;
	double angle;
	char c1;
	char c2;
	char c3;
	
	do {
		if (scanf("%c", &c1) != 1) {
			printf("Invalid input.\n");
			exit(0);
		}
	} while(c1 == ' ');
		
	res = scanf("%c%c %lf %lf %lf", &c2, &c3, a, b, c);
	if ((res == 5) && (c1 == 'S') && (c2 == 'S') && (c3 == 'S')) {
		/* Triangle is given by three sides */
		if (SSS_valid(*a, *b, *c) == 1) {
			;
		}
		return 0;
	}	
	if ((res == 5) && (c1 == 'S') && (c2 == 'A') && (c3 == 'S')) {
		/* Triangle is given by two sides and angle */
		if (SAS_valid(*a, *b, *c) == 1)
			/*Calculations by cosine theoremes */
			*b = sqrt((*a) * (*a) + (*c) * (*c) - 2 * (*a) * (*c) * cos((*b) * M_PI / 180)); 
		return 0;
	}
	if ((res == 5) && (c1 == 'A') && (c2 == 'S') && (c3 == 'A')) {
		/* Triangle is given by two angles and side */
		if (ASA_valid(*a, *b, *c) == 1) {
			/* Calculation by sine theoreme */
			angle = (180 - (*a) - (*c)) * M_PI / 180;
			*a = sin(*a * M_PI / 180) * (*b) / sin(angle);
			*c = sin(*c * M_PI / 180) * (*b) / sin(angle);  
		}
		return 0;
	}
	printf("Invalid input.\n");
	exit (0);
}

int main(void) 
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double tmp;
	char ch;
	
	/* Get input information */
	printf("Triangle #1:\n");
	get_input(&a, &b, &c);
	/* Clear input buffer */
	scanf("%c", &ch);
	printf("Triangle #2:\n");
	get_input(&d, &e, &f);
	
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
	if (doubles_same(a, d) && doubles_same(b, e) && doubles_same(c, f)) {
		printf("The triangles are identical.\n");
		return 0;
	}
	
	if (doubles_same(a / d, b / e) && doubles_same(a / d, c / f)) {
		printf("The triangles are not identical, however, they are similar.\n");
	} else {
		printf("The triangles are neither identical nor similar.\n");
	}
	return 0;
}
