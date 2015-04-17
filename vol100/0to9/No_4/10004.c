#include <stdio.h>
#include <stdlib.h>

// cmp: ascending order
int cmp (const void *a, const void *b) {
	// cast void* to int*
	int n1 = *(int *)a;
  	int n2 = *(int *)b;
  	// transpose n1 and n2 for descending order
  	if(n1 < n2)  return -1;
  	else if(n1 == n2) return  0;
  	else  return  1;
}

int main() {
	int arr[3];
	int i;
	for (i = 0; i < 3; i++) {
		int a;
		scanf ("%d", &a);
		arr[i] = a;
	}
	// quick sort (in stdlib.h)
	qsort(arr, 3, sizeof(int), cmp);
	for (i = 0; i < 2; i++) {
		printf("%d ", arr[i]);
	}
	printf("%d\n", arr[i]);
	return 0;
}