#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSum(vector<int>& arr, int k) {
    int n = arr.size();
    int max_sum = INT_MIN;

    for (int i = 0; i <= n - k; i++) {
        int current_sum = 0;

        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }

        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter window size k: ";
    cin >> k;

    cout << "Maximum sum = " << maxSum(arr, k);
    return 0;
}
