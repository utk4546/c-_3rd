#include <iostream>
using namespace std;

int main() {
    int height[] = {0, 3, 4, 0, 2, 1};
    int n = 6;

    int leftMax[n], rightMax[n];

    // Left max array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Right max array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int totalWater = 0;

    cout << "Index  Height  LeftMax  RightMax  WaterAtIndex\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        int waterAtIndex = min(leftMax[i], rightMax[i]) - height[i];
        totalWater += waterAtIndex;

        cout << i << "\t"
             << height[i] << "\t"
             << leftMax[i] << "\t   "
             << rightMax[i] << "\t\t"
             << waterAtIndex << endl;
    }

    cout << "\nTotal Water Trapped = " << totalWater << endl;

    return 0;
}
