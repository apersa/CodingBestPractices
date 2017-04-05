//sterge un film introdus de la tastatura
void    stergere_film(film v[100], int &n)
{
    char    s[51];
    int     ok;
    int     poz;
    int     i;

    ok = 0;
    cout<<"Introduceti numele filmului pe care doriti sa-l stergeti: ";
    cin.get();
    cin.get(s, 50);
    for (i = 1; i <= n && ok == 0; i++)
    {
        if (strcmp(v[i].denumire, s) == 0)
        {
            ok = 1;
            poz = i;
        }
    }
    if (ok == 0)
        cout<<"Filmul nu exista in fisier"<<endl;
    cout<<endl;
    for (i = poz; i < n; i++)
        v[i] = v[i + 1];
    n--;
}

//sterge un actor introdus de la tastatura
void    stergere_actor(actor v[100], int &n)
{
    char    num[51];
    char    pre[51];
    int     ok;
    int     poz;
    int     i;

    ok = 0;
    cout<<"Introduceti numele actorului pe care doriti sa-l stergeti: ";
    cin.get();
    cin.get(num, 50);
    cout<<"Prenumele: ";
    cin.get();
    cin.get(pre, 50);
    for (i = 1; i <= n && ok == 0; i++)
    {
        if (strcmp(v[i].nume, num) == 0 && strcmp(v[i].prenume, pre) == 0)
        {
            ok = 1;
            poz = i;
        }
    }
    if (ok == 0)
        cout<<"Actorul nu exista in fisier"<<endl;
    cout<<endl;
    for (i = poz; i < n; i++)
        v[i] = v[i + 1];
    n--;
}
