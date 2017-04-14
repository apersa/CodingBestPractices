/// sterge un film introdus de la tastatura
void    stergere_film(film v[100], int &n)
{
    char    s[51];
    int     ok;
    int     poz;
    int     i;

    ok = 0;
    system("cls");
    cout << "Introduceti numele filmului pe care doriti sa-l stergeti: ";
    cin.getline(s, 50);
    cout << endl;
    for (i = 1; i <= n && ok == 0; i++)
    {
        if (strcmp(v[i].denumire, s) == 0)
        {
            ok = 1;
            poz = i;
            cout << "Filmul a fost sters" << endl;
            cout << "Introduceti orice tasta pentru a continua ";
        }
    }
    if (ok == 0)
    {
        cout << "Filmul nu exista in fisier" << endl;
        cout << "Introduceti orice tasta pentru a continua ";
    }
    else
    {
        for (i = poz; i < n; i++)
            v[i] = v[i + 1];
        n--;
    }
}

/// sterge un actor introdus de la tastatura
void    stergere_actor(actor v[100], int &n)
{
    char    num[51];
    int     ok;
    int     poz;
    int     i;

    ok = 0;
    system("cls");
    cout << "Introduceti numele actorului pe care doriti sa-l stergeti: ";
    cin.getline(num, 50);
    cout << endl;
    for (i = 1; i <= n && ok == 0; i++)
    {
        if (strcmp(v[i].nume, num) == 0)
        {
            ok = 1;
            poz = i;
            cout << "Actorul a fost sters" << endl;
            cout << "Introduceti orice tasta pentru a continua ";
        }
    }
    if (ok == 0)
    {
        cout << "Actorul nu exista in fisier" << endl;
      cout << "Introduceti orice tasta pentru a continua ";
    }
    else
    {
        for (i = poz; i < n; i++)
            v[i] = v[i + 1];
        n--;
    }
}
