#include <stdio.h>

/* 
 * Iterative version of fibonacci function
 */
int fibonacci(int n) 
{
	int i;
	int fib;
	int prev1;
	int prev2;
	
	if (n <= 2) {
		return 1;
	}
	prev2 = 1;
	prev1 = 1;
	for (i = 0; i < n - 2; i++) {
		fib = prev1 + prev2;
		prev2 = prev1;
		prev1 = fib;	
	}
	
	return fib;	
}

/* 
 * This function can calculate n'th element of fibonacci, tribonacci, tribonnaci 
 * for tribonacci call anybonacci (n, 2)
 * for tribonnaci call anybonacci (n, 1)
 * for fibonacci call anybonacci (n, 0) 
 */
int anybonacci(int n, int a3) 
{
	int i;
	int res;
	int prev1;
	int prev2;
	int prev3;
	int k;

	if (n == 1) {
		return 1;
	} 
	if (n == 2) {
		return 1;
	}
	if ((n == 3) && (a3 != 0)) {
		return a3;
	}
	prev3 = 1;
	prev2 = 1;
	prev1 = a3;
	k = n - 3;
	if (a3 == 0) {
		/* Fibonacci case */
		k = n - 2;
	}
	for (i = 0; i < k; i++) {
		if (a3 != 0) {
			res = prev1 + prev2 + prev3;
			prev3 = prev2;
			prev2 = prev1;
			prev1 = res;
		} else {
			/* Fibonacci case */
			res = prev3 + prev2;
			prev3 = prev2;
		        prev2 = res;	
		}
	}
	
	return res;
}


int main(void) 
{
	int n;
	
	printf("Input the number of sequence element: ");
	scanf("%d", &n);
	printf("Fibonacci number =  %d/%d; Tribonnaci number = %d; Tribonacci number = %d\n", 
			fibonacci(n), anybonacci(n, 0), 
			anybonacci(n, 1), anybonacci(n, 2));

	return 0;
}
