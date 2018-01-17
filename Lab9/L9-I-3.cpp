#include <iostream>
#include <cstring>

using namespace std;

int v[101], n;
int i;
int st, dr;
char x;

int main() {
	cin>>n;
	char s[200];
	for(i=0; i<n; i++)
        cin>>s[i];
    cin>>x;
	st = 0;
	dr = strlen(s);
	int mid = 0;

	while (st <= dr) {
		mid = st / 2 + dr / 2;
		if (s[mid] == x)
			break;
		if (s[mid] < x)
			st = mid + 1;
		else
			dr = mid - 1;
	}

	if (st <= dr)
		cout << mid+1 << "\n" ;
	else
		cout << "nu exista\n" ;

	return 0;
}


