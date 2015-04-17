#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	double a, b;
	int d, r;
	double f;

	cin >> a >> b;
	d = (int)a / (int)b;
	r = (int)a % (int)b;
	f = a / b;

	printf("%d %d %.6f\n", d, r, f);
  	return 0;
}