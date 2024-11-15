
#include "vector"
#include "iostream"
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
          return {i, j};
      }
    }
    return {0, 0};
  }
};

int main()
{
  // vector<int> a = {-336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, -336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, 354};
  vector<int> nums = {8, 4, 2, 7};
  // vector <int> nums = {3,2,4};
  // vector <int> nums = {3,3};
  Solution s;
  vector <int> out = s.twoSum(nums, 9);
  cout<< "output  " << out[0] << "  "<< out[1];
  // cout << s.singleNumber(a);

  return 0;
}
