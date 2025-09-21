// LeetCode Problem - Majority Element
//Moore's Voting Algo
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int majority_element = 0;
    int count = 0;
    for (int i : nums)
    {
      if (majority_element == 0)
      {
        majority_element = i;
      }
      if (majority_element == i)
      {
        count++;
      }
      else
      {
        count--;
      }
    }
    return majority_element;
  }
};