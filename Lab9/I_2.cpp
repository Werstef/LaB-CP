#include <iostream>
#include <cstring>

using namespace std;

int v[101], n, x;
int i;
int st, dr;

int main() {
	cin >> n >> x;
	for (i = 0; i < n; i++)
		cin >> v[i];

	st = 0;
	dr = n-1;
	int mid = 0;

	while (st <= dr) {
		mid = st / 2 + dr / 2;
		if (v[mid] == x)
			break;
		if (v[mid] < x)
			st = mid + 1;
		else
			dr = mid - 1;
	}

	if (st <= dr)
		cout << mid << "\n" ;
	else
		cout << "nu exista\n" ;

	system("pause");

	return 0;
}