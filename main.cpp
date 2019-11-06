#include <iostream>
using namespace std;
void menu();
void inserisciContatto(char nome, char numero);
void eliminaContatto();
void stampaAgenda();

int main(){
  string scelta;
  menu();
  cout << "Scegli un'opzione: ";
  cin >> scelta;
}

void menu(){
  cout << "Benvenuto nella rubrica \n";
  cout << "A) Inserisci contatto" << endl;
  cout << "B) Elimina contatto" << endl;
  cout << "C) Lista contatto" << endl;
  cout << "D) Esci" << endl;
}

  

/*
inserisciContatto
eliminaContatto
stampaAgenda

MAIN
void scriviMenu

string addressbook[20] = {

}
*/