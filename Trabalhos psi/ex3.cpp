#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct horario_escolar {
  string dia_da_semana;
  float hora[2][2];
  char bloco[1];
  int sala;
  char turma[1];
  string disciplina;
};  

int main() {
  horario_escolar horario_um;
  horario_um.dia_da_semana = "segunda";
  cout<<setw(35)<<"|";

    return 0;
}

