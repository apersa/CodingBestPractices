/// afisare meniu
void    afisare_meniu()
{
    cout << "##############################" << endl;
    cout << "#   Coding Best Practices    #" << endl;
    cout << "##############################" << endl;
    cout << "1) Afisare actori" << endl;
    cout << "2) Afisare filme" << endl;
    cout << "3) Informatii despre un actor" << endl;
    cout << "4) Informatii despre un film" << endl;
    cout << "5) Stergere film" << endl;
    cout << "6) Stergere actor" << endl;
    cout << "7) Adaugare film" << endl;
    cout << "8) Adaugare actor" << endl;
    cout << "9) Iesire" << endl;
    cout << endl;
}

/// afisare actori din fisier
void    afisare_actori(actor v[100], int n)
{
    int i;

    system("cls");
    cout << "Actorii din fisier: " << endl;
    for (i = 1; i <= n; i++)
        cout << v[i].nume << endl;
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}

/// afiseaza filmele
void    afisare_filme(film v[100], int n)
{
    int i;

    system("cls");
    cout << "Filmele din fisier: " << endl;
    for (i = 1; i <= n; i++)
        cout << v[i].denumire << endl;
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}

/// afisare informatii actori
void    afisare_informatii_actor(actor v[100], int i, int m)
{
    int j;

    cout << "Data nasterii: " << v[i].data_nasterii << endl;
    cout << "Nationalitate: " << v[i].nationalitate << endl;
    cout << "Oras: " << v[i].oras << endl;
    cout << "Email: " << v[i].email << endl;
    cout << "Numar de telefon: " << v[i].telefon << endl;
    cout << "Greutate: " <<v[i].greutate <<endl;
    cout << "Inaltime: " <<v[i].inaltime <<endl;
    cout << "Id: " << v[i].id << endl;
    cout << "Filmele in care joaca: " << endl;
    for (j = 1; j <= m; j++)
        if (strstr(vFilme[j].id, v[i].id))
            cout << vFilme[j].denumire << endl;
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}

/// afiseaza informatii legate de filme
void    afisare_informatii_film(film v[100], int i, int m)
{
    int j;

    cout << "Anul: " <<v[i].an << endl;
    cout << "Site: " <<v[i].website << endl;
    cout << "Actori: " << endl;
    for (j = 1; j <= m; j++)
        if (strstr(v[i].id, vActori[j].id))
            cout << vActori[j].nume << endl;
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}
