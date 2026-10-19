# 🎬 Raporty – porównywanie list filmów

## 📌 Opis projektu

Program napisany w języku C++, który porównuje dwie listy filmów zapisane w plikach tekstowych. Generuje raport zawierający tytuły wspólne oraz tytuły występujące tylko na jednej z list.

## ⚙️ Funkcjonalności

- Wczytywanie filmów z plików `filmy1.txt` i `filmy2.txt`.
- Wyszukiwanie tytułów na obu listach.
- Znajdowanie filmów wspólnych.
- Wykrywanie filmów występujących tylko w pierwszym pliku.
- Wykrywanie filmów występujących tylko w drugim pliku.
- Generowanie raportu w pliku `wynik.txt`.
- Obsługa błędów otwierania plików.

## 🛠️ Technologie

- **Język programowania:** C++
- **Biblioteki:** `iostream`, `fstream`, `string`, `vector`

## 📁 Struktura projektu

```text
Raporty/
├── main.cpp
├── filmy1.txt
├── filmy2.txt
├── wynik.txt
└── README.md
