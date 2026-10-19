🎬 Raporty – porównywanie list filmów
📌 Opis projektu

Program napisany w języku C++, który porównuje dwie listy filmów zapisane w plikach tekstowych. Generuje raport zawierający tytuły wspólne oraz tytuły występujące tylko na jednej z list.

⚙️ Funkcjonalności
📂 Wczytywanie filmów z plików filmy1.txt i filmy2.txt.
🔍 Wyszukiwanie tytułów na obu listach.
🤝 Znajdowanie filmów wspólnych.
📄 Wykrywanie filmów występujących tylko w pierwszym pliku.
📄 Wykrywanie filmów występujących tylko w drugim pliku.
💾 Generowanie raportu w pliku wynik.txt.
⚠️ Obsługa błędów otwierania plików.
🛠️ Technologie
Język: C++
Biblioteki: iostream, fstream, string, vector
📁 Struktura projektu
Raporty/
├── main.cpp
├── filmy1.txt
├── filmy2.txt
├── wynik.txt
└── README.md

main.cpp – kod źródłowy programu.
filmy1.txt – pierwsza lista filmów.
filmy2.txt – druga lista filmów.
wynik.txt – wygenerowany raport.
README.md – dokumentacja projektu.
🚀 Uruchomienie programu
1. Przygotowanie plików

Utwórz pliki filmy1.txt oraz filmy2.txt. Wpisz w nich tytuły filmów, umieszczając każdy tytuł w osobnym wierszu.

2. Kompilacja

Skompiluj program za pomocą kompilatora C++:

g++ main.cpp -o Raporty

3. Uruchomienie

Windows:

Raporty.exe


Linux:

./Raporty

4. Odczyt raportu

Po zakończeniu działania programu wyniki zostaną zapisane w pliku wynik.txt.

📊 Przykład działania

Plik filmy1.txt:

Matrix
Incepcja
Interstellar


Plik filmy2.txt:

Matrix
Avatar
Interstellar


Wynik w pliku wynik.txt:

filmy wspolne:
Matrix
Interstellar

tylko w pliku  1:
Incepcja

tylko w pliku 2:
Avatar

🧠 Zasada działania

Program wykorzystuje klasę checker, która odpowiada za wczytywanie danych, porównywanie list oraz generowanie raportu.

Metoda	Opis
wczytajPlik()	Wczytuje tytuły filmów z pliku tekstowego.
szukaj()	Sprawdza, czy dany film znajduje się na liście.
wspolne()	Zapisuje filmy występujące na obu listach.
tylkoPierwszy()	Zapisuje filmy występujące tylko na pierwszej liście.
tylkoDrugi()	Zapisuje filmy występujące tylko na drugiej liście.
raport()	Uruchamia porównanie i generuje raport.
📝 Uwagi
Każdy tytuł powinien znajdować się w osobnym wierszu.
Porównywanie tytułów uwzględnia wielkość liter.
Puste wiersze są pomijane.
Pliki wejściowe muszą znajdować się w katalogu, z którego uruchamiany jest program.
Plik wynik.txt jest tworzony lub nadpisywany podczas każdego uruchomienia programu.

Projekt edukacyjny napisany w języku C++.
