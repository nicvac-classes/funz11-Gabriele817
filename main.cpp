#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
string inputsegno();

void previsionebudget(double budget);

void raccoltafondi(double budget);

void spesaimprevista(double budget);

int main() {
    srand(time(0));   //Seed random number generator
    
    double budget;
    string condizione;

    budget = rand() % 901 + 100;
    cout << "il budget è" << budget << endl;
    do {
        condizione = inputsegno();
        if (condzione == "R") {
            budget = raccoltafondi(budget);
        }
        if (condizione == "P") {
            previsionebudget(budget);
        }
        if (condizione == "S") {
            budget = spesaimprevista(budget);
        }
    } while (condizione != "X");
    cout << "il programma è finito" << endl;
    return 0;
}

string inputsegno() {
    string s;

    do {
        cout << "Inserire l'operazione R raccolta fondi P previsione del budget S spesa imprevista X uscire" << endl;
        cin >> s;
    } while (s == "R" && s == "P" && s == "S" && s == "X");
    
    return s;
}

void previsionebudget(double budget) {
    double percentuale;

    percentuale = rand() % 31 - 10;
    percentuale = budget * percentuale / 100;
    budget = budget + percentuale;
    cout << "la pervisione del budget è" << budget << endl;
}

void raccoltafondi(double budget) {
    double budgetnuovo;

    do {
        cout << "inserisci il budget" << endl;
        cin >> budgetnuovo;
        if (budgetnuovo <= 0) {
            cout << "inserire un numero maggiore o diverso da 0" << endl;
        }
    } while (budgetnuovo <= 0);
    budgetnuovo = budget + budgetnuovo;
}

void spesaimprevista(double budget) {
    double budgetnuovo;

    cout << "inserire il valore della spesa prevista" << endl;
    cin >> budget;
    budget = budget - budgetnuovo;
}