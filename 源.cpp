#include <iostream>
#include<algorithm>
using namespace std;
#define MAX 101

int n;
static int Triangle[MAX][MAX];
int *maxSum;

int main()
{
	int i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
			cin >> Triangle[i][j];
	maxSum = Triangle[n];

	for (i = n - 1; i >= 1; i--)
		for (j = 1; j <= i; j++)
			maxSum[j] = max(maxSum[j], maxSum[j + 1]) + Triangle[i][j];

	cout << maxSum[1] << endl;
	return 0;
}