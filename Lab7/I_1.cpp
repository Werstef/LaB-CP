#include <iostream>
#include <cstring>

using namespace std;

int  n, i;

int main() {
	
	cin >> n;
	int *p;
	p = new int[n];

	for (i = 0; i < n; i++)
		cin >> p[i];

	for (i = 0; i < n; i++)
		cout << p[i] << " ";

	system("pause");

	return 0;
}