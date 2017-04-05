//afisare actori din fisier
void    afisare_actori(actor v[100], int n)
{
    int i;

    cout<<"Actorii din fisier: "<<endl;
    for (i = 1; i <= n; i++)
        cout<<v[i].nume<<' '<<v[i].prenume<<endl;
    cout<<endl;
}

//afiseaza filmele
void    afisare_filme(film v[100], int n)
{
    int i;

    cout<<"Filmele din fisier: "<<endl;
    for (i = 1; i <= n; i++)
        cout<<v[i].denumire<<endl;
    cout<<endl;
}

//afisare informatii actori
void    afisare_informatii_actor(actor v[100], int i, int m)
{
    int j;

    cout<<"Data nasterii: "<<v[i].data_nasterii<<endl;
    cout<<"Nationalitate: "<<v[i].nationalitate<<endl;
    cout<<"Oras: "<<v[i].oras<<endl;
    cout<<"Email: "<<v[i].email<<endl;
    cout<<"Numar de telefon: "<<v[i].telefon<<endl;
    cout<<"Greutate: "<<v[i].greutate<<endl;
    cout<<"Inaltime: "<<v[i].inaltime<<endl;
    cout<<"Id: "<<v[i].id<<endl;
    cout<<"Filmele in care joaca: "<<endl;
    for (j = 1; j <= m; j++)
        if (strstr(vFilme[j].id, v[i].id))
            cout<<vFilme[j].denumire<<endl;
    cout<<endl;
}

//afiseaza informatii legate de filme
void    afisare_informatii_film(film v[100], int i, int m)
{
    int j;

    cout<<"Anul: "<<v[i].an<<endl;
    cout<<"Site: "<<v[i].website<<endl;
    cout<<"Actori: "<<endl;
    for (j = 1; j <= m; j++)
        if (strstr(v[i].id, vActori[j].id))
            cout<<vActori[j].nume<<' '<<vActori[j].prenume<<endl;
    cout<<endl;
}
