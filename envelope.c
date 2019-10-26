#include <stdio.h>

int main (void) 
{	
	int w;
	int i;
	int j;
	int peak;
	int res;
	
	printf("Input the width of postal envelope: \n");
	w = 0;
	scanf("%d", &w);
	if (w < 5) {
		printf("Invalid input %d\n", w);
		return 0;
	}		

	if ((w % 2) == 0) {
		peak = w / 2 - 1;
	} else {
		peak = w / 2;
	}
	for (i = 0; i < w; i++) {
		for (j = 0; j < w; j++) {
			if  ((i == 0) || (i == (w - 1)) ||
			    (j == 0) || (j == (w - 1)) || 
			    (((j == i) || (j == (w - i - 1))) && (i <= peak))) {
				printf("*");
			} else { 
				printf(" ");
			} 
		}
		printf("\n");
	}
	return 0;
}

