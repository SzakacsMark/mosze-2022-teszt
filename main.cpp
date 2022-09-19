#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // '' helyett "" ,végén hiányzik a ;
    for (int i = 0;) // nincs befejezve a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // i < N_ELEMENTS
    {
        std::cout << "Ertek:" // hiányzik a b[i] és a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // kezdőérték nincs megadva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
