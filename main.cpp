#include <iostream>


// https://www.techiedelight.com/print-contents-array-cpp/ help with arrays
int main()
{
  int nums[] = {0, 0, 0, 0, 0, 0};
  size_t n = sizeof(nums)/sizeof(nums[0]);
  for (size_t i = 0; i < n; i++){
    std::cout << nums[i] << std::endl;

  }
  
}