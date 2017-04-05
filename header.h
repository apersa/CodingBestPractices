#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string.h>
#include <regex>

using namespace std;

ifstream cit_a("actori.csv");
ifstream cit_f("filme.csv");

//declarare actori
struct      actor{

    char    nume[50];
    char    prenume[50];
    char    data_nasterii[11];
    char    nationalitate[50];
    char    oras[50];
    char    greutate[20];
    char    inaltime[20];
    char    email[50];
    char    telefon[20];
    char    id[5];

}           vActori[100];

//declarare filme
struct      film{

    char    denumire[50];
    char    an[5];
    char    website[60];
    char    id[10];

}           vFilme[100];

void        citire_actori(actor v[100], int &n);
void        citire_filme(film v[100], int &n);
void        afisare_actori(actor v[100], int n);
void        afisare_filme(film v[100], int n);
void        afisare_informatii_actor(actor v[100], int i, int m);
void        afisare_informatii_film(film v[100], int i, int m);
void        informatii_despre_actor(actor v[100], int n, int m);
void        informatii_despre_film(film v[100], int n, int m);
int         ver_param(char line[][1000], int n);
int         ver_data(char input[100]);
int         ver_oras(char input[100]);
int         ver_greutate(char input[100]);
int         ver_inaltime(char input[100]);
int         ver_email(char input[100]);
int         ver_telefon(char input[100]);
int         ver_id(char input[100], int n);
int         ver_an(char input[]);
int         ver_website(char input[]);
int         ver_nume_actor(char str[50]);
int         ver_nume_film(char str[50]);

#include "citire.cpp"
#include "afisare.cpp"
#include "verificare.cpp"
#include "stergere.cpp"
#include "adaugare.cpp"
#include "informatii.cpp"

#endif // HEADER_H_INCLUDED
