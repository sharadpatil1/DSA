#include "vector"
#include "iostream"
using namespace std;

class SharadSolution
{
public:
    int singleNumber(vector<int> &nums)
    {

        if (nums.size() == 1)
            return nums[0];

        int finalval = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int val = nums[i];
            int j = i + 1;
            int originalsize = nums.size();

            for (; j < nums.size(); j++)
            {
                if (val == nums[j])
                {
                    if (val == nums[i])
                    {
                        cout << "Removed from index i & j " << i << "  " << j << endl;
                        cout << "Removed from index val i & j " << nums[i] << "  " << nums[j] << endl;
                        nums.erase(next(nums.begin(), i));
                        nums.erase(next(nums.begin(), j - 1));
                        i = i - 1;
                        j = j -1;
                    }
                    else
                    {
                        nums.erase(next(nums.begin(), j));
                        j = j - 1;
                    }
                }
            }
            if (nums.size() == 1)
                return nums[0];
            if (originalsize == nums.size())
                return nums[i];
        }
        return finalval;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;

        for(int val: nums){
            ans = ans ^ val;
        }

        return ans;

    }
};

int main()
{
    vector<int> a = {-336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, -336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, 354};
    Solution s;
    cout << s.singleNumber(a);

    return 0;
}