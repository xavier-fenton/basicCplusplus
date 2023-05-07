#include <iostream>
using namespace std;

// https://www.techiedelight.com/print-contents-array-cpp/ help with arrays

int main()
{
  char input;
  string close = "Close";
  string running = "Programming is running";
  cout << "[R]un the program \n\[C]lose the program: "; 
  cin >> input; 
  if(input == 'R'){
    std::cout << running <<std::endl;
  }
  else if(input == 'C'){
    std::cout << close <<std::endl;
  }
  // int nums[] = {0, 0, 0, 0, 0, 0};

  // size_t n = sizeof(nums)/sizeof(nums[0]);
  // for (size_t i = 0; i < n; i++){
  //   std::cout << nums[i] << std::endl;

  // }
  
}