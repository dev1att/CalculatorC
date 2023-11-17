/* Desenvolva uma calculadora em C.
- O programa deve conter todas operações básicas

Meu pensamento de inicio
Soma: +
Sub: -
Div: / (Divisor = 0 não é possivel)
Mult: *

- Precisão de dois dígitos
Meu pensamento de inicio
%.2f

- O programa deve perguntar ao usuário qual operação ele deseja realizar
Meu pensamento de inicio
Menu com switch

- O programa deve executar quantas vezes for necessário
Meu pensamento de inicio
do while
*/

float subtracao(float a, float b){
    return a - b;
}

float soma(float a, float b){
    return a + b;
}

float divisao(float a, float b){
    if(b == 0){
        printf("Impossivel dividir por 0, digite novamente\nDigite dois numeros para realizar a operacao aritmetica: \n");
        scanf("%f%f", &a, &b);}
    else
         return a / b;
}

float multiplicacao(float a, float b){
    return a * b;
}


int main(int argc, char const *argv[]){
float a, b, resultado;
int opcao;

    printf("=================== CALCULATOR ===================\n\n");


do{
    printf("\nDigite dois numeros para realizar a operacao aritmetica: \n");
    scanf("%f%f", &a, &b);
    printf("\nDigite um numero para qual operacao aritmetica deseja realizar:\n1-Subtracao\n2-Soma\n3-Divisao\n4-Multiplicacao\n0-Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = subtracao(a, b);
            printf("O resultado foi: %.2f", resultado);
        break;
    case 2:
        resultado = soma(a, b);
            printf("O resultado foi: %.2f", resultado);
        break;
    case 3:
        resultado = divisao(a, b);
        if(b == 0)
            printf("O resultado foi: %.2f", resultado);
        break;
    case 4:
        resultado = multiplicacao(a, b);
            printf("O resultado foi: %.2f", resultado);
        break;
    case 0:
            printf("Saindo...");
        break;
    default:
            printf("Operacao invalida");
        break;
    }

}while(opcao != 0);

    printf("\n=================== FINISH ===================");

    return 0;
}

// Tive dificuldade com o printf de inicio, se colocava dentro ou fora do do while para manter sempre o loop