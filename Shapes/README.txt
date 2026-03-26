1. Błędy związane z wskaźnikami (nullptr)
Podczas implementacji klasy Line popełniłem krytyczny błąd polegający na odwoływaniu się do wskaźnika przed jego inicjalizacją (A[0]->x).
I poprostu do konsoli nic sie nie wypisywało
Nauczyłem się, że nigdy nie wolno odwoływać się do wartości wskaźnika, jeśli nie mamy pewności, że wskazuje na poprawny obiekt.
Poprawne podejście polega na sprawdzaniu danych wejściowych, a nie samego wskaźnika.

2. Dostępność metod (public vs protected)
Na początku metody calcArea() i calcCircum() były oznaczone jako protected, co uniemożliwiało ich wywołanie w funkcji main.
Zrozumiałem różnicę między public i protected oraz to, że interfejs klasy bazowej musi być dostępny publicznie, jeśli ma być używany przez inne części programu.

3. Wirtualny destruktor i polimorfizm
Pojawił się problem z ostrzeżeniem dotyczącym braku wirtualnego destruktora w klasie Shape.
Zrozumiałem, że w klasach używających polimorfizmu destruktor musi być virtual, aby poprawnie usuwać obiekty przez wskaźnik do klasy bazowej.
Brak virtual może prowadzić do wycieków pamięci.

4. Błędy linkera (undefined reference)
Podczas kompilacji pojawił się błąd:
undefined reference to Rectangle::~Rectangle()
Nauczyłem się, że sama deklaracja funkcji (np. destruktora) nie wystarczy — potrzebna jest również jej implementacja lub użycie = default.

5. Polimorfizm w praktyce
Zaimplementowałem wektor wskaźników vector<Shape*>, który przechowuje różne typy figur.
Dzięki temu mogłem wywoływać metody calcArea() i calcCircum() bez znajomości konkretnego typu obiektu.
Zrozumiałem praktyczne zastosowanie mechanizmu virtual i override.


