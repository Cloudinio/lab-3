#include <iostream>
#include <cmath>
using namespace std;

int minimum = 100000000;
int arr[32];

int Gramm(int counter, int n, int Masha, int Petya) {
	if (counter == n)
	{
		if (abs(Masha - Petya) < minimum)
		{
			minimum = abs(Masha - Petya);
			return minimum;
		}
	}
	else {
		Gramm(counter + 1, n, Masha, Petya + arr[counter]);
		Gramm(counter + 1, n, Masha + arr[counter], Petya);
	}
	return minimum;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << Gramm(0, n, 0, 0);
}
