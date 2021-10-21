# include <stdio.h>

int main(void) {

	int x = 6;
	int y = 5;

	printf("cislo %d je ", x);

	if (x < y) {
		printf("mensi");
	}
	else {
		printf("vetsi");
	}

	printf(" nez %d\n", y);
}