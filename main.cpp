#include "header.h"

/// meniul
void    meniu_aplicatie(int &n_actori, int &n_filme)
{
    char    c;
    int     optiune;
    do
    {
        system("cls");
        afisare_meniu();
        cout << "Introduceti o optiune: ";
        c = getch();
        cout << endl;
        if (!(c >= '1' && c <= '9'))
        {
            system("cls");
            cout << "Ati introdus un caracter gresit" << endl;
            cout << "Introduceti orice tasta pentru a continua ";
        }
        else
        {
            optiune = c - '0';
            switch(optiune)
            {
                case 1: afisare_actori(vActori, n_actori);
                    break;
                case 2: afisare_filme(vFilme, n_filme);
                    break;
                case 3: informatii_despre_actor(vActori, n_actori, n_filme);
                    break;
                case 4: informatii_despre_film(vFilme, n_filme, n_actori);
                    break;
                case 5: stergere_film(vFilme, n_filme);
                    break;
                case 6: stergere_actor(vActori, n_actori);
                    break;
                case 7: adaugare_film(vFilme, n_filme, n_actori);
                    break;
                case 8: adaugare_actor(vActori, n_actori);
                    break;
                case 9: break;
            }
        }
        if (c != '9')
            getch();
    }while (optiune != 9);
    cout << endl;
    cout << "Credits: Alex Persa | e-mail: alex.persa28@yahoo.com" << endl;
}

int main()
{
    int n_actori;
    int n_filme;

    citire_actori(vActori, n_actori);
    citire_filme(vFilme, n_filme);
    meniu_aplicatie(n_actori, n_filme);
    cit_a.close();
    cit_f.close();
    return (0);
}
