//verifica daca actorul exista in fisier si se afiseaza date despre el
void    informatii_despre_actor(actor v[100], int n, int m)
{
    int     i;
    int     ok;
    char    nume[51];
    char    prenume[51];

    ok = 0;
    cout<<"Numele actorului: ";
    cin.get();
    cin.getline(nume, 50);
    cout<<"Prenumele actorului: ";
    cin.getline(prenume, 50);
    cout<<endl;
    if (ver_nume_actor(nume) && ver_nume_actor(prenume))
    {
        for (i = 1; i <= n; i++)
            if (strcmp(nume, v[i].nume) == 0 &&
                strcmp(prenume, v[i].prenume) == 0)
            {
                afisare_informatii_actor(v, i, m);
                ok = 1;
            }
    }
    if (ok == 0)
        cout<<"Actorul nu exista"<<endl;
    cout<<endl;
}

//verifica daca filmul exista in fisier si se afiseaza date despre el
void    informatii_despre_film(film v[100], int n, int m)
{
    int     i;
    int     ok;
    char    nume[51];

    ok = 0;
    cout<<"Dati numele filmului: ";
    cin.get();
    cin.get(nume, 50);
    cout<<endl;
    if (ver_nume_film(nume))
    {
        for (i = 1; i <= n; i++)
            if (strcmp(nume, v[i].denumire) == 0)
            {
                afisare_informatii_film(v, i, m);
                ok = 1;
            }
    }
    if (ok == 0)
        cout<<"Filmul nu exista"<<endl;
    cout<<endl;
}
