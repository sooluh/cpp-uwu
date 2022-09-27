#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int total);
void dump(array numbers, int total);
void bubble(array numbers, int total);
void binary(array numbers, int total, int search, bool *found);

int main() {
  array numbers;
  int total, search;
  bool found;

  cout << "Banyaknya elemen larik?: ";
  cin >> total;

  read(numbers, total);

  cout << "\nData sebelum diurutkan:\n";
  dump(numbers, total);

  bubble(numbers, total);

  cout << "\nData setelah diurutkan:\n";
  dump(numbers, total);

  cout << "\nElemen yang akan dicari: ";
  cin >> search;

  binary(numbers, total, search, &found);
  if (found) {
    cout << "Elemen " << search;
    cout << " ditemukan!\n";
  } else {
    cout << "Elemen " << search;
    cout << " tidak ditemukan!\n";
  }

  return 0;
}

void read(array numbers, int total) {
  int loop;
  cout << "\n";
  for (loop = 0; loop < total; loop++) {
    cout << "Masukkan elemen larik index ke-";
    cout << loop << ": ";
    cin >> numbers[loop];
  }
}

void dump(array numbers, int total) {
  int loop = 0;
  for (loop; loop < total; loop++) {
    cout << "Elemen larik index ke-";
    cout << loop << ": " << numbers[loop];
    cout << "\n";
  }
}

void bubble(array numbers, int total) {
  int loop = 0, count, temp;
  for (loop; loop < total; loop++) {
    for (count = total - 1; count > loop; count--) {
      if (numbers[count] > numbers[count - 1]) {
        temp = numbers[count];
        numbers[count] = numbers[count - 1];
        numbers[count - 1] = temp;
      }
    }
  }
}

void binary(array numbers, int total, int search, bool *found) {
  int left, right, center;
  *found = false;

  left = 0;
  right = total - 1;

  while ((!found) && (left <= right)) {
    center = (left + right) / 2;
    if (numbers[center] == search) {
      *found = true;
    } else if (numbers[center] < search) {
      left = center + 1;
    } else {
      right = center - 1;
    }
  }
}
