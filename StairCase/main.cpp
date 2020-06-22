#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
	for (int i = 0; i < n; i++) {
		int s = n - (i+1);
		for (int j = 0; j < s; j++) {
			cout << " ";
		}

		int pattern = i+1;
		for (int j = 0; j < pattern; j++)
		{
			cout << "#";
		}

		cout << "\n";
	}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
