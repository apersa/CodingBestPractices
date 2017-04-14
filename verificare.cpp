/// verifica cate date sunt in fisier
int     ver_param(char line[][1000], int n)
{
    int s;
    int i;

    s = 0;
    i = 0;
    while (line[n][i])
    {
        if (line[n][i] == ',')
            s++;
        i++;
    }
    return (s);
}

/// verificare data_nasterii
int     ver_data(char input[100])
{
    regex   data("^(0[1-9]|[12][0-9]|3[01])[- /.](0[1-9]|1[012])[- /.]((19|20)\\d\\d)$");

    if (regex_match(input, data) != 1)
        return (0);
    return (1);
}

/// verificare oras
int     ver_oras(char input[100])
{
    regex   oras("^[a-zA-Z\- ]+$");

    if (regex_match(input, oras) != 1)
        return (0);
    return (1);
}

/// verificare greutate
int     ver_greutate(char input[100])
{
    regex   greutate("^([5-9][0-9]|1[0-9][0-9])$");

    if (regex_match(input, greutate) != 1)
        return (0);
    return (1);
}

/// verificare inaltime
int     ver_inaltime(char input[100])
{
    regex   inaltime("^([1].[0-9][0-9]|[2].[0-4][0-9])");

    if (regex_match(input, inaltime) != 1)
        return (0);
    return (1);
}

/// verificare email
int     ver_email(char input[100])
{
    regex   email("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    if (regex_match(input, email) != 1)
        return (0);
    return (1);
}

/// verificare numar de telefon
int     ver_telefon(char input[100])
{
    regex   telefon("^(07[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9])$");

    if (regex_match(input, telefon) != 1)
        return (0);
    return (1);
}

/// verificare id actor
int     ver_id(char input[100], int n)
{
    int i;

    if (!(isdigit(*input)))
        return (0);
    for (i = 1; i <= n; i++)
        if (strcmp(vActori[i].id, input) == 0)
            return (0);
    return (1);
}

/// verificare an
int     ver_an(char input[])
{
    regex   an("^(19[0-9]{2}|20[0-1][0-7])$");

    if (regex_match(input, an) != 1)
        return (0);
    return (1);
}

/// verificare website
int     ver_website(char input[])
{
    regex   website("^(http:\/\/|https:\/\/)?(www.)?([a-zA-Z0-9]+).[a-zA-Z0-9]*.[a-z]{3}.?([a-z]+)?$");

    if (regex_match(input, website) != 1)
        return (0);
    return (1);
}

/// verifica daca numele dat contine doar caractere valide
int    ver_nume_actor(char str[50])
{
    unsigned int  i;

    if (!(str[0] >= 'A' && str[0] <= 'Z'))
        return (0);
    else
        for (i = 1; i < strlen(str); i++)
            if (!(isalpha(str[i]) || str[i] == ' '))
                return (0);
    return (1);
}

/// verifica daca numele filmului contine caractere corecte
int     ver_nume_film(char str[50])
{
    unsigned int  i;

    if (!(str[0] >= 'A' && str[0] <= 'Z'))
        return (0);
    else
        for (i = 1; i < strlen(str); i++)
            if (!(isalpha(str[i]) || str[i] == ' '))
                return (0);
    return (1);
}
