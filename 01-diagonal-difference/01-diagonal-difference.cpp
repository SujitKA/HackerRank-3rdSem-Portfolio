#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum = primarySum + arr[i][i];
        secondarySum = secondarySum + arr[i][n-1-i];
    }

    int diff = primarySum - secondarySum;
    if (diff < 0) {
        diff = -diff;
    }
    return diff;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << diagonalDifference(arr) << endl;
    return 0;
}