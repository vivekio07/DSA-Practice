#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;  // map number to index

        if (nums[index] < 0) {
            // Already visited → duplicate found
            result.push_back(abs(nums[i]));
        } else {
            // Mark as visited (make negative)
            nums[index] = -nums[index];
        }
    }

    return result;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    
    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int x : duplicates) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
