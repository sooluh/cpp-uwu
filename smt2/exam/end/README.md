# End-Semester Test

## Questions

1. Kode program dibawah ini adalah sebuah fungsi/prosedur dalam proses
   pengurutan

   <table>
   <tr>
   <td>

   ```cpp
   void ...(Arrayint A, int n)
   {
     int i, j, imin, temp;
     for (i = n - 1; i > 1; i--)
     {
       imin = i;
       for(j = 0; j < i; j++)
       {
         if (A[j] < A[imin])
         {
           imin = j;
         }
       }
       temp = A[i];
       A[i] = A[imin];
       A[imin] = temp;
     }
   }
   ```

   </td>
   <td>

   1. Termasuk algoritma pengurutan apa kode program tersebut?
   2. Gambarkan secara visual step by step proses terjadinya<br>
      pengurutan sesuai algoritma yang disebutkan pada point a<br>
      dengan contoh data Array A berikut!

      <table>
      <tr>
      <td>
      85
      </td>
      <td>
      35
      </td>
      <td>
      70
      </td>
      <td>
      25
      </td>
      <td>
      30
      </td>
      </tr>
      </table>

   </td>
   </tr>
   </table>

2. Jelaskan perbedaan antara **Queue** dan **Stack**!
3. Jelaskan apa yang dimaksud dengan **Pointer**, **Operator Deference** dan
   **Operator Reference**, serta berikan contohnya!
4. Jelaskan yang dimaksud dengan **Linked List** dan operasi apa saja yang dapat
   dilakukan pada Singly Linked List?
5. Jelaskan yang dimaksud dengan Rekursif serta berikan contoh kode program C++
   dalam sebuah fungsi!
6. Tuliskan kode program untuk Dequeue pada Antrian!
7. Perhatikan kode program dibawah ini dan kerjakan sesuai perintahnya:

   <table>
   <tr>
   <td>

   ```cpp
   void ...(int data)
   {
     if (Full() != true)
     {
       s.top++;
       s.isi[s.top] = info;
     }
     else
     {
       cout << "Stack Penuh";
     }
   }
   ```

   </td>
   <td>

   1. Fungsi/prosedur dalam algoritma apa kode program tersebut?
   2. Berikan penjelasan/keterangan kode program disamping perbarisnya!

   </td>
   </tr>
   </table>

8. Buat program (dalam sebuah fungsi) untuk proses pencarian binary search
   pada data array yang terurut menurun!

## Answers

1.  1.  Selection Sort
    2.  |  0  |  1  |  2  |  3  |  4  |
        | :-: | :-: | :-: | :-: | :-: |
        | 85  | 35  | 70  | 25  | 30  |

        Cari elemen terkecil array A[0-4]:<br>
        min = 25, imin = 3 tukar A[imin] dengan A[4]

        |  0  |  1  |  2  |  3  |  4  |
        | :-: | :-: | :-: | :-: | :-: |
        | 85  | 35  | 70  | 30  | 25  |

        Cari elemen terkecil array A[0-3]:<br>
        min = 30, imin = 3 tidak perlu ada pertukaran

        |  0  |  1  |  2  |  3  |  4  |
        | :-: | :-: | :-: | :-: | :-: |
        | 85  | 35  | 70  | 30  | 25  |

        Cari elemen terkecil array A[0-2]:<br>
        min = 35, imin = 1 tukar A[imin] dengan A[2]

        |  0  |  1  |  2  |  3  |  4  |
        | :-: | :-: | :-: | :-: | :-: |
        | 85  | 70  | 35  | 30  | 25  |

        Pertukaran sudah selesai karena nomor sudah urut pada posisi yang tepat.

2.  **Stack** menggunakan konsep LIFO atau Last In First Out (yang pertama masuk
    akan keluar terakhir), sedangkan **Queue** menggunakan konsep FIFO atau
    First In First Out (yang pertama masuk akan pertama keluar).
3.  **Pointer** adalah suatu variabel yang menyimpan alamat dari suatu variabel
    yang ditunjukkan oleh pointer yang bersangkutan.<br>
    **Operator Dereference** (&) yaitu operator yang berfungsi mendeklarasikan
    sebuah variabel didalam penggantian memori. Operator ini biasa disebut
    dengan "address of".<br>
    **Operator Reference** (\*) yaitu operator yang dapat mengeluarkan (menampilkan)
    nilai dari alamat memori yang di tunjuk. Biasanya Operator reference disebut
    dengan "value pointed by".
4.  **Linked List** adalah sebuah rangkaian _struct_ sejenis (bertipe sama) yang
    dihubungkan dengan menggunakan salah satu atau beberapa field yang bertipe
    pointer. Linked List merupakan struktur data non-primitive.<br>
    Operasi pada Singly List:<br>
    1.  CreateList, yang berguna untuk pembuatan Node baru
    2.  Traverse, yaitu mengunjungi semua List dan menampilkannya
    3.  InsertFirst, yaitu menambah List di bagian paling awal
    4.  InsertLast, yaitu menambah List di bagian paling akhir
    5.  DeleteFirst, yaitu menghapus List pada bagian paling awal
    6.  DeleteLast, yaitu menghapus List pada bagian paling akhir
5.  Rekursif adalah proses (sebuah fungsi) yang bisa memanggil (fungsi) dirinya
    sendiri. Rekursif merupakan bentuk alternatif dari bentuk perulangan.<br>
    Check out the sample code [here](./recursive.cpp)!

6.  ```cpp
    void deQueue()
    {
      int loop;

      if (isEmpty())
      {
        cout << "Antrian underflow!";
        return;
      }

      cout << "Antrian yang akan di hapus: ";
      cout << queues.values[queues.head];

      for (loop = queues.head; loop <= queues.tail; loop++)
      {
        queues.values[loop] = queues.values[loop + 1];
        queues.tail--;
      }
    }
    ```

7.  1.  Stack

    2.  ```cpp
        // pendeklarasaian fungsi dengan nilai balik "void"
        // dengan parameter bertipe data integer yaitu "data"
        void ...(int data)
        {
          // jika fungsi Full() mengembalikan nilai bukan "true" (antrian tidak penuh)
          if (Full() != true)
          {
            // maka, tingkatkan nilai pada "top" (+1)
            s.top++;
            s.isi[s.top] = info;
            // ini kesalahan, mungkin variable yang dimaksud "data"?
            // memasukkan nilai dari variable "data" ke stack dengan index tertinggi
            // karena algoritma diatasnya berguna untuk meningkatkan nilai pada "top"
            // index tertinggi saat ini adalah s.top + 1
          }
          else
          {
            // selain itu
            cout << "Stack Penuh";
            // munculkan pesan bahwa stack penuh
          }
        }
        ```

8.  You can see the code [here](./binary.cpp)
