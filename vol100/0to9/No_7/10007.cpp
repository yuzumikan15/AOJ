#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while(a != 0 || b != 0) {
	    if (a < b) {
			printf("%d %d\n", a, b);	
	    }
	    else {
	    	printf("%d %d\n", b, a);
	    }
	    cin >> a >> b;
	}


  	return 0;
}