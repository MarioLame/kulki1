#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int a, b, i, j, k, x, h;

float c, d, e, f, g;

int main()
{
    // Ustawienia projektu:

    srand(time(NULL));
    cout << "Podaj liczbe kulek, jaka chcesz zrzucic: ";
    cin >> a;
    cout << "Podaj liczbe pudelek na dole scianki: ";
    cin >> b;
    int klasa[b];
    int liczba[a];
    d = b - 1;
    c = d / 2;
    i = 1;
    for (h = 1; h <= b; h++)
    {
        klasa[h] = 0;
    }

    // Losowanie wartooci kolejnych liczb:

    for (i = 1; i <= a; i++)
    {
        f = 1;
        e = c;
        for (f = 1; f <= d; f++)
        {
            ((std::rand() % 2) + 0);
            g = ((std::rand() % 2) + 0);
            if (g == 1)
            {
                e = e + 0.5;
            }
            else
            {
                e = e - 0.5;
            }
        }
        liczba[i] = e + 1;
        //cout << "Pomiar: " << i << " : " << liczba[i]<< endl;
    }

    // Przypisanie danej wartooci do danej klasy

    for (j = 1; j <= a; j++)
    {
        klasa[liczba[j]] = klasa[liczba[j]] + 1;
        //cout << "Klasa: " << liczba[j] << " = " << klasa[liczba[j]] << endl;
    }

    // Wypisanie histogramu:

    for (k = 1; k <= b; k++)
    {
        cout << "Pudelko: " << k << " zawiera " << klasa[k] << " kulek." << endl;
    }
    return 0;
}
