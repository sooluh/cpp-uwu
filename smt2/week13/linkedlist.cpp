#include <iostream>
#include <stdlib.h>
#include <curses.h>
using namespace std;

struct NODE
{
  int DATA;
  struct NODE *NEXT;
};

int jml_node = 0;
struct NODE *getNode(int X);
void ShowLIST(NODE *NodePENUNJUK);
void InsertFIRST(NODE **H_Node, int nilai);
void InsertLAST(NODE **H_Node, int nilai);
void DeleteFIRST(NODE **H_Node);
void DeleteLAST(NODE **H_Node);

int main(int argc, char const *argv[])
{
  struct NODE *HEAD_List = NULL;
  int NILAI;
  int PILIH;
  do
  {
    system("cls");
    cout << "Perintah pada Linked List\n";
    cout << "-------------------------------\n";
    cout << "1. Insert First\n";
    cout << "2. Insert Last\n";
    cout << "3. Delete First\n";
    cout << "4. Delete Last\n";
    cout << "5. Exit\n";
    cout << "-------------------------------\n";
    cout << "Current List : ";
    ShowLIST(HEAD_List);
    cout << "-------------------------------\n";
    cout << "Pilihan : ";
    cin >> PILIH;
    switch (PILIH)
    {
    case 1:
    {
      cout << "\n\n";
      cout << "Fungsi Insert First\n";
      cout << "==========================\n";
      cout << "Input nilai yang akan ditambahkan : ";
      cin >> NILAI;
      InsertFIRST(&HEAD_List, NILAI);
      break;
    }
    case 2:
    {
      cout << "\n\n";
      cout << "Fungsi Insert Last\n";
      cout << "==========================\n";
      cout << "Input nilai yang akan ditambahkan : ";
      cin >> NILAI;
      InsertLAST(&HEAD_List, NILAI);
      break;
    }
    case 3:
    {
      cout << "\n\n";
      cout << "Fungsi Delete First\n";
      cout << "==========================\n";
      DeleteFIRST(&HEAD_List);
      break;
    }
    case 4:
    {
      cout << "\n\n";
      cout << "Fungsi Delete Last\n";
      cout << "==========================\n";
      DeleteLAST(&HEAD_List);
      break;
    }
    case 5:
    {
      cout << "\n\n";
      cout << "Program Selesai. . .\n";
      break;
    }
    default:
      cout << "Press pilihan salah. . .\n\n";
    };
    cout << "Press any key. . .\n\n";
    getch();
  } while (PILIH != 5);
  system("pause");
  return 0;
}

struct NODE *getNode(int X)
{
  struct NODE *newNODE;
  newNODE = (struct NODE *)malloc(sizeof(struct NODE));
  newNODE->DATA = X;
  newNODE->NEXT = NULL;
  return newNODE;
}

void ShowLIST(struct NODE *NodePENUNJUK)
{
  if (jml_node == 0)
  {
    cout << "Singly Linked List kosong. . . ";
  }
  else
  {
    while (NodePENUNJUK != NULL)
    {
      cout << " " << NodePENUNJUK->DATA;
      NodePENUNJUK = NodePENUNJUK->NEXT;
    }
    cout << "\n";
    cout << "Jumlah NODE ada " << jml_node;
  }
  cout << "\n";
}

void InsertFIRST(struct NODE **H_Node, int nilai)
{
  struct NODE *TEMP_NODE = NULL;
  TEMP_NODE = getNode(nilai);
  if (*H_Node == NULL)
  {
    *H_Node = TEMP_NODE;
  }
  else
  {
    TEMP_NODE->NEXT = *H_Node;
    *H_Node = TEMP_NODE;
  }
  jml_node++;
  TEMP_NODE = NULL;
}

void InsertLAST(struct NODE **H_Node, int nilai)
{
  struct NODE *TEMP_NODE = NULL;
  NODE *NodePENUNJUK;
  NodePENUNJUK = *H_Node;
  TEMP_NODE = getNode(nilai);
  if (*H_Node == NULL)
  {
    *H_Node = TEMP_NODE;
  }
  else
  {
    while (NodePENUNJUK->NEXT != NULL)
    {
      NodePENUNJUK = NodePENUNJUK->NEXT;
    }
    NodePENUNJUK->NEXT = TEMP_NODE;
  }
  jml_node++;
}

void DeleteFIRST(struct NODE **H_Node)
{
  struct NODE *TEMP_NODE = NULL;
  if (*H_Node == NULL)
  {
    cout << "\n";
    cout << "Operasi tidak bisa dilakukan karena Singly Linked List kosong\n";
  }
  else
  {
    TEMP_NODE = *H_Node;
    if (TEMP_NODE->NEXT == NULL)
    {
      *H_Node = NULL;
    }
    else
    {
      *H_Node = TEMP_NODE->NEXT;
      TEMP_NODE->NEXT = NULL;
      free(TEMP_NODE);
    }
    jml_node--;
  }
}

void DeleteLAST(struct NODE **H_Node)
{
  struct NODE *TEMP_NODE;
  TEMP_NODE = *H_Node;
  if (*H_Node == NULL)
  {
    cout << "\n";
    cout << "Operasi tidak bisa dilakukan karena Singly Linked List kosong\n";
  }
  else
  {
    if (TEMP_NODE->NEXT == NULL)
    {
      *H_Node = NULL;
    }
    else
    {
      while (TEMP_NODE->NEXT->NEXT != NULL)
      {
        TEMP_NODE = TEMP_NODE->NEXT;
      }
      TEMP_NODE->NEXT = NULL;
      free(TEMP_NODE);
    }
    jml_node--;
  }
}
