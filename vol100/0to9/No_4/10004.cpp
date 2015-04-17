#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int len = v.size();
	// quick sort (in "algorithm")
	// default: ascending order
	// sort (v.begin(), v.end(), greater<int>()) to descending order
	sort (v.begin(), v.end());
	for (int i = 0; i < len - 1; i++) {
		cout << v.at(i) << " ";
	}
	cout << v.at(len - 1) << endl;
	return 0;
}