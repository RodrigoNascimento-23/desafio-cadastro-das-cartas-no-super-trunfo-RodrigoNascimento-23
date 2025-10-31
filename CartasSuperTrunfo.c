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

    printf("#### ATRIBUTOS #####\n");
    printf("1.POPULAÇÃO\n");
    printf("2.ÁREA\n");
    printf("3.PIB\n");
    printf("4.PONTOS TURISTICOS\n");
    printf("5.DENSIDADE\n");
    printf("6.PIB PER CAPTA\n");
    printf("7.SUPER PODER\n");

    int opcao1,opcao2;
    float resultado;
    

    printf("Informe o atributo que você quer comparar: \n");
    scanf("%d",&opcao1);
    printf("O atributo escolhido é: %d\n",opcao1);

    switch (opcao1)
    { 
    case 1:
    printf("POPULAÇÃO ESTADO %s: %.2f habitantes\n",Estado,População);
    printf("POPULAÇÃO ESTADO %s: %.2f habitantes\n",Estado2,População2);
    printf("POPULAÇÃO\n");
    if (População > População2){
        resultado = População;
        printf("Vencedor Carta: %s \n", Codigo);
        printf("Vencedor Estado: %s\n", Estado);
    } else if (População < População2){
        resultado = População2;
        printf("Vencedor Carta: %s\n",Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);  
    } else {
        printf("Houve empate");
    }  
    
        break;
    case 2:
    printf("ÁREA\n");
    printf("ÁREA ESTADO %s: %.2f Km²\n",Estado,Area);
    printf("ÁREA ESTADO %s: %.2f Km²\n",Estado2,Area2);
    if (Area > Area2){
        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado); 
    } else if (Area < Area2){
        printf("Vencedor Carta: %s\n",Codigo2); 
        printf("Vencedor Estado: %s\n",Estado2); 
    } else {
        printf("Houve empate");
    }
        break;
     
    case 3:
    printf("PIB\n");
    printf("PIB ESTADO %s: %.2f Bilhoes de reais\n",Estado,PIB);
    printf("PIB ESTADO %s: %.2f Bilhoes de reais\n",Estado2,PIB2);
    if (PIB> PIB2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (PIB < PIB2){
        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
    case 4:
    printf("Pontos Turisticos\n");
    printf("PONTOS TURISTICOS ESTADO %s: %d \n",Estado,Pontosturisticos);
    printf("PONTOS TURISTICOS ESTADO %s: %d \n",Estado2,Pontosturisticos2);
    if (Pontosturisticos> Pontosturisticos2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (Pontosturisticos < Pontosturisticos2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2); 
    } else {
        printf("Houve empate");
    }
        break;
    
    case 5:
    printf("Densidade\n");
    printf("DENSIDADE ESTADO %s: %.2f \n",Estado,densidade1);
    printf("DENSIDADE ESTADO %s: %.2f \n",Estado2,densidade2);
    if (densidade1< densidade2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (densidade1 > densidade2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
    case 6:
    printf("PIB Per Capta\n");
    printf("PIB Per Capta %s: %.2f \n",Estado,PIBpercap1);
    printf("PIB Per Capta %s: %.2f \n",Estado2,PIBpercap2);
    if (PIBpercap1>PIBpercap2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (PIBpercap1< PIBpercap2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
    case 7:
    printf("Super Poder\n");
    printf("Super Poder %s: %.2f \n",Estado,SuperPoder1);
    printf("Super Poder %s: %.2f \n",Estado2,SuperPoder2);
    if (SuperPoder1>SuperPoder2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (SuperPoder1 < SuperPoder2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
             
    default:
    printf("Opção inválida");
    break;
}
    
    printf("Informe o segundo atributo que você quer comparar: \n");
    scanf("%d",&opcao2);
    printf("O atributo escolhido é: %d\n",opcao2);

    // Verifica se escolheu o mesmo atributo duas vezes
    if (opcao1 == opcao2) {
    printf(" Você escolheu o mesmo atributo duas vezes! Isso não é permitido.\n");
    } else{    
        switch (opcao2)
    { 
        case 1:
    printf("POPULAÇÃO ESTADO %s: %.2f habitantes\n",Estado,População);
    printf("POPULAÇÃO ESTADO %s: %.2f habitantes\n",Estado2,População2);
    printf("POPULAÇÃO\n");
    if (População > População2){
    printf("Vencedor Carta: %s \n", Codigo);
    printf("Vencedor Estado: %s\n", Estado);
    } else if (População < População2){
    printf("Vencedor Carta: %s\n",Codigo2);
    printf("Vencedor Estado: %s\n",Estado2);  
    }else {
    printf("Houve empate");
    }  
    
    break;
        case 2:
    printf("ÁREA\n");
    printf("ÁREA ESTADO %s: %.2f Km²\n",Estado,Area);
    printf("ÁREA ESTADO %s: %.2f Km²\n",Estado2,Area2);
    if (Area > Area2){
    printf("Vencedor Carta: %s\n", Codigo);
    printf("Vencedor Estado: %s\n",Estado); 
    } else if (Area < Area2){
    printf("Vencedor Carta: %s\n",Codigo2); 
    printf("Vencedor Estado: %s\n",Estado2); 
    }else {
    printf("Houve empate");
                            }
    break;
     
        case 3:
    printf("PIB\n");
    printf("PIB ESTADO %s: %.2f Bilhoes de reais\n",Estado,PIB);
    printf("PIB ESTADO %s: %.2f Bilhoes de reais\n",Estado2,PIB2);
    if (PIB> PIB2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (PIB < PIB2){
        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
        case 4:
    printf("Pontos Turisticos\n");
    printf("PONTOS TURISTICOS ESTADO %s: %d \n",Estado,Pontosturisticos);
    printf("PONTOS TURISTICOS ESTADO %s: %d \n",Estado2,Pontosturisticos2);
    if (Pontosturisticos> Pontosturisticos2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (Pontosturisticos < Pontosturisticos2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2); 
    } else {
        printf("Houve empate");
    }
        break;
    
        case 5:
    printf("Densidade\n");
    printf("DENSIDADE ESTADO %s: %.2f \n",Estado,densidade1);
    printf("DENSIDADE ESTADO %s: %.2f \n",Estado2,densidade2);
    if (densidade1 < densidade2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (densidade1 > densidade2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
        case 6:
    printf("PIB Per Capta\n");
    printf("PIB Per Capta %s: %.2f \n",Estado,PIBpercap1);
    printf("PIB Per Capta %s: %.2f \n",Estado2,PIBpercap2);
    if (PIBpercap1>PIBpercap2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (PIBpercap1< PIBpercap2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
    
        case 7:
    printf("Super Poder\n");
    printf("Super Poder %s: %.2f \n",Estado,SuperPoder1);
    printf("Super Poder %s: %.2f \n",Estado2,SuperPoder2);
    if (SuperPoder1>SuperPoder2){

        printf("Vencedor Carta: %s\n", Codigo);
        printf("Vencedor Estado: %s\n",Estado);
    } else if (SuperPoder1 < SuperPoder2){

        printf("Vencedor Carta: %s\n", Codigo2);
        printf("Vencedor Estado: %s\n",Estado2);
    } else {
        printf("Houve empate");
    }
        break;
             
    default:
    printf("Opção inválida");
    break;
}}
    float somacarta1 = 0;
    float somacarta2 = 0;
    if (opcao1 == 1) {
    somacarta1 += População;
    somacarta2 += População2;
} else if (opcao1 == 2) {
    somacarta1 += Area;
    somacarta2 += Area2;
} else if (opcao1 == 3) {
    somacarta1 += PIB;
    somacarta2 += PIB2;
} else if (opcao1 == 4) {
    somacarta1 += Pontosturisticos;
    somacarta2 += Pontosturisticos2;
} else if (opcao1 == 5) {
    somacarta1 += densidade1;
    somacarta2 += densidade2;
} else if (opcao1 == 6) {
    somacarta1 += PIBpercap1;
    somacarta2 += PIBpercap2;
} else if (opcao1 == 7) {
    somacarta1 += SuperPoder1;
    somacarta2 += SuperPoder2;
}

    if (opcao2 == 1) {
    somacarta1 += População;
    somacarta2 += População2;
} else if (opcao2 == 2) {
    somacarta1 += Area;
    somacarta2 += Area2;
} else if (opcao2 == 3) {
    somacarta1 += PIB;
    somacarta2 += PIB2;
} else if (opcao2 == 4) {
    somacarta1 += Pontosturisticos;
    somacarta2 += Pontosturisticos2;
} else if (opcao2 == 5) {
    somacarta1 += densidade1;
    somacarta2 += densidade2;
} else if (opcao2 == 6) {
    somacarta1 += PIBpercap1;
    somacarta2 += PIBpercap2;
} else if (opcao2 == 7) {
    somacarta1 += SuperPoder1;
    somacarta2 += SuperPoder2;
}

// ---- Resultado final ----
printf("\n===== RESULTADO FINAL =====\n");
printf("Soma Carta 1 (Estado %s): %.2f\n", Estado, somacarta1);
printf("Soma Carta 2 (Estado %s): %.2f\n", Estado2, somacarta2);

// Usa operador ternário pra decidir o vencedor
(somacarta1 > somacarta2) ? printf("Vencedora: CARTA 1  ESTADO:(%s)\n", Estado)
: (somacarta2 > somacarta1) ? printf("Vencedora: CARTA 2 ESTADO:(%s)\n", Estado2)
: printf("Houve empate!\n");
    

    printf("\n");


    resultadoPopulação = População > População2;
    resultadoArea = Area > Area2;
    resultadoPIB = PIB > PIB2;
    resultadoPontosTur = Pontosturisticos > Pontosturisticos2 ;
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

    printf("\n");


}