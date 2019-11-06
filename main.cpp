#include <iostream>
using namespace std;
void menu();
void inserisciContatto(char nome, char numero);
void eliminaContatto();
void stampaAgenda();

int main(){
  int scelta;
  menu();
  cout << "Scegli un'opzione: ";
  cin >> scelta;
  do{
    menu();
    cout << "Scegli un'opzione: ";
    cin >> scelta;
    //struttura di scelta
  }
  while(scelta != 4);
}

void menu(){
  cout << "Benvenuto nella rubrica \n";
  cout << "1) Inserisci contatto" << endl;
  cout << "2) Elimina contatto" << endl;
  cout << "3) Lista contatto" << endl;
  cout << "4) Esci" << endl;
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