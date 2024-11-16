
#include "vector"
#include "iostream"
using namespace std;


class Solution {
public:
bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber / 10;
    }
};



int main()
{
  vector<int> nums = {8, 4, 2, 7};
  Solution s;
  int val = s.isPalindrome(121);
   val = s.isPalindrome(12321);
   val = s.isPalindrome(001100);

  return 0;
}