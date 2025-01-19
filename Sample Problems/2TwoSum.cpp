// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
// brute force
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };
// using hashmap

#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    // Map to store the indices of the numbers we have seen so far
    unordered_map<int, int> numberIndexMap;

    for (int currentIndex = 0; currentIndex < nums.size(); ++currentIndex)
    {
      int currentNumber = nums[currentIndex];

      // Calculate the number we need to reach the target
      int numberNeeded = target - currentNumber;

      // Check if the needed number exists in the map
      if (numberIndexMap.find(numberNeeded) != numberIndexMap.end())
      {
        return {numberIndexMap[numberNeeded], currentIndex};
      }

      // Store the current number and its index in the map
      numberIndexMap[currentNumber] = currentIndex;
    }

    // Return an empty vector if no solution is found
    return {};
  }
};
