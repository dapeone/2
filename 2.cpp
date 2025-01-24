#include <iostream>
using namespace std;

int main() {
  int elements, max;

  cout << "Введите количество элементов массива   ";
  cin >> elements;

  int array[elements];
  
  cout << "Введите 1 элемент массива   ";
  cin >> array [0];
  max = array [0];
  
  for (int i = 1; i < elements; ++i) {
    cout << "Введите " << i + 1 << " элемент массива   ";
    cin >> array [i];

    if (array [i] > max) {
      max = array [i];
    }
  }

  cout << "Максимальный элемент массива: " << max;

  return 0;
}