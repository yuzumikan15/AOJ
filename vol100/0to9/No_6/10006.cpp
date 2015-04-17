#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int x;
	int i = 1;
	cin >> x;
	while(x != 0) {
		printf("Case %d: %d\n", i, x);
		i++;
		cin >> x;
	}

	return 0;
}