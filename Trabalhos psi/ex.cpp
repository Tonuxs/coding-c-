#include <iostream>
#include <string>
using namespace std;

struct aluno{
    int numero;
    string nome;
    int ano;
    string turma;
    string disciplina;
    float notas[3];
};
aluno aluno1;
void inserirdados(){
    cout << "digite o seu numero: " << endl;
    cin >> aluno1.numero;
    cout << "digite o seu nome: " << endl;
    cin.ignore();
    getline(cin, aluno1.nome);
    cout << "digite o seu ano: " << endl;
    cin >> aluno1.ano;
    cout << "digite a sua turma: " << endl;
    cin.ignore();
    getline(cin, aluno1.turma);
    cout << "digite a materia: " << endl;
    cin.ignore();
    getline(cin, aluno1.disciplina);

    for(int i = 0; i < 3; i++){
        cout << "adicione sua nota: " << endl;
        cin >> aluno1.notas[i];
    }  
}
float medianotas(){
 int a;
 float media = 0;
 for(int i = 0; i < 3; i++){
    media += aluno1.notas[i];
 }
 
 *a = media / 3;
}

  int main(){
    inserirdados();
    medianotas(&aluno1.notas);
  }