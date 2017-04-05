//se adauga un film si se verifica daca datele introduse sunt corecte
void    adaugare_film(film v[100], int &n, int m)
{
    char    input[51];
    int     i;
    int     ok;

    n++;
    cout<<"Denumire: ";
    cin.get();
    cin.get(v[n].denumire, 49);
    cout<<"An aparitie: ";
    cin.get();
    cin.get(input, 50);
    while (ver_an(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un an gresit"<<endl;
        cout<<"Introduceti un an cuprins intre 1900 si 2017: ";
        cin.get();
        cin.get(input, 50);
    }
    strcpy(v[n].an, input);
    cout<<"Website: ";
    cin.get();
    cin.get(input, 50);
    while (ver_website(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un site gresit"<<endl;
        cout<<"Introduceti alt site (sub forma: www.<nume>.com sau htttp://www.<nume>.com): ";
        cin.get();
        cin.get(input, 50);
    }
    strcpy(v[n].website, input);
    cout<<"Id-ul actorilor care joaca in film(sub forma: 1 sau 1-2-4): ";
    cin>>input;
    ok = 0;
    while (ok == 0)
    {
        for (i = 1; i <= m; i++)
            if (strstr(input, v[i].id))
                ok = 1;
        if (ok == 0)
        {
            cout<<endl;
            cout<<"Ati introdus un id gresit"<<endl;
            cout<<"Introduceti alt id: ";
            cin>>input;
        }
    }
    strcpy(v[n].id, input);
    cout<<endl<<endl;
}

//se adauga un actor si se verifica daca datele introduse sunt corecte
void    adaugare_actor(actor v[100], int &n)
{
    char    input[51];

    n++;
    cout<<"Nume: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_nume_actor(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un nume gresit"<<endl;
        cout<<"Introduceti alt nume (care sa contina doar litere si spatii): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].nume, input);
    cout<<"Prenume: ";
    cin.get();
    cin.get(v[n].prenume, 49);
    while (ver_nume_actor(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un prenume gresit"<<endl;
        cout<<"Introduceti alt prenume (care sa contina doar litere si spatii): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].prenume, input);
    cout<<"Data nasterii: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_data(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus o data incorecta"<<endl;
        cout<<"Introduceti o alta data (Formatul corect este: <dd/mm/yyyy>): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].data_nasterii, input);
    cout<<"Nationalitate: ";
    cin>>v[n].nationalitate;
    cout<<"Oras: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_oras(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un oras incorect"<<endl;
        cout<<"Introduceti un alt oras (<denumire>): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].oras, input);
    cout<<"Greutate: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_greutate(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus o greutate incorecta"<<endl;
        cout<<"Introduceti alta greutate (50-200): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].greutate, input);
    cout<<"Inaltime (1.60): ";
    cin.get();
    cin.getline(input, 50);
    while (ver_inaltime(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus o inaltime incorecta"<<endl;
        cout<<"Introduceti alta inaltime (1.00-2.50): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].inaltime, input);
    cout<<"Email: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_email(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un email incorect"<<endl;
        cout<<"Introduceti alt email (<nume>@yahoo.com): "<<endl;
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].email, input);
    cout<<"Numar de telefon: ";
    cin.get();
    cin.getline(input, 50);
    while (ver_telefon(input) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un numar de telefon incorect"<<endl;
        cout<<"Introduceti un numar de telefon care sa contina 10 cifre (07<cifre>): ";
        cin.get();
        cin.getline(input, 50);
    }
    strcpy(v[n].telefon, input);
    cout<<"Id (sub forma unei cifre): ";
    cin.get();
    cin.get(input, 50);
    while (ver_id(input, n - 1) != 1)
    {
        cout<<endl;
        cout<<"Ati introdus un id gresit sau care este deja folosit"<<endl;
        cout<<"Introduceti un alt id (<cifra/e>): ";
        cin>>input;
    }
    strcpy(v[n].id, input);
    cout<<endl<<endl;
}
