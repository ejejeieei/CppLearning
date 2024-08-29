#include <iostream>
#include <array>
#include <vector>
int main()
{

std::vector<int> myVector;
myVector.push_back(10);
myVector.push_back(20);
myVector.push_back(30);
  for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
  std::cout << myVector[0]<<" ";

}