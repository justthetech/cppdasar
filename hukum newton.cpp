//Name		:	MUHAMMAD HARRIS MUNANDAR
//Nim		:	190150078
//Tanggal	:	27 Desember 2019
//Judul		:	Program Hukum Newton


#include <iostream>
using namespace std;
float countforce (float m);

// Fungsi untuk menghitung gaya gravitasi yang berpengaruh pada benda dengan massa m dan
// percepatan gravitasi a dengan asumsi percepatan gravitasi = 10
// Persamaan gaya F = m*a, dengan a percepatan gravitasi

float countvelocity (float t, float v0, float a);
// Fungsi untuk menghitung kecepatan benda pada waktu t dengan kecepatan awal v0 dan
// percepatan a
// Persamaan kecepatan vt = v0 + a*t

float countpos (float t, float v0, float a);
// Fungsi untuk menghitung posisi benda pada waktu t, kecepatan v0, dan percepatan a
// dengan asumsi posisi awal benda adalah 0
// Persamaan posisi x = v0*t + 0.5*a*t*t

void inputval (float *t, float *m, float *a, float *v0);
// Prosedur untuk menginput nilai t, m, a, dan v0. Dijalankan di awal saat program pertama
// kali dijalankan dan ketika user memilih 1 pada mainmenu

void mainmenu ();
// Prosedur untuk menampilkan menu utama dengan pilihan :
// 1. Mengedit nilai a, v0, m, dan t
// 2. Menampilkan nilai kecepatan Vt pada waktu t
// 3. Menampilkan gaya gravitasi yang bekerja pada benda
// 4. Mengecek posisi benda pada waktu t
// 5. Mengakhiri program

float m, t, v0, a, vt, F, xa; //xa adalah jarak yang ditempuh
int x; //untuk case
char YN;

int main () {
cout << "=====Selamat Datang di Program Hukum Newton======\n";
cout << "==============================================\n" << endl;

inputval ( &t, &m, &a, &v0);
YN='y';
while (YN='y') {
mainmenu();

switch (x) {
    case 1 : inputval ( &t, &m, &a, &v0); break;
    case 2 : countvelocity(t,v0,a);
            cout << "\nkecepatan pada detik ke " << t << " adalah " << vt << " m/s" << endl; break;
    case 3 : countforce (m);
            cout << "\ngaya yang bekerja pada massa " << m << " kg adalah " << F << " N" << endl; break;
    case 4 : countpos(t, v0, a);
            cout << "\nposisi benda pada detik ke " << t << " adalah " << xa << " m" << endl; break;
    case 5 : return 15091996;}

cout << "\nmau ulang lagi? (y/n) : "; cin >> YN;
    if (YN=='n') {return 0;}
    while (YN!='y'){
        cout << "salah. coba lagi inputnya: "; cin >> YN;
        if (YN=='n') {return 0;}
    }
}
}
void mainmenu() {
cout << "-----------------------------------------------\n";
cout << "Menu Utama Program\n";
cout << "-----------------------------------------------\n";
cout << "1. Edit nilai waktu, massa, percepatan, dan kecepatan awal\n";
cout << "2. Cek nilai kecepatan pada waktu t\n";
cout << "3. Cek gaya gravitasi yang bekerja pada benda\n";
cout << "4. Cek posisi benda pada waktu t\n";
cout << "5. Akhiri program\n";
cout << "----------------------------------------------\n" << endl;
cout << "Input pilihan Anda: "; cin >> x;

if ((x<1)||(x>5)) {do {
        cout << "Input salah. Silakan ulangi input anda: "; cin >> x; cout << endl;
}while ((x<1)||(x>5));}}

float countvelocity (float t, float v0, float a) {
    return ( vt = v0 + a*t);}
float countforce(float m) {
    return ( F = m*a );}
float countpos(float t, float v0, float a) {
    return ( xa = v0*t + 0.5*a*t*t);}
void inputval (float *t, float *m, float *a, float *v0) {
cout << "Input waktu (t) = "; cin >> *t;
    cout << "Input massa (m) = "; cin >> *m;
    cout << "Input percepatan (a) = "; cin >> *a;
    cout << "Input kecepatan awal (v0) = "; cin >> *v0;

}
