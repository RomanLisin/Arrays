#include<iostream>
using namespace std;
#define K k%N //multiplicity

void main() {
	
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	int shift;
	bool directShift = 0;

	cout << "Input number for shift: "; cin >> shift;
	cout << "If you want to move to the right, enter any number other than 0, to the left enter 0: "; cin >> directShift;

	// F(n) = F(n - 1) + F(n - 2)  Fibonacci formula
		for (int i = 0; i < N; i++) {

			arr[i] = (i > 1 ? arr[i - 1] + arr[i - 2] : i); // Fibonacci sequence

		}
		cout << endl << endl;

	for (int k = 0; k <= shift; k++) {
		for (int i = 0; i < N; i++) {
			if (directShift) cout<<(i >= K ? arr[i - K] : arr[i + N - K]) << "\t";  // right shift
			else  cout << (i < (N - K) ? arr[i + K] : arr[i - N + K]) << "\t";		// left shift

		}
		if (k == 0)cout << endl; cout << endl;

	}
	cout << endl << endl;

}