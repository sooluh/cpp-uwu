# Mid-Semester Test

## Questions

1. Jelaskan pengertian algoritma dan pemrograman dan jelaskan apa hubungan antara
   keduanya!
2. Sebutkan dan paparkan mengenai konstruksi/struktur dasar algoritma beserta
   contohnya!
3. Jelaskan pengertian variabel dalam pemrograman serta kegunaanya!
4. Jelaskan aturan dalam mendeklarasikan sebuah variabel beserta contoh yang
   salah dan yang benar!
5. Jelaskan apa itu tipe data dan jelaskan macam-macam tipe data!
6. Tuliskan dua contoh tipe bentukan yang berupa record dalam notasi pseudocode!
7. Sebutkan dan jelaskan notasi apa saja yang dapat dibuat dalam memecahkan
   sebuah masalah dengan algoritma serta berikan contohnya!
8. Gambarkan dan jelaskan simbol-simbol yang ada pada flowchart!
9. Tulislah algoritma dan notasi pseudocode untuk menerima inputan bilangan
   bulat (a, b, c) dan mempertukarkan nilainya sehingga nilai dari variabel
   a jadi di b, b jadi di c dan c jadi di a!
10. Buatlah sebuah program untuk mengetahui jumlah total biaya masuk kuliah tiap
    mahasiswa yang terdiri dari inputan NIM, Nama, Program Studi, Uang
    Pembangunan, Cicilan 1, Uang Kemahasiswaan dengan tipe bentukan terstruktur
    (record). Outputnya berupa NIM, Nama dan Total Biaya! (Berikan identitas
    pribadi pada kode programnya agar membedakan jawaban dari yang lain)

## Answers

1. **Algoritma** merupakan langkah-langkah untuk menyelesaikan sebuah masalah,
   sedangkan **Pemrograman** adalah aktivitas membuat program dengan baris
   kode.<br>
   Hubungan antara algoritma dan pemrograman, algoritma merupakan pondasi
   dalam pengimplementasian pemrograman dan pemrograman merupakan proses
   mengimplementasikan algoritma yang telah dibuat.

2. Konstruksi/struktur dasar algoritma :

   - Runtunan/**Sequence** adalah urutan pengerjaan dari perintah pertama sampai
     dengan perintah terakhir.
   - Pemilihan/**Selection** dieksekusi apabila memenuhi kondisi dan melakukan
     aksi pula bila tidak memenuhi kondisi.
   - Pengulangan/**Repetition** akan melakukan suatu proses yang berulang-ulang,
     jika suatu kondisi terpenuhi maupun tidak.

3. **Variabel** adalah sebuah simbol yang mewakili kuantitas di dalam
   pemrograman komputer.<br>
   Variabel digunakan sebagai suatu tempat yang disediakan memori komputer
   untuk menampung data dan nilai.

4. Aturan pendeklarasian variabel yang benar adalah sebagai berikut :

   1. Harus dimulai dengan huruf alfabet, tidak boleh dimulai dengan angka,
      spasi, atau karakter khusus lainnya.
   2. Huruf besar atau kecil tidak dibedakan.
   3. Hanya boleh mengandung huruf, angka dan `_`.
   4. Tidak boleh mengandung operator aritmatika, operator relasional, tanda
      baca dan karakter khusus lainnya.
   5. Tidak boleh dipisahkan dengan spasi, sebagai ganti bisa menggunakan `_`.
   6. Panjang nama tidak dibatasi.

   Contoh pendeklarasian variabel yang salah :

   - `1angka`
   - `pen+an`
   - `uang pembangunan`

   Contoh pendeklarasian variabel yang benar :

   - `angka1`
   - `penjumlahan`
   - `uang_pembangunan`

5. **Tipe data** adalah klasifikasi variabel untuk menentukan data yang akan
   disimpan ke dalam memori.<br>

   Macam-macam tipe data :

   - **integer** (int) adalah bilangan bulat atau bilangan yang tidak mengandung
     bilangan desimal.
   - **real**/**float** merupakan bilangan riil atau bilangan desimal.
   - **boolean** adalah bilangan logika dimana hanya memiliki dua kemungkinan
     yaitu benar dan salah (`true` dan `false`).
   - **char** adalah karakter tunggal (baik alfabet, angka, maupun karakter
     khusus) yang dalam pendeklarasiannya menggunakan tanda (').
   - **string** merupakan kumpulan beberapa karakter atau banyak karakter.

6. Contoh tipe bentukan (dalam notasi pseudocode) :

   - ```cpp
     typedef Tanggal: record <dd: int,
                              mm: int,
                              yy: int>
     ```

   - ```cpp
     typedef Koordinat: record <x: real, y: real>
     ```

7. Notasi algoritma sebagai berikut :

   1. **Deskriptif** adalah notasi algoritma yang menggunakan bahasa
      inggris/indonesia dalam menjabarkan langkah-langkah sebuah program.
   2. **Flowchart** merupakan notasi algoritma yang menggunakan grafis
      berupa bagan untuk memperlihatkan langkah-langkah algoritma.
   3. **Pseudocode** adalah notasi algoritma singkat yang mendekati bahasa
      pemrograman namun tetap bisa dipahami dengan mudah oleh manusia.

8. Simbol-simbol dalam flowchart :

   - **Terminal** digunakan untuk memulai dan atau mengakhiri suatu algoritma
     (Eclipse)
   - **Flow** digunakan untuk menghubungkan satu simbol dengan yang lainnya
     (Anak Panah)
   - **Input/Output** digunakan untuk membaca inputan dari user dan mencetak
     sebuah output (Jajar Genjang)
   - **Process** menyatakan suatu proses yang dilakukan komputer
     (Persegi Panjang)
   - **Decision** untuk menunjukan kondisi tertentu, menghasilkan kemungkinan
     `ya` atau `tidak` (Belah Ketupat)
   - **Predefined** untuk mendeklarasikan tempat penyimpanan atau variabel
     (Persegi 6)

9. **PROGRAM** pertukaranNilaiVariable<br>
   { membaca inputan dari user dan menukarkan nilai dari masing-masing variabel }

   **DEKLARASI :**<br>
   int a, b, c, t<br>
   { variabel t digunakan untuk menyimpan sementara nilai dari variabel lain }

   **ALGORITMA :**<br>
   read (a, b, c)<br>
   t ← b<br>
   { simpan dulu nilai dari variabel b ke variable t }<br>
   b ← a<br>
   a ← c<br>
   c ← t<br>
   { ambil nilai dari variabel t = nilai dari variabel b }<br>
   write (a, b, c)

10. You can see the code [here](./tuition.cpp)
