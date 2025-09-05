#include <stdio.h>

int main (){

    char Estado[20],Estado2[20];
    char Codigo[20],Codigo2[20];
    char Cidade[20],Cidade2[20];
    int População, População2;
    float Area,Area2;
    float PIB,PIB2;
    int Pontosturisticos,Pontosturisticos2;
    float densidade1, densidade2;
    float PIBpercap1,PIBpercap2;


    printf ("Informe o Estado: \n");
    scanf("%s", Estado);

    printf ("Informe o Código da Carta: \n");
    scanf("%s", Codigo);

    printf("Qual o nome da Cidade referente ao Estado da carta %s: \n", Codigo);
    scanf ("%s",Cidade);

    printf("Qual a população de %s: \n", Cidade);
    scanf("%d", &População);

    printf("Qual a Área de %s: \n", Cidade);
    scanf("%f", &Area);

    printf("Qual o PIB de %s: \n", Cidade);
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos possuem a cidade de %s: \n", Cidade);
    scanf("%d", &Pontosturisticos);

    printf ("Agora informe o segundo Estado: \n");
    scanf("%s", Estado2);

    printf ("Informe o Código da Carta: \n");
    scanf("%s", Codigo2);

    printf("Qual o nome da Cidade referente ao Estado da carta %s: \n", Codigo2);
    scanf ("%s",Cidade2);

    printf("Qual a população de %s: \n", Cidade2);
    scanf("%d", &População2);

    printf("Qual a Área de %s: \n", Cidade2);
    scanf("%f", &Area2);

    printf("Qual o PIB de %s: \n", Cidade2);
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos possuem a cidade de %s: \n", Cidade2);
    scanf("%d", &Pontosturisticos2);

    printf("->O código %s refere-se ao Estado de: %s \n", Codigo,Estado);
    printf("->A cidade escolhida foi: %s\n->Possui uma população total de: %d habitantes \n->Com área aproximada de: %fkm² \n", Cidade,População,Area);
    printf("->O PIB de %s é de aproximadamente %f \n",Estado, PIB);
    printf("->A cidade de %s possui %d pontos turisticos \n", Cidade,Pontosturisticos);
    densidade1 = População/Area;
    PIBpercap1 = PIB/População;
    printf("->A Densidade Populacional de %s é de: %f\n",Estado, densidade1);
    printf("->O PIB Per Capita de %s é de: %f\n", Estado, PIBpercap1);

    printf("\n");

    printf("->O código %s refere-se ao Estado de %s \n", Codigo2,Estado2);
    printf("->A cidade escolhida foi: %s\n->Possui uma população total de: %d habitantes \n->Com área aproximada de: %fkm² \n", Cidade2,População2,Area2);
    printf("->O PIB de %s é de aproximadamente: %f \n",Estado2, PIB2);
    printf("->A cidade de %s possui %d pontos turisticos \n", Cidade2,Pontosturisticos2);
    densidade2 = População2/Area2;
    PIBpercap2 = PIB2/População2;
    printf("->A Densidade Populacional de %s é de: %f\n",Estado2, densidade2);
    printf("->O PIB Per Capita de %s é de: %f\n", Estado2, PIBpercap2);
    
    }