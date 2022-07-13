#include <iostream>
using namespace std;

int total = 0;
struct NODE
{
  int VALUE;
  NODE *NEXT;
};

NODE *put(int value);
void dump(NODE *pointer);
void insFirst(NODE **head, int value);
void insLast(NODE **head, int value);
void delFirst(NODE **head);
void delLast(NODE **head);

int main()
{
  NODE *heads = NULL;
  int value;
  int choice;

  do
  {
    system("clear"); // system("cls");

    cout << "Perintah pada Linked List\n";
    cout << "====================================\n";
    cout << "1. Insert First\n";
    cout << "2. Insert Last\n";
    cout << "3. Delete First\n";
    cout << "4. Delete Last\n";
    cout << "5. Keluar\n";
    cout << "====================================\n";
    cout << "List saat ini:\n";
    dump(heads);
    cout << "====================================\n";
    cout << "Pilihan: ";
    cin >> choice;
    cout << "\n";

    switch (choice)
    {
    case 1:
      cout << "Fungsi Insert First\n";
      cout << "====================================\n";
      cout << "Input nilai yang akan ditambah: ";
      cin >> value;
      insFirst(&heads, value);
      break;

    case 2:
      cout << "Fungsi Insert Last\n";
      cout << "====================================\n";
      cout << "Input nilai yang akan ditambah: ";
      cin >> value;
      insLast(&heads, value);
      break;

    case 3:
      cout << "Fungsi Delete First\n";
      cout << "====================================\n";
      delFirst(&heads);
      break;

    case 4:
      cout << "Fungsi Delete Last\n";
      cout << "====================================\n";
      delLast(&heads);
      break;

    case 5:
      cout << "Program dihentikan.\n";
      break;

    default:
      cout << "Pilihan kamu tidak valid!\n";
    }
  } while (choice != 5);

  return 0;
}

NODE *put(int value)
{
  NODE *fresh = (NODE *)malloc(sizeof(NODE));

  fresh->VALUE = value;
  fresh->NEXT = NULL;

  return fresh;
}

void dump(NODE *pointer)
{
  if (total == 0)
  {
    cout << "Singly linked list kosong.\n";
    return;
  }

  int loop = 0;

  cout << "[ ";
  while (pointer != NULL)
  {
    if (loop != 0)
    {
      cout << ", ";
    }

    cout << pointer->VALUE;
    pointer = pointer->NEXT;

    loop++;
  }
  cout << " ]";
  cout << "\nJumlah NODE ada " << total << "\n";
}

void insFirst(NODE **head, int value)
{
  NODE *temp = NULL;
  temp = put(value);

  if (*head == NULL)
  {
    *head = temp;
  }
  else
  {
    temp->NEXT = *head;
    *head = temp;
  }

  total++;
  temp = NULL;
}

void insLast(NODE **head, int value)
{
  NODE *temp = NULL;
  NODE *pointer = *head;
  temp = put(value);

  if (*head == NULL)
  {
    *head = temp;
  }
  else
  {
    while (pointer->NEXT != NULL)
    {
      pointer = pointer->NEXT;
    }

    pointer->NEXT = temp;
  }

  total++;
}

void delFirst(NODE **head)
{
  NODE *temp = NULL;

  if (*head == NULL)
  {
    cout << "\nOperasi tidak bisa dilakukan karena Singly Linked List kosong!\n";
    return;
  }

  temp = *head;
  if (temp->NEXT == NULL)
  {
    *head = NULL;
  }
  else
  {
    *head = temp->NEXT;
    temp->NEXT = NULL;
    free(temp);
  }

  total--;
}

void delLast(NODE **head)
{
  NODE *temp = *head;
  NODE *pointer = NULL;

  if (*head == NULL)
  {
    cout << "\nOperasi tidak bisa dilakukan karena Singly Linked List kosong!\n";
    return;
  }

  if (temp->NEXT == NULL)
  {
    *head = NULL;
  }
  else
  {
    while (temp->NEXT->NEXT != NULL)
    {
      temp = temp->NEXT;
    }

    pointer = temp->NEXT;
    temp->NEXT = NULL;
    free(pointer);
  }

  total--;
}
