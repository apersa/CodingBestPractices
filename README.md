# CodingBestPractices


Aplicatia: CodeBlocks 16.01

Pentru Compiler:

Settings->Compiler->Have g++ follow C++11 ISO C++ language standard [-std=c++11]

# Cerinta

Cititi dintr-un fisier CSV mai multi actori, iar din alt CSV mai multe filme.

Fiecare film are mai multi actori, iar un actor poate juca in mai multe filme.

Nu exista film care sa nu aiba cel putin un actor.

Aplicatia trebuie sa permite user-ului sa introduca numele unui actor / film si sa afiseze detalii despre acesta si sa poate sterge entitati din lista.

De asemenea, aplicatia trebuie sa permita user-ului sa salveze noile date in fisierele CSV.

Actorii contin urmatoarele field-uri: nume, prenume, data nasterii (care contine luna, anul si ziua, orice format.Ex: 03/12/2000 ZZ/LL/AN), nationalitate, oras, inaltime (exprimata in metri), greutate (exprimata in kg), email, telefon Filmele contin: denumire, an aparitie, website.

Ganditi-va la o modalitate de a face legatura intre actori si filme (nu salvati duplicate.Spre exemplu, nu adaugati o lista de filme in entitatea de actor deoarece asa veti salva un film de mai multe ori in mai multe locuri).
Folosit REGEX pentru a valida obligatoriu urmatoarele atribute: data nasterii, orasul, inaltimea, greutatea, email, telefon, an aparitie, website.

Scrieti Unit Teste pentru fiecare functie / metoda si incercati sa acoperiti toate datele posibil introduse ca si input.

Folositi structuri de date adecvente pentru salvarea atributelor.
