#include<stdio.h>

void set_max_ptr(int m[], int size, int** pmax) {
	int* a = &m[0];

	for (int i = 0; i < (size - 1); i++) {

		if (*a < m[i + 1]) {
			*a = m[i + 1];


		}
		else {

		}

	}

	*pmax = a;


}

int main(void) {
	int m[10] = { 0,4,6,20,8,9,2,7,5,10 };
	int* pmax;

	set_max_ptr(m, 10, &pmax);

	printf("%d", *pmax);

	return 0;
}