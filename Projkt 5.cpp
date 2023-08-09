#include <iostream>
#include <cmath>

using namespace std;  // Dodana dyrektywa

int ileCyfr(int liczba) {
    int iloscCyfr = 0;
    if (liczba == 0) {
        iloscCyfr = 1;
    } else {
        while (liczba != 0) {
            liczba /= 10;
            iloscCyfr++;
        }
    }
    return iloscCyfr;
}

bool pierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    }
    for (int i = 2; i * i <= liczba; i++) {
        if (liczba % i == 0) {
            return false;
        }
    }
    return true;
}

bool jestKwadratem(int liczba) {
    int pierwiastek = sqrt(liczba);
    return pierwiastek * pierwiastek == liczba;
}

bool jestSzescianem(int liczba) {
    int pierwiastek = cbrt(liczba);
    return pierwiastek * pierwiastek * pierwiastek == liczba;
}

void analizaLiczby(int liczba) {
    cout << "Liczba cyfr: " << ileCyfr(liczba) << endl;
    if (pierwsza(liczba)) {
        cout << "Liczba jest liczbą pierwszą." << endl;
    } else {
        cout << "Liczba nie jest liczbą pierwszą." << endl;
    }
    if (jestKwadratem(liczba)) {
        cout << "Liczba jest kwadratem innej liczby." << endl;
    } else {
        cout << "Liczba nie jest kwadratem innej liczby." << endl;
    }
    if (jestSzescianem(liczba)) {
        cout << "Liczba jest sześcianem innej liczby." << endl;
    } else {
        cout << "Liczba nie jest sześcianem innej liczby." << endl;
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    analizaLiczby(liczba);
    return 0;
}
