#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1001][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	

	int d[1001][3]; //d[i][j]: i번집을 색j로 칠했을 때 1~i번 집 칠하는 비용 최솟값
	d[0][0] = a[0][0], d[0][1] = a[0][1], d[0][2] = a[0][2];
	for (int i = 1; i < n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];//R
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];//G
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];//B
	}

	int min = d[n - 1][0];
	for (int i = 1; i < 3; i++)
		if (min > d[n - 1][i])
			min = d[n - 1][i];

	cout << min << '\n';
	
	return 0;
}
