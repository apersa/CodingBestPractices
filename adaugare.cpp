/// se adauga un film si se verifica daca datele introduse sunt corecte
void    adaugare_film(film v[100], int &n, int m)
{
    char    input[51];
    int     i;
    int     ok;

    n++;
    system("cls");
    cout << "Denumire: ";
    cin.getline(v[n].denumire, 49);
    cout << "An aparitie: ";
    cin.getline(input, 50);
    while (ver_an(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un an gresit" << endl;
        cout << "Introduceti un an cuprins intre 1900 si 2017: ";
        cin.getline(input, 50);
    }
    strcpy(v[n].an, input);
    cout << "Website: ";
    cin.getline(input, 50);
    while (ver_website(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un site gresit" << endl;
        cout << "Introduceti alt site (sub forma: www.<nume>.com sau htttp://www.<nume>.com): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].website, input);
    cout << "Id-ul actorilor care joaca in film(sub forma: 1 sau 1-2-4): ";
    cin >> input;
    ok = 0;
    while (ok == 0)
    {
        for (i = 1; i <= m; i++)
            if (strstr(input, v[i].id))
                ok = 1;
        if (ok == 0)
        {
            cout << endl;
            cout << "Ati introdus un id gresit" << endl;
            cout << "Introduceti alt id: ";
            cin >> input;
        }
    }
    strcpy(v[n].id, input);
    cin.get();
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}

/// se adauga un actor si se verifica daca datele introduse sunt corecte
void    adaugare_actor(actor v[100], int &n)
{
    char    input[51];

    n++;
    system("cls");
    cout << "Nume: ";
    cin.getline(input, 50);
    while (ver_nume_actor(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un nume gresit" << endl;
        cout << "Introduceti alt nume(prima litera sa fie mare si sa contina doar litere si spatii): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].nume, input);
    cout << "Data nasterii: ";
    cin.getline(input, 50);
    while (ver_data(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus o data incorecta" << endl;
        cout << "Introduceti o alta data (Formatul corect este: <dd/mm/yyyy>): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].data_nasterii, input);
    cout << "Nationalitate: ";
    cin >> v[n].nationalitate;
    cout << "Oras: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_oras(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un oras incorect" << endl;
        cout << "Introduceti un alt oras (<denumire>): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].oras, input);
    cout << "Greutate: ";
    cin.getline(input, 50);
    while (ver_greutate(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus o greutate incorecta" << endl;
        cout << "Introduceti alta greutate (50-200): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].greutate, input);
    cout << "Inaltime (1.60): ";
    cin.getline(input, 50);
    while (ver_inaltime(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus o inaltime incorecta" << endl;
        cout << "Introduceti alta inaltime (1.00-2.50): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].inaltime, input);
    cout << "Email: ";
    cin.getline(input, 50);
    while (ver_email(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un email incorect" << endl;
        cout << "Introduceti alt email (<nume>@yahoo.com): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].email, input);
    cout << "Numar de telefon: ";
    cin.getline(input, 50);
    while (ver_telefon(input) != 1)
    {
        cout << endl;
        cout << "Ati introdus un numar de telefon incorect" << endl;
        cout << "Introduceti un numar de telefon care sa contina 10 cifre (07<cifre>): ";
        cin.getline(input, 50);
    }
    strcpy(v[n].telefon, input);
    cout << "Id (sub forma unei cifre): ";
    cin.get(input, 50);
    while (ver_id(input, n - 1) != 1)
    {
        cout << endl;
        cout << "Ati introdus un id gresit sau care este deja folosit" << endl;
        cout << "Introduceti un alt id (<cifra/e>): ";
        cin >> input;
    }
    strcpy(v[n].id, input);
    cin.get();
    cout << endl;
    cout << "Introduceti orice tasta pentru a continua ";
}
