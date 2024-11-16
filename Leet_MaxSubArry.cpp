
#include "vector"
#include "iostream"
using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {

    int maxNum = INT_MIN;
    int currenetSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        currenetSum=currenetSum + nums[i];
        maxNum = max(currenetSum,maxNum);
        if(currenetSum<0) currenetSum = 0;

    }
    return maxNum;
  }
};

int main()
{

  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  Solution s;
  cout<<s.maxSubArray(nums);

}
