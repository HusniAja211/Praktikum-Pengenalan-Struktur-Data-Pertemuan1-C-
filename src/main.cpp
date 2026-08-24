#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    string nim;
    int age;

    // Input data from the user
    cout << "Selamat datang di program input data mahasiswa!" << endl;

    cout << "Masukkan nama anda: ";
    getline(cin, name);

    cout << "Masukkan NIM anda: ";
    cin >> nim;

    cout << "Masukkan umur anda: ";
    cin >> age;

    // Output the collected data
    cout << "\n ------ Data mahasiswa: ----------" << endl;

    cout << "Nama: " << name << endl;
    cout << "NIM: " << nim << endl;
    cout << "Umur: " << age << endl;

    return 0;
}