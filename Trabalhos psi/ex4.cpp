#include <iostream>
#include <string>
#include <stdlib.h>

struct alunos {
   std::string nome;
   float n1, n2, media;
}; 

alunos alunos1[4];

void information(){
   for (int i = 0; i < 4; i++){
     std::cout << "digite a sua primeira nota" << std::endl;
     std::cin >> alunos1[i].n1;
     system("cls");
     std::cout << "digite a sua segunda nota" << std::endl;
     std::cin >> alunos1[i].n2;
   }
}
void media(){
   for (int i = 0; i < 4; i++){
      float media;
      media = alunos1[i].n1 + alunos1[i].n2;
      alunos1[i].media = media;
   }
}

void ordenardadospormediadecrescente(){

}

int main(){
  information(); 
}