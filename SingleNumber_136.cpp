#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums){
            result ^= num;
        }
        return result;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution sol;
    int answer = sol.singleNumber(nums);

    cout << "The single number is: " << answer << endl;

    return 0;
}
