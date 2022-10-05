// Nome de usuário no GitHub: giuporcher
// Link do repositório: https://github.com/giuporcher/Trabproducao_Algoritmos_GiulianoPorcher

// O programa irá pedir para que o usuário escolha uma das operações na lista, digitando o número correspondente da operação para que ela seja selecionada.
// O programa então pedirá que o usuário coloque apenas 1 número, caso a operação escolhida seja uma raiz quadrada, ou 2 números, caso a operação seja as outras demais.
// Os valores digitados serão escaneados pelo programa e com eles a operação escolhida anteriormente será feita. A saída será uma frase em vermelho (para destacar a resposta)
// com a resposta da operação.
// O comando de execução do código no terminal/CMD É  gcc trabproduçao_algoritmos_giulianoporcher.c -lm para Linux (SO em que eu programo)

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    printf("\nNome do autor: Giuliano Conti Porcher\n"
    "Curso: Ciência de Dados\n"
    "Universidade: LaSalle\n"
    "Número da matrícula: 202213142\n\n");
    
    int escolha;
    bool continuar_escolhas = true;

    while(continuar_escolhas == true)
    {
        printf("Escolha apenas uma das operações a seguir que deseja realizar digitando o seu número correspondente:\n"
        "1 - Raiz Quadrada\n"
        "2 - Soma\n"
        "3 - Subtração\n"
        "4 - Multiplicação\n"
        "5 - Divisão\n"
        "6 - Potenciação\n"
        "0 - Para sair do programa\n");

        float operando_um, operando_dois;
        scanf("%d", &escolha);

        switch(escolha)
        {
            case 0:
                printf("Saindo do programa\n");
                continuar_escolhas = false;
                break;

            case 1:
                printf("Você escolheu a operação de Raiz Quadrada\n"
                "Escolha um operando/número não negativo para realizar a operação.\n");

                bool continuar_raiz_quadrada = true;

                while (continuar_raiz_quadrada == true)
                {
                    scanf("%f", &operando_um);

                    if(operando_um < 0)
                    {
                        printf("\033[0;31m");
                        printf("Números negativos não podem ser calculados pela raiz quadrada do programa.\n"
                        "Digite um número positivo:\n");
                        printf("\033[0m");
                        continue;
                        
                    }
                    else
                    {
                        float resposta_raiz = sqrtf(operando_um);

                        printf("\033[0;31m");
                        printf("A raiz quadrada de %f é igual a %f\n\n", operando_um, resposta_raiz);
                        printf("\033[0m");
                        continuar_raiz_quadrada = false;
                        continue; 
                    }
                }
            break;

            case 2:
                printf("Você escolheu a operação de Soma\n"
                "Digite dois números para somá-los:\n");

                scanf("%f" "%f", &operando_um, &operando_dois);
                printf("\033[0;31m");
                printf("A soma de %f e %f é %f\n\n", operando_um, operando_dois, operando_um + operando_dois);
                printf("\033[0m");
                break;

            case 3: 
                printf("Você escolheu a operação de Subtração\n"
                "Digite dois números para subtrair um pelo outro:\n");

                scanf("%f" "%f", &operando_um, &operando_dois);
                printf("\033[0;31m");
                printf("A subtração de %f por %f é %f\n\n", operando_um, operando_dois, operando_um - operando_dois);
                printf("\033[0m");
                break;

            case 4:    
                printf("Você escolheu a operação de Multiplicação\n"
                "Digite dois números para multiplicá-los:\n");

                scanf("%f" "%f", &operando_um, &operando_dois);
                printf("\033[0;31m");
                printf("A multiplicação de %f por %f é %f\n\n", operando_um, operando_dois, operando_um * operando_dois);
                printf("\033[0m");
                break;

            case 5:       
                printf("Você escolheu a operação de Divisão\n"
                "Digite dois números para dividir um pelo outro. O divisor não pode ser o número 0\n");

                scanf("%f" "%f", &operando_um, &operando_dois);

                if(operando_dois != 0)
                {
                    printf("\033[0;31m");
                    printf("A divisão de %f por %f é %f\n\n", operando_um, operando_dois, operando_um / operando_dois);
                    printf("\033[0m");
                    break;

                }
                else
                {
                    printf("\033[0;31m");
                    printf("O divisor não pode ser o número 0\n\n");
                    printf("\033[0m");
                    break;
                }

            case 6:   
                printf("Você escolheu a operação de Potenciação\n"
                "Digite dois números para elevar um deles à potência do outro:\n");

                scanf("%f" "%f", &operando_um, &operando_dois);
                float resultado_potenciacao = powf(operando_um, operando_dois);

                printf("\033[0;31m");
                printf("A potenciação de %f elevado a %f é %f\n\n", operando_um, operando_dois, resultado_potenciacao);
                printf("\033[0m");
                break;
                            
            default:
                printf("Você escolheu um número de operação inválido. Escolha um dos números da lista a seguir\n\n");
                continue;
        }
    }
    
    return 0;
}
