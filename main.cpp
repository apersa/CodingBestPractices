#include "header.h"

//meniul
void    meniu_aplicatie(int &n_actori, int &n_filme)
{
    char    c[51];
    int     optiune;
    do
    {
        cout<<"1) Afisare actori"<<endl;
        cout<<"2) Afisare filme"<<endl;
        cout<<"3) Informatii despre un actor"<<endl;
        cout<<"4) Informatii despre un film"<<endl;
        cout<<"5) Stergere film"<<endl;
        cout<<"6) Stergere actor"<<endl;
        cout<<"7) Adaugare film"<<endl;
        cout<<"8) Adaugare actor"<<endl;
        cout<<"9) Iesire"<<endl;
        cout<<endl;
        cout<<"Introduceti o optiune: ";
        cin>>c;
        cout<<endl;
        if (*c > '9' || !(*c >= '0' && *c <= '9'))
        {
            cout<<"Ati introdus un caracter gresit"<<endl;
            cout<<endl;
        }
        else
        {
            optiune = *c - '0';
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
    }while (optiune != 9);
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
