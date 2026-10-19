
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class checker
{
private:
    vector<string> lista1;
    vector<string> lista2;

public:

    // Wczytuje nazwy filmow z pliku do odpowiedniej listy.
    void wczytajPlik(string nazwaPliku, vector<string>& lista)
    {
        ifstream plik(nazwaPliku);
        string film;

        if (!plik.is_open())
        {
            cout<<"Nie mozna otworzyc pliku: "<<nazwaPliku<<endl;
            return;
        }

        while(getline(plik, film))
        {
            if (!film.empty())
            {
                lista.push_back(film);
            }
        }

        plik.close();
    }

    // Sprawdza, czy dany film znajduje sie na liscie.
    bool szukaj(string film, const vector<string>& lista)
    {
        for(const string& element : lista)
        {
            if(element == film)
            {
                return true;
            }
        }

        return false;
    }

    // Zapisuje do pliku filmy wystepujace na obu listach.
    void wspolne(ofstream& wynik)
    {
        wynik<<"filmy wspolne:"<<endl;

        for (const string& film : lista1)
        {
            if (szukaj(film, lista2))
            {
                wynik<<film<<endl;
            }
        }

        wynik<<endl;
    }

    // Zapisuje filmy wystepujace tylko w pierwszym pliku.
    void tylkoPierwszy(ofstream& wynik)
    {
        wynik<<"tylko w pliku  1:"<<endl;

        for (const string& film : lista1)
        {
            if (!szukaj(film, lista2))
            {
                wynik<<film<<endl;
            }
        }

        wynik<<endl;
    }

    // Zapisuje filmy wystepujace tylko w drugim pliku.
    void tylkoDrugi(ofstream& wynik)
    {
        wynik<<"tylko w pliku 2:"<<endl;

        for(const string& film : lista2)
        {
            if (!szukaj(film, lista1))
            {
                wynik<<film<<endl;
            }
        }

        wynik<<endl;
    }

    // Uruchamia porownanie i zapisuje raport w pliku wynikowym.
    void raport()
    {
        wczytajPlik("filmy1.txt", lista1);
        wczytajPlik("filmy2.txt", lista2);

        ofstream wynik("wynik.txt");

        if (!wynik.is_open())
        {
            cout<<"Nie mozna utworzyc pliku wynik.txt"<<endl;
            return;
        }

        wspolne(wynik);
        tylkoPierwszy(wynik);
        tylkoDrugi(wynik);

        wynik.close();

        cout<<"Raport zapisano do pliku wynik.txt"<<endl;
    }
};

int main()
{
    checker obiekt;
    obiekt.raport();
    return 0;
}
