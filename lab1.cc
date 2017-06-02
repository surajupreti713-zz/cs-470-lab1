#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
void bubbleSort1(T *array, int len) {
    for (int j = 0; j < len - 1; j++) {
        for (int i = j + 1; i < len; i++) {
            if (array[j] > array[i]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


int main()
{
  cout << "************ Integer bubble sort ****************" << endl;
  int bar[] = {100, 1, 95, 2,5,3};
  bubbleSort1(bar, 6);
  for(int i = 0; i <6; i++) {
      cout << bar[i] << "  ";
  }
  cout << endl;
  cout << endl;
  cout << "************ String bubble sort ****************" << endl;
  string names[] = {"suraj", "abhiyan", "pranay", "binit"};
  bubbleSort1(names, 4);
  for(int i = 0; i < 4; i++) {
      cout << names[i] << "  ";
  }
  cout << endl;
  
  return 0;
}

