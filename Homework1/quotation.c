#include <stdio.h>

int main(void) {
        
	int i;
	int res;
	
	printf("ml' nob:\n");
	res = scanf("%d", &i);
	if ((res != 1) || (i < 1) || (i > 5)) {
		printf("luj\n");
	} else if (i == 1) {
		printf("Qapla'\n");
		printf("noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.\n");
	} else if (i == 2) {
		printf("Qapla'\n");
		printf("Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.\n");
	} else if (i == 3) {
		printf("Qapla'\n");
		printf("qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.\n");
	} else if (i == 4) {
		printf("Qapla'\n");
		printf("Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.\n");
	} else if (i == 5) {
		printf("Qapla'\n");
		printf("leghlaHchu'be'chugh mIn lo'laHbe' taj jej.\n");
	}

	return 0;

}
