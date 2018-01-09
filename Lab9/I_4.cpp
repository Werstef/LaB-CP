#include <iostream>
#include <cstring>

using namespace std;

int v[101], n, i;

int main() {
	int sol;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> v[i];
	}

	do {
		sol = 0;
		for (i = 0; i < n-1; i++) {
			if (v[i] > v[i + 1]) {
				sol = 1;
				swap(v[i], v[i + 1]);
			}
		}
		for (i = 0; i < n; i++)
			cout << v[i] << " ";
		cout << "\n";
	}while (sol != 0);
		
	for (i = 0; i < n; i++)
		cout << v[i] << " ";

	cout << "\n";
	
	system("pause");

	return 0;
}