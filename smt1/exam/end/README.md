# End-Semester Test

**Warning!**<br>
I have changed the code in the question (only the structure and neatness). The output will remain the same!

## Questions

1. Tulislah output untuk penggalan program C++ dibawah ini!

   <table>
   <tr>
   <td>
   A
   </td>
   <td>
   B
   </td>
   <td>
   C
   </td>
   <td>
   D
   </td>
   </tr>
   <tr>
   <td>

   ```cpp
   // DEKLARASI
   int nilai;
   // ALGORITMA
   nilai = 2
   while (nilai < 20) {
      nilai = nilai + 4;
      cout << nilai << endl;
   }
   ```

   </td>
   <td>

   ```cpp
   // DEKLARASI
   int z;
   int x;
   // ALGORITMA
   z = 1;
   x = 100;
   while (z < 100) {
      x = x - 1;
      z = z + 1;
   }
   cout << "x : " << x << endl;
   cout << "z : " << z;
   ```

   </td>
   <td>

   ```cpp
   // DEKLARASI
   int angka = 0;
   int x;
   // ALGORITMA
   for (x = 1; x <= 5; x++) {
      angka = angka + (2 * x);
      cout << angka << " ";
   }
   ```

   </td>
   <td>

   ```cpp
      // DEKLARASI
      int p = 2;
      int x;
      // ALGORITMA
      for (x = 1; x <= 4; x++) {
         cout << p << " ";
         p = (2 * p) + 2;
      }
      cout << p << " " << endl;
   }
   ```

   </td>
   </tr>
   </table>

2. Tulislah output yang dihasilkan dari tiap pilihan case yang diinputkan!

   <table>
   <tr>
   <td>
   A
   </td>
   <td>
   B
   </td>
   </tr>
   <tr>
   <td>

   ```cpp
   //DEKLARASI
   int a;
   //ALGORITMA
   cout << "Input a: ";
   cin >> a;
   switch (a) {
      case 3:
         a = a + 3;
         break;

      case 1:
         a++;
         break;

      case 2:
      case 4:
         a = a - 1;
         break;
   }
   cout << a;
   ```

   </td>
   <td>

   ```cpp
   //DEKLARASI
   int b;
   //ALGORITMA
   cout << "Input b: ";
   cin >> b;
   switch (b) {
      case 1:
      case 2:
         b = b + 2;
         break;

      case 3:
         b = 2 * b;
         break;

      case 4:
         b++;

      default:
         b--;
   }
   cout << b;
   ```

   </td>
   </tr>
   </table>

3. Tulislah algoritma yang menampilkan bilangan bulat dari 20 sampai 78, tapi di setiap bilangan yang
   habis dibagi 3 tampilkan nama anda dan setiap yang habis dibagi 5 tampilkan nama kelas anda!
4. Tulislah algoritma pengulangan dengan C++ untuk mencetak seperti dibawah ini, dimisalkan
   diinputkan N=3!

   <table>
   <tr>
   <td>
   A
   </td>
   <td>
   B
   </td>
   </tr>
   <tr>
   <td>
   3 3 3<br>
   3 3 3<br>
   3 3 3
   </td>
   <td>
   3 # # #<br>
   3 # # #<br>
   3 # # #
   </td>
   </tr>
   </table>

5. Tulislah algoritma untuk membaca data nilai dari inputan secara berulang. Pembacaan nilai
   berhenti jika diinputkan 999, kemudian hasilnya program akan menampilkan nilai terendah (min)
   dari sekumpulan data nilai yang telah diinputkan!

## Answers

1. Below is the answer!
   1. Error, karena pada baris ke-4 tidak terdapat titik koma, yang mengakibatkan compiler tidak dapat
      melanjutkan proses kompilasi. Jika baris 4 terdapat titik koma dan tidak ditemukan error, maka
      outputnya sebagai berikut:<br>
      6<br>
      10<br>
      14<br>
      18<br>
      22
   2. x: 1<br>
      z : 100
   3. 2 6 12 20 30
   4. Error, karena pada baris terakhir terdapat tutup kurawal yang tidak diketahui pembukanya, hehe.
      Jika baris terakhir (tutup kurawal tersebut) tidak ada, maka outputnya adalah:<br>
      2 6 14 30 62
2. Below is the answer!
   1. 1 = 2<br>
      2 = 1<br>
      3 = 6<br>
      4 = 3<br>
      selain itu, outputnya sesuai apa yang diinputkan
   2. 1 = 3<br>
      2 = 4<br>
      3 = 6<br>
      4 = 4<br>
      selain itu, outputnya adalah angka yang diinputkan lalu dikurangi 1
3. You can see the code [here](./integer.cpp)
4. Below is the answer!
   1. You can see the code [here](./factorial-a.cpp)
   2. You can see the code [here](./factorial-b.cpp)
5. You can see the code [here](./lowest.cpp)
