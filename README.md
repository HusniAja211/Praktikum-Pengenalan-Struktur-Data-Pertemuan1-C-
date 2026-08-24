# Program Input Data Mahasiswa

Program konsol sederhana yang dibuat menggunakan C++ untuk menerima dan menampilkan data dasar mahasiswa. Proyek ini merupakan latihan untuk memahami konsep dasar input, output, variabel, dan tipe data dalam C++.

## Deskripsi

Program menerima tiga informasi dari pengguna:

* Nama mahasiswa
* Nomor Induk Mahasiswa (NIM)
* Umur

Setelah data dimasukkan, program akan menampilkan kembali informasi mahasiswa tersebut melalui terminal.

## Teknologi

* **Bahasa:** C++
* **Compiler:** GCC / G++
* **Standard Library:**

  * `<iostream>`
  * `<string>`

## Struktur Proyek

```text
.
├── bin/
│   └── main
├── src/
│   └── main.cpp
└── README.md
```

### Penjelasan Direktori

| Direktori/File | Keterangan                        |
| -------------- | --------------------------------- |
| `src/`         | Menyimpan source code program     |
| `src/main.cpp` | Source code utama                 |
| `bin/`         | Menyimpan hasil kompilasi program |
| `bin/main`     | Executable hasil kompilasi        |
| `README.md`    | Dokumentasi proyek                |

## Kompilasi

Dari direktori utama proyek, jalankan:

```bash
g++ src/main.cpp -o bin/main
```

## Menjalankan Program

Pada Linux atau macOS:

```bash
./bin/main
```

Pada Windows:

```bash
bin\main.exe
```

## Contoh Penggunaan

```text
Selamat datang di program input data mahasiswa!
Masukkan nama anda: Mahasigma UPNVJ
Masukkan NIM anda: 1234567890
Masukkan umur anda: 200

Output:
Data mahasiswa:
Nama: Mahasigma UPNVJ
NIM: 1234567890
Umur: 200
```

## Catatan Implementasi

Program menggunakan `getline()` untuk membaca nama secara keseluruhan sehingga nama yang mengandung spasi dapat diterima.

NIM disimpan menggunakan tipe data `string` karena NIM merupakan identifier, bukan nilai yang digunakan untuk operasi aritmatika.

```cpp
string name;
string nim;
int age;
```

Penggunaan `string` untuk NIM juga menghindari masalah ketika nilai NIM melebihi batas tipe data `int` atau memiliki angka nol di awal.

## Konsep yang Dipelajari

Proyek ini mencakup beberapa konsep dasar C++:

* Variabel
* Tipe data
* `string`
* `int`
* `cout`
* `cin`
* `getline()`
* Standard input dan output
* Kompilasi menggunakan `g++`
* Struktur direktori proyek

## Status

**Selesai**

## Lisensi

Proyek ini dibuat untuk tujuan pembelajaran.
