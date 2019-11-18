#include <iostream>
#include <string>
using namespace std;

string contatti[20][4];

void menu() {
  cout << "Benvenuto nella Rubrica \n";
  cout << "1) Inserisci" << endl;
  cout << "2) Elimina" << endl;
  cout << "3) Lista" << endl;
  cout << "4) Esci" << endl;
}

void inserisciContatto(string nome, string cognome, string numero) {
  if (contatti[19][0] == "") {
    for (int i = 0; i < 20; i++) {
      if (contatti[i][0] == "") {
        contatti[i][0] = nome;
        contatti[i][1] = cognome;
        contatti[i][2] = numero;
        break;
      }
    }

  } else {
    cout << "Spazio esaurito";

  }
}
void eliminaContatto(int i) {

  contatti[i][3] = "no";
}

void stampaAgenda() {
  cout << "\nElenco dei contatti" << "" << endl;
  for (int i = 0; i < 20; i++) {
    if (contatti[i][0] != "" && contatti[i][3] != "no") {
      cout << i + 1 << "." << endl;
      cout << "Nome:    " << contatti[i][0] << endl;
      cout << "Cognome: " << contatti[i][1] << endl;
      cout << "Numero:  " << contatti[i][2] << endl;
      cout << "\n";
    } else if (contatti[i][3] == "no") {
      cout << "contatto eliminato" << endl;
    }
  }
}

int main() {
  int scelta;

  do {
    menu();
    cout << "Scegli un'opzione: ";
    cin >> scelta;
    cout << "\n";
    if (scelta == 1) {
      string nome, cognome, numero;
      cout << "Nome: ";
      cin >> nome;
      cout << "Cognome: ";
      cin >> cognome;
      cout << "Numero: ";
      cin >> numero;
      inserisciContatto(nome, cognome, numero);

    } else if (scelta == 2) {
      stampaAgenda();
      int index;
      cout << "Quale contatto vuoi eliminare?\n";
      cin >> index;
      eliminaContatto(index - 1);

    } else if (scelta == 3) {
      stampaAgenda();
    } else if (scelta == 4) {
      exit(0);
    }
  }
  while (scelta != 4);
}