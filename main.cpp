#include <iostream>
#include <string>
using namespace std;

// https://www.techiedelight.com/print-contents-array-cpp/ help with arrays

// void algo() {

// }

int main()
{

  char input;
  string close = "Closed";
  string running = "Programming is running";
  cout << "[R]un the program \n\ [C]lose the program \n\ Option: "; 
  cin >> input; 

  if(input == 'R'){

    std::cout << running <<std::endl;
    
    int nums[] = {0, 0, 0, 0, 0, 0};

    std::cout << nums << std::endl;
    // size_t n = sizeof(nums)/sizeof(nums[0]);

    // for (size_t i = 0; i < n; i++){

    //   std::cout << nums[i] << std::endl;
    //   // int plus = nums[i];
    //   // while (plus == 0)
    //   // {
        
    //   //   std::cout << plus + 1 << std::endl;
    //   // }
      
 

    // }; 
} else if(input == 'C'){
   std::cout << close << std::endl;
}
}