#include <stdio.h>

int main (){

    char Estado[20],Estado2[20];
    char Codigo[20],Codigo2[20];
    char Cidade[20],Cidade2[20];
    float População, População2;
    float Area,Area2;
    float PIB,PIB2;
    int Pontosturisticos,Pontosturisticos2;
    float densidade1, densidade2;
    float PIBpercap1,PIBpercap2;
    float SuperPoder1, SuperPoder2;

    int resultadoPopulação;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTur;
    int resultadodensPop;
    int resultadoPIBpercap;
    int resultadoSuperPoder; 

    printf("CARTA 1 \n");
    printf ("Estado: \n");
    scanf("%s", Estado);

    printf ("Código: \n");
    scanf("%s", Codigo);

    printf("Nome da Cidade: \n");
    scanf ("%s",Cidade);

    printf("População: \n");
    scanf("%f", &População);

    printf("Área: \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &Pontosturisticos);

    printf("CARTA 2\n");
    printf ("Estado: \n");
    scanf("%s", Estado2);

    printf ("Código: \n");
    scanf("%s", Codigo2);

    printf("Nome da Cidade: \n");
    scanf ("%s",Cidade2);

    printf("População: \n");
    scanf("%f", &População2);

    printf("Área: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &Pontosturisticos2);

    printf("CARTA 1 \n");

    printf("->Estado: %s \n",Estado);
    printf("->Código:%s \n", Codigo);
    printf("->Nome da Cidade: %s \n", Cidade);
    printf("->População: %.2f \n", População);
    printf("->Área: %.2f \n",Area);
    printf("->PIB: %.2f \n",PIB);
    printf("->Número de Pontos turisticos:%d \n",Pontosturisticos);
    densidade1 = População/Area;
    PIBpercap1 = (PIB*1000000000)/População;
    printf("->Densidade Populacional: %.2f\n",densidade1);
    printf("->PIB Per Capita: %.2f\n",PIBpercap1);

    printf("\n");


    printf("CARTA 2 \n");

    printf("->Estado: %s \n",Estado2);
    printf("->Código:%s \n", Codigo2);
    printf("->Nome da Cidade: %s \n", Cidade2);
    printf("->População: %.2f \n", População2);
    printf("->Área: %.2f Km² \n",Area2);
    printf("->PIB: %.2f Bilhões de reais \n",PIB2);
    printf("->Número de Pontos turisticos:%d \n",Pontosturisticos2);
    densidade2 = População2/Area2;
    PIBpercap2 = (PIB2*1000000000)/População2;
    printf("->Densidade Populacional: %.2f\n",densidade2);
    printf("->PIB Per Capita: %.2f\n",PIBpercap2);

    float densPop1 = 1/densidade1;
    float densPop2 = 1/densidade2;

    SuperPoder1 = População + Area + PIB + PIBpercap1 + densPop1+Pontosturisticos;
    SuperPoder2 = População2 + Area2 + PIB2 + PIBpercap2 + densPop2+Pontosturisticos2;

    printf("\n");


    resultadoPopulação = População > População2;
    resultadoArea = Area > Area2;
    resultadoPIB = PIB > PIB2;
    resultadoPontosTur = Pontosturisticos >Pontosturisticos2 ;
    resultadodensPop = densPop1 > densPop2;
    resultadoPIBpercap = PIBpercap1 > PIBpercap2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("Comparação de Cartas: \n");

    printf("População: Carta 1 venceu (%d) \n",resultadoPopulação);
    printf("Área: Carta 1 venceu (%d) \n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d) \n",resultadoPIB);
    printf("Pontos turisticos: Carta 1 venceu (%d) \n",resultadoPontosTur);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n",resultadodensPop);
    printf("PIB Per Capita: Carta 1 venceu (%d) \n",resultadoPIBpercap);
    printf("Super Poder: Carta 1 venceu (%d) \n",resultadoSuperPoder);
    
    }