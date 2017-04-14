/// se citeste fiecare linie a fisierului cu actori si se completeaza informatiile despre actori in structura
void    citire_actori(actor v[100], int &n)
{
    char    line[100][1000];
    char    *pch;

    n = 1;
    system("cls");
    while (cit_a.getline(line[n], 1000))
    {
        if (ver_param(line, n) == 8)
        {
            pch = strtok(line[n], ",");
            strcpy(v[n].nume, pch);
            pch = strtok(NULL, ",");
            strcpy(v[n].data_nasterii, pch);
            if (ver_data(v[n].data_nasterii) != 1)
            {
                cout << "Data nasterii actorului " << v[n].nume << ' ' << " este incorecta" << endl;
                cout << "Data trebuie sa fie sub formatul: dd/mm/yyyy" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].nationalitate, pch);
            pch = strtok(NULL, ",");
            strcpy(v[n].oras, pch);
            if (ver_oras(v[n].oras) != 1)
            {
                cout << "Orasul actorului " << v[n].nume << " este incorect" << endl;
                cout << "Introduceti in fisier un oras corect" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].greutate, pch);
            if (ver_greutate(v[n].greutate) != 1)
            {
                cout << "Greutatea actorului " << v[n].nume << " este incorecta" << endl;
                cout << "Introduceti in fisier greutatea sub forma: 65" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].inaltime, pch);
            if (ver_inaltime(v[n].inaltime) != 1)
            {
                cout << "Inaltimea actorului " << v[n].nume << " este incorecta" << endl;
                cout << "Introduceti in fisier inaltimea sub forma: 1.68" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].email, pch);
            if (ver_email(v[n].email) != 1)
            {
                cout << "Email-ul actorului " << v[n].nume << " este incorect" << endl;
                cout << "Introduceti in fisier un email sub forma: <nume>@yahoo.com" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].telefon, pch);
            if (ver_telefon(v[n].telefon) != 1)
            {
                cout << "Numarul de telefon al actorului " << v[n].nume << " este incorect" << endl;
                cout << "Introduceti in fisier un numar de telefon de 10 cifre sub forma: 0745034982" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].id, pch);
        }
        else
        {
            cout << "In fisier nu exista destule informatii despre actorul de pe pozitia " << n << endl;
            cout << "Introduceti datele in fisier" << endl;
            cout << "Introduceti orice tasta pentru a continua ";
            getch();
            cout << endl << endl;
        }
        n++;
    }
    n--;
}

/// se citeste fiecare linie a fisierului cu filme si se completeaza informatiile despre filme in structura
void    citire_filme(film v[100], int &n)
{
    char    line[100][1000];
    char    *pch;

    n = 1;
    system("cls");
    while (cit_f.getline(line[n], 1000))
    {
        if (ver_param(line, n) == 3)
        {
            pch = strtok(line[n], ",");
            strcpy(v[n].denumire, pch);
            pch = strtok(NULL, ",");
            strcpy(v[n].an, pch);
            if (ver_an(v[n].an) != 1)
            {
                cout << "Ati introdus un an gresit filmului " << v[n].denumire << endl;
                cout << "Introduceti in fisier un an corect, cuprins intre anul 1900-2017" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].website, pch);
            if (ver_website(v[n].website) != 1)
            {
                cout << "Ati introdus un website gresit filmului " << v[n].denumire << endl;
                cout << "Introduceti un website sub forma: www.<nume>.com" << endl;
                cout << "Introduceti orice tasta pentru a continua ";
                getch();
                cout << endl << endl;
            }
            pch = strtok(NULL, ",");
            strcpy(v[n].id, pch);
        }
        else
        {
            cout << "In fisier nu exista destule informatii despre filmul  " << v[n].denumire << " de pe pozitia " << n << endl;
            cout << "Introduceti datele in fisier" << endl;
            cout << "Introduceti orice tasta pentru a continua ";
            getch();
            cout << endl << endl;
        }
        n++;
    }
    n--;
}
