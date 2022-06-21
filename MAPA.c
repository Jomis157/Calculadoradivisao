/// O algoritmo da divisão pode ainda ser estruturado da seguinte forma:
// Onde:
// D = Dividendo
// d = Divisor
// q = Quociente
// r = Resto  
// Nesse sentido, programe um algoritmo em linguagem C para encontrar o quociente e o resto com base nos valores do dividendo e divisor inseridos pelo usuário ///
#include <stdio.h>
#include <stdlib.h>
int main(){

int D, d, q, r;
printf("digite o dividendo: ");
scanf("%d", &D);
printf("digite o divisor:");
scanf("%d", &d);
q = D/d;
r = D % d;
printf("o resultado é %d \n", q);
printf("o resto é:%d", r);

return (0);
}

// data 21/06/2021 (m.a.p.a)
// Jomiscley de Lima Barreto 