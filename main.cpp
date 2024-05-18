#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

/*
========================================
Exercícios sobre Strings e Arrays em C++
========================================
*/

void imprimeNome(){
    // Exercicio 01
    // Declare uma variável do tipo String chamada nome e armazene seu nome nela. 
    // Imprima o valor de nome usando cout.
    string nome;

    cout << "Entre com seu nome: ";
    getline(cin, nome);
    cout << "Nome armazenado: " + nome << endl;
}

void imprimeVogal(){
    // Exercicio 02
    // Declare um array de caracteres vogais com 5 posições. 
    // Insira manualmente as vogais ('a', 'e', 'i', 'o', 'u') nas posições do array. 
    // Imprima cada vogal em uma linha usando cout.
    char vogais[5];
    int len = sizeof(vogais) / sizeof(vogais[0]);

    cout << "Insira as vogais no array:" << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao " << i << ": ";
        cin >> vogais[i];
    }
    cout << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao " << i << ": " << vogais[i] << endl;
    }
}

void verificaVogal(){
    // Exercicio 03
    // Declare uma variável do tipo String chamada letra. 
    // Leia um caractere do usuário usando cin e armazene-o em letra. 
    // Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.
    string letra;

    cout << "Insira um caractere: ";
    cin >> letra;

    if(letra == "a" || letra == "A" || letra == "e" || letra == "E" || letra == "i" || letra == "I" || letra == "o" || letra == "O" || letra == "u" || letra == "U"){
        cout << "O caractere inserido eh uma vogal!" << endl;
    } else {
        cout << "O caractere inserido NAO eh uma vogal!" << endl;
    }
}

void imprimePalavra(){
    // Exercicio 04
    // Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra. 
    // Imprima a palavra usando cout.
    char palavra[10];

    cout << "Entre com uma palavra: ";
    cin >> palavra;
    cout << "Valor do array palavra: " << palavra << endl;
}

void imprimeFrase(){
    // Exercicio 05
    // Declare um array de caracteres frase com 20 posições. 
    // Leia uma frase do usuário usando cin e armazene-a em frase. 
    // Imprima a frase usando cout.
    string frase;

    cout << "Entre com uma frase: ";
    cin.ignore();
    getline(cin, frase);
    cout << "Frase: " << frase << endl;
}

void imprimePar(){
    // Exercicio 06
    // Declare um array de caracteres numeros com 10 posições. 
    // Armazene manualmente os números de 1 a 10 nas posições do array. 
    // Imprima os números pares do array em linhas separadas usando cout.
    int numeros[10];
    int len = sizeof(numeros) /sizeof(numeros[0]);

    cout << "Preencha o Array com numeros inteiros" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao " << i << ": ";
        cin >> numeros[i];
    }
    cout << endl;
    for(int i =0; i < len; i++){
        if(numeros[i] % 2 == 0){
            cout << "Par na Posicao " << i << ": " << numeros[i] << endl;
        }
    }
}

void imprimeFrutas(){
    // Exercicio 07
    // Declare um array de caracteres frutas com 5 posições. 
    // Armazene manualmente os nomes de 5 frutas nas posições do array. 
    // Imprima a fruta que está na posição 3 do array usando cout.
    string frutas[5];
    int len = sizeof(frutas) /sizeof(frutas[0]);

    cout << "Preencha o Array com nomes de frutas:" << endl;
    for(int i =0; i < len; i++){
        cout << i+1 << " Fruta: ";
        cin >> frutas[i];
    }
    cout << "Fruta armazenada na 3° Posicao: " + frutas[2] << endl;
}

void imprimeCores(){
    // Exercicio 08
    // Declare um array de caracteres cores com 7 posições. 
    // Armazene manualmente os nomes de 7 cores nas posições do array. 
    // Leia um número do usuário entre 1 e 7 usando cin. 
    // Imprima a cor que está na posição informada pelo usuário usando cout.
    string cores[7];
    int len = sizeof(cores) /sizeof(cores[0]);
    int posicao;

    cout << "Preencha o Array com nomes de cores:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> cores[i];
    }
    cout << "Pesquisa por cor na posicao: ";
    cin >> posicao;
    cout << "Cor armazenada na posicao " << posicao << ": " << cores[posicao] << endl;
}

void imprimeAnimais(){
    // Exercicio 09
    // Declare um array de caracteres animais com 10 posições. 
    // Armazene manualmente os nomes de 10 animais nas posições do array. 
    // Leia um caractere do usuário usando cin. 
    // Verifique se o caractere é a primeira letra de um animal do array. Se for, imprima o nome do animal completo.
    string animais[10], caracter;
    int len = sizeof(animais) /sizeof(animais[0]);
    int found;

    cout << "Preencha o Array com nomes de animais:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> animais[i];
    }
    cout << "Entre com um caracter: ";
    cin >> caracter;
    cout << endl;
    for(int i =0; i < len; i++){
        found = animais[i].find(caracter);
        if(found == 0){
            cout << "Posicao "<< i << ": " << animais[i] << endl;
        }
    }
}

void imprimeDiaDaSemana(){
    // Exercicio 10
    // Declare um array de caracteres dias com 7 posições. 
    // Armazene manualmente os nomes dos 7 dias da semana nas posições do array. 
    // Leia um número do usuário entre 1 e 7 usando cin. 
    // Imprima o dia da semana que está na posição informada pelo usuário usando cout.
    string dias[7]; 
    int len = sizeof(dias) /sizeof(dias[0]);                                
    int indice;                              
    cout << len << endl;
    cout << "Preencha o Array com os dias da semana:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> dias[i];
    }
    cout << "Entre com o indice: ";
    cin >> indice;
    cout << endl;
    cout << "O dia Selecionado eh: " << dias[indice] << endl;
}

void comparaPalavras(){
    // Exercicio 11
    // Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. 
    // Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2. 
    // Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.
    string palavra1, palavra2;
   
    cout << "Entre com a palavra 1: ";
    cin >> palavra1;
    cout << "Entre com a palavra 2: ";
    cin >> palavra2;

    if(palavra1.compare(palavra2) == 0){
        cout << "As Strings sao iguais." << endl;
    } else if(palavra1.compare(palavra2) < 0){
        cout << "A primeira String eh menor em ordem alfabetica." << endl;
    } else if(palavra1.compare(palavra2) > 0){
        cout << "A primeira String eh maior em ordem alfabetica." << endl;
    } else {
        cout << "Erro!" << endl;
    }
}

void contaNumeroVogais(){
    // Exercicio 12
    // Declare um array de caracteres frase com 20 posições. 
    // Leia uma frase do usuário usando cin e armazene-a em frase. 
    // Conte o número de vogais na frase e imprima o resultado usando cout.
    string frase;
    char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int numeroVogais = 0;
    int lenVogais = sizeof(vogais) / sizeof(vogais[0]);
   
    cout << "Entre com uma frase: ";
    getline(cin, frase);
    int lenFrase = frase.size();
    
    for(int i = 0; i < lenFrase; i++){
        for(int j = 0; j < lenVogais; j++){
            if(frase[i] == vogais[j]){
                numeroVogais++;
                cout << numeroVogais << " - vogal na posicao " << i << " = " << frase[i] << endl;
            }
        }
    }

    cout << "Na frase inserida existem " << numeroVogais << " vogais!" << endl; 
}

void encontraLetraA(){
    // Exercicio 13
    // Declare um array de caracteres texto com 50 posições. 
    // Leia um texto do usuário usando cin e armazene-o em texto. 
    // Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.
    char texto[50];
    int len = sizeof(texto) / sizeof(texto[0]);

    cout << "Insira uma frase: ";
    cin >> texto;

    for(int i = 0; i < len; i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            cout << "Letra A encontrada na posicao " << i << endl;
            break;
        }
    }
}

void inverteCaracteres(){
    // Exercicio 14
    // Declare um array de caracteres palavra com 10 posições. 
    // Leia uma palavra do usuário usando cin e armazene-a em palavra. 
    // Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.
    string palavra;

    cout << "Insira uma pequena palavra: ";
    cin >> palavra;
 
    reverse(palavra.begin(), palavra.end()); // função reverse(), reverte a stream que é passada como parâmetro. 

    cout << "A palavra inserida foi invertida: " + palavra << endl;  
}

void substituiVogais(){
    // Exercicio 15
    // Declare um array de caracteres frase com 20 posições. 
    // Leia uma frase do usuário usando cin e armazene-a em frase. 
    // Substitua todas as vogais da frase por '*'. 
    // Imprima a frase com as vogais substituídas usando cout.

    string frase;
    char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int len; 
    int lenV = sizeof(vogais) / sizeof(vogais[0]); // mecanismo de sizeof para pegar o tamanho fo vetor

    cout << "Insira uma pequena frase: ";
    getline(cin, frase);
    len = frase.size(); // funcao size para pegar o tamanho de uma String, sizeoff só funciona na string se seu tamanho estiver especificado ([])
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j < lenV; j++){
            if(frase[i] == vogais[j]){
                frase[i] = '*';
            }
        }
    } 
    cout << "A frase inserida foi modificada: " + frase << endl;
}

void imprimeNomeIdade(){
    // Exercicio 16
    // Declare um array de caracteres nomes com 10 posições e um array de inteiros idades com 10 posições. 
    // Leia os nomes e idades de 10 pessoas usando cin e armazene-os nos arrays. 
    // Imprima a lista de nomes e idades em colunas usando cout.

    string nomes[10];
    int idades[10];
    int lenVetor = sizeof(nomes) / sizeof(nomes[0]);

    cout << "Preencha os dados no formato 'Nome,Idade'" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << ": ";
        getline(cin, nomes[i], ',');
        cin >> idades[i];
        cin.ignore();
    }

    cout << endl;
    cout << "Exibindo dados armazenados..." << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << " - " << nomes[i] << " - " << idades[i] << " anos" << endl;
    }
}

void imprimeProdutoPreco(){
    // Exercicio 17
    // Declare um array de caracteres produtos com 20 posições e um array de floats precos com 20 posições. 
    // Leia os nomes e preços de 10 (?) produtos usando cin e armazene-os nos arrays. 
    // Imprima a lista de produtos e preços em colunas 

    string produtos[5];
    float valorProduto[5];
    int lenVetor = sizeof(produtos) / sizeof(produtos[0]);

    cout << "Preencha os dados no formato 'Produto,Preco'" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << ": ";
        getline(cin, produtos[i], ',');
        cin >> valorProduto[i];
        cin.ignore();
    }

    cout << endl;
    cout << "Exibindo dados armazenados..." << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << " - " << produtos[i];
        int tam = 20 - (produtos[i].size());
        for(tam; tam > 0; tam--){
            cout << " ";
        } 
        cout << "- R$ " << valorProduto[i] << endl;
    }
}

void organizaAlfabeticamente(){
    // Exercicio 18
    // Declare um array de caracteres cidades com 15 posições. 
    // Leia os nomes de 15 cidades do usuário usando cin e armazene-as no array. 
    // Ordene as cidades em ordem alfabética e imprima a lista ordenada usando cout.

    string cidades[15]; //= {"Sao Paulo", "Rio de Janeiro", "Brasilia", "Fortaleza", "Salvador", "Belo Horizonte", "Manaus","Curitiba", "Recife", "Goiania", "Porto Alegre", "Belem", "Guarulhos", "Campinas", "Sao Luis"};
    string cidadesTemporaria = " ";
    int lenVetor = sizeof(cidades) / sizeof(cidades[0]);

    cout << "Entre com nomes de cidades: " << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "pos " << i << " ";
        getline(cin, cidades[i]);
        //cin.ignore();
    }
    
    for(int i = 0; i < lenVetor; i++){
        for(int j = 0; j < lenVetor; j++){
            if(cidades[i].compare(cidades[j]) < 0){ //verifica se a proxima seção do vetor é menor em ordem alfabetica (A<B<C...<Z)
                cidadesTemporaria = cidades[i];
                cidades[i] = cidades[j];
                cidades[j] = cidadesTemporaria;
            }
        }
    }

    cout << endl;
    cout << "Exibindo cidades em ordem:" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "pos " << i << " " << cidades[i] << endl;
    }
}

void contaPalavras(){
    // Exercicio 19
    // Declare um array de caracteres texto com 50 posições. 
    // Leia um texto do usuário usando cin e armazene-o em texto. 
    // Conte o número de palavras no texto e imprima o resultado usando cout.

    char texto[50];
    int lenVetor = sizeof(texto) / sizeof(texto[0]);
    int x = 0;

    cout << "Entre com uma frase: ";
    cin.getline(texto, 50);
    cout << endl;

    for(int i = 0; i < lenVetor; i++){
        if(texto[i] == ' '){
            x++;
        }
    }  
    cout << "A frase: \"" << texto << "\" possui " << x << " palavras!" << endl;
}

void encontraMaiorPalavra(){
    // Exercicio 20
    // Declare um array de caracteres frase com 20 posições. 
    // Leia uma frase do usuário usando cin e armazene-a em frase. 
    // Encontre a palavra mais longa da frase e imprima a palavra usando cout.

    char frase[20], palavra[20], maiorPalavra[20];
    int lenVetor = sizeof(frase) / sizeof(frase[0]);
    int numeroPalavra = 0, tamanhoMaior = 0;
    int i, j, tamanhoPalavra;

    cout << "Insira uma pequena frase: ";
    fgets(frase, 21, stdin);
    
    for(i = 0; frase[i] != '\0'; i++){
        if((frase[i] == ' ') || ( frase[i+1] == '\0')){          // conta o numero de palavras da frase
            numeroPalavra++;                                     // incrementa o numero de palavras na variavel numeroPalavra                
        }
    }
    
    for(i = 0; i < lenVetor; i++){                               // percorre a frase
        j = 0;                                                   // reinicia a posicao do array da palavra a cada loop                   
        while((frase[i] != ' ') && (frase[i+1] != '\0')){        // percorre a palavra atual
            palavra[j] = frase[i];                               // atribui os caracteres de frase para a palavra enquanto nao achar um espaco ou o final    
            i++;                                            
            j++;
        }
                                           
        palavra[j] = '\0';                                  // a palavra atual recebe o finalizador de string
        tamanhoPalavra = strlen(palavra);                   // pega o tamanho da palavra atual
        
        if(tamanhoPalavra > tamanhoMaior){                  // verifica se a palavra atual é maior que a maior anterior
            tamanhoMaior = tamanhoPalavra;                  // se for maior recebe o tamanho da palavra atual a armazena o tamanho atual como maior
            strcpy(maiorPalavra, palavra);                  // e aloca a palavra na variavel de maiorPalavra
        }
    }

    cout << endl;
    cout << "Frase Inserida: " << frase << endl;
    cout << "-> possui " << numeroPalavra << " palavra(s);" << endl;
    cout << "-> a MAIOR palavra da frase eh: \"" << maiorPalavra << "\" e possui " << tamanhoMaior << " letras;" << endl;
}

/*
========================================
Exercícios condicionais em C++
========================================
*/

void verificaParidade(int num){
    // Exercício 01
    // Escreva um programa em C++ que solicite ao usuário para digitar um número inteiro. 
    // Em seguida, o programa deve verificar se o número é par e imprimir "Par" se for verdadeiro, e "Ímpar" se for falso. 
    // Dica: Um número é par se o resto da divisão por 2 for igual a zero.

    if(num % 2 == 0){
        cout << "O numero eh par" << endl;
    }else{
        cout << "O numero eh impar" << endl;
    }
}

void verificaPositivoNegativo(int num){
    // Exercício 02
    // Escreva um programa que peça ao usuário para inserir um número inteiro. 
    // Se o número for positivo, imprima "Positivo"; caso contrário, imprima "Negativo". 
    // Dica: Um número é positivo se for maior que zero.

    if (num > 0) {
        cout << "O numero eh positivo" << endl;
    } else if (num < 0){
        cout << "O numero eh negativo" << endl;
    } else {
        cout << "O numero eh zero" << endl;
    }
}

void verificaSeEMultiplo(int num){
    // Exercício 03
    // Crie um programa que solicite ao usuário para inserir um número inteiro. 
    // Se o número for múltiplo de 3 e 5 ao mesmo tempo, imprima "É múltiplo de 3 e 5"; caso contrário, imprima "Não é múltiplo de 3 e 5". 
    // Dica: Um número é múltiplo de 3 e 5 se for divisível por ambos.

    if(num % 15 == 0){
        cout << "O numero eh multiplo de 3 e 5" << endl;
    }else{
        cout << "O numero nao eh multiplo de 3 e 5" << endl;
    }
}

void verificaTipoTriangulo(int x, int y, int z){
    // Exercício 04
    // Escreva um programa que solicite ao usuário para inserir três números inteiros representando os lados de um triângulo. 
    // O programa deve classificar o triângulo como "Equilátero" se todos os lados forem iguais, 
    // "Isósceles" se dois lados forem iguais, ou "Escaleno" se todos os lados forem diferentes. 
    // Dica: Um triângulo é equilátero se todos os lados forem iguais.

    if (x == y && x == z) {
        cout << "Triangulo Equilatero" << endl;
    } if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x)){
        cout << "Triangulo Isoceles" << endl;
    } else if (x != y && x != z) {
        cout << "Triangulo Escaleno" << endl;
    }
}

int calculadoraSimples(int x, int y, char op){
    // Exercício 05
    // Crie um programa que solicite ao usuário para inserir dois números e uma operação matemática (+, -, *, /). 
    // O programa deve executar a operação e imprimir o resultado. 
    // Dica: Você pode usar uma instrução switch para realizar a operação selecionada.

    switch (op){
        case '+': return x + y; break;
        case '-': return x - y; break;
        case '*': return x * y; break;
        case '/': if(y != 0){ return x / y; }else{ cout << "Não Existe Divisão por 0" << endl; return -1; } break;
        case '%': return x % y; break;
        default: cout << "Nao aceitamos essa operacao" << endl; return -1; break;
    }
}

void verificaBissexto(int ano){
    // Exercício 06
    // Escreva um programa que solicite ao usuário para inserir um ano e verifique se é um ano bissexto ou não. 
    // Imprima "Ano bissexto" se for verdadeiro e "Não é ano bissexto" caso contrário. 
    // Dica: Um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto se também for divisível por 400.
    
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        cout << "Eh um ano bissexto" << endl;
    } else {
        cout << "Nao eh um ano bissexto" << endl;
    }
}

void converteTemperatura(){
    // Exercício 07
    // Crie um programa que pergunte ao usuário se deseja converter Celsius para Fahrenheit ou Fahrenheit para Celsius. 
    // Em seguida, solicite a temperatura e faça a conversão, imprimindo o resultado. 
    // Dica: Use fórmulas de conversão apropriadas: C = (F - 32) / 1.8 e F = (C * 1.8) + 32.

    int op;
    float temp;

    while (op != 0){
        cout << "1 - Celcius para Fahrenheit;" << endl;
        cout << "2 - Fahrenheit para Celcius;" << endl;
        cout << "0 - Fim Programa;" << endl;
        cin >> op;

        if (op == 1){
            cout << "Entre com a temperatura em graus Celsius: ";
            cin >> temp;
            temp = (temp * 1.8) + 32;
            cout << "Conversao: " << temp << "°F" << endl;
        }
        if (op == 2){
            cout << "Entre com a temperatura em graus Fahrenheit: ";
            cin >> temp;
            temp = (temp - 32) / 1.8;
            cout << "Conversao: " << temp << "°C" << endl;
        }
    }
}

void calculaIMC(float altura, float peso){
    // Exercício 08
    // Escreva um programa em C++ que solicite ao usuário inserir sua altura em metros e seu peso em quilogramas. 
    // O programa calculará o IMC (Índice de Massa Corporal) com base nessas informações e imprimirá o resultado, 
    // juntamente com a categoria correspondente de acordo com a tabela de classificação padrão.

    float imc;
    imc = peso / (altura * altura) ;
    if (imc < 18.5){
        cout << "Abaixo do Peso" << endl;
    }
    if (imc >= 18.5 && imc < 25){
        cout << "Peso Normal" << endl;
    }
    if (imc >= 25 && imc < 30){
        cout << "Sobrepeso" << endl;
    }
    if (imc >= 30){
        cout << "Obeso" << endl;
    }
}

void verificaQuadrante(int x, int y){
    // Exercício 09
    // Escreva um programa que solicite ao usuário para inserir as coordenadas (x, y) de um ponto no plano cartesiano. 
    // O programa deve determinar e imprimir em qual quadrante o ponto está localizado. 
    // Dica: Use condicionais if e operadores lógicos para verificar em qual quadrante o ponto está. 

    if(x > 0 && y > 0){
        cout << "1° Quadrante" << endl;
    }
    if(x < 0 && y > 0){
        cout << "2° Quadrante" << endl;
    }
    if(x < 0 && y < 0){
        cout << "3° Quadrante" << endl;
    }
    if(x > 0 && y < 0){
        cout << "4° Quadrante" << endl;
    }
    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }
}

void verificaSaque(int saque){
    // Exercício 10
    // Escreva um programa em C++ que serve como verificação de saldo em um banco. 
    // Defina uma variável para ser o saldo do cliente e peça que ele digite a quantia que quer retirar no caixa. 
    // O algoritmo deve verificar se o cliente possui esse saldo. Se sim, escreva na tela que pode fazer uma retirada,
    // se não avise que o saldo é menor que o valor solicitado.

    int saldo = 1000;
   
    if(saque < 0 || saque > saldo){
        cout << "Valor Invalido" << endl;
    } else {
        cout << "Saque Realizado!" << endl;
        cout << "Saldo Restante: R$ " << saldo-saque << endl;
    }
}

void verificaLeads(int leads){
    // Exercício 11
    // Escreva um programa em C++ que recebe do usuário um número de leads que a empresa recebeu nesse dia e verifica se a quantidade é baixa (5 ou menos), 
    // esperada (6 a 10) ou alta (11+) e escreve na tela essa indicação.

    if(leads <= 5){
        cout << "Qauntidade baixa" << endl;
    } else if (6 <= leads <= 10){
        cout << "Qauntidade Esperada" << endl;
    } else if (leads > 11){
        cout << "Qauntidade Alta" << endl;
    } else {
        cout << "Invalido" << endl;
    }
}

void verificaAprovacao(float nota1, float nota2, float nota3, float presenca){
    // Exercício 12
    // Crie um algoritmo em C++ que recebe 3 notas de um aluno, junto com a sua porcentagem de presença na cadeira, 
    // e deve fazer a média das notas do aluno. Se for acima de 7 o aluno está aprovado, se for abaixo de 7 mas acima de 5 o aluno está em recuperação,
    // se for abaixo de 5 o aluno reprovou. E se o aluno tiver 100% de presença e nota para aprovação deve imprimir "Aprovado" e um parabéns. 
    // Se o aluno tiver 75% de presença e nota para aprovação deve imprimir "Aprovado". Se o aluno tiver menos de 75% de presença, 
    // mesmo que tenha nota para aprovação, deve retornar "Reprovado".

    float media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7){
        if (presenca == 100) {
            cout << "Aprovado! Parabens!" << endl;
        } else if (presenca >= 75 && presenca < 100) {
            cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    } else if (media >= 5 && media < 7){
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
}

int main(){
    // Exercícios sobre Strings e Arrays em C++ 
    /*imprimeNome();
    cout << endl;
    imprimeVogal();
    cout << endl;
    verificaVogal();
    cout << endl;
    imprimePalavra();
    cout << endl;
    imprimeFrase();
    cout << endl;
    imprimePar();
    cout << endl;
    imprimeFrutas();
    cout << endl;
    imprimeCores();
    cout << endl;
    imprimeAnimais();
    cout << endl;
    imprimeDiaDaSemana();
    cout << endl;
    comparaPalavras();
    cout << endl;
    contaNumeroVogais();
    cout << endl;
    encontraLetraA();
    cout << endl;
    inverteCaracteres();
    cout << endl;
    substituiVogais();
    cout << endl;
    imprimeNomeIdade();
    cout << endl;
    organizaAlfabeticamente();
    cout << endl;
    contaPalavras();
    cout << endl;
    encontraMaiorPalavra();
    cout << endl;*/

    // Exercícios condicionais em C++
    int *num1 = new int;
    cout << "Entre com um numero inteiro: ";
    cin >> *num1;
    verificaParidade(*num1);
    cout << endl;

    cout << "Entre com um numero inteiro: ";
    cin >> *num1;
    verificaPositivoNegativo(*num1);
    cout << endl;

    cout << "Entre com um numero inteiro: ";
    cin >> *num1;
    verificaSeEMultiplo(*num1);
    cout << endl;

    int *num2 = new int; 
    int *num3 = new int; 
    cout << "Entre com o primeiro lado: ";
    cin >> *num1;
    cout << "Entre com o segundo lado: ";
    cin >> *num2;
    cout << "Entre com o terceiro lado: ";
    cin >> *num3;
    verificaTipoTriangulo(*num1, *num2, *num3);
    cout << endl;
    
    int *resultado = new int;
    char *op = new char; 
    cout << "Insira o primeiro numero: ";
    cin >> *num1;
    cout << "Insira o segundo numero: ";
    cin >> *num2;
    cout << "Informe a operacao matematica: ";
    cin >> *op;
    *resultado = calculadoraSimples(*num1, *num2, *op);
    cout << "Resultado: " << *resultado << endl;
    cout << endl;

    cout << "Entre com um ano: ";
    cin >> *num1;
    verificaBissexto(*num1);
    cout << endl;

    converteTemperatura();
    cout << endl;
    
    float *altura = new float;
    float *peso = new float;
    cout << "Entre com sua altura em metros: ";
    cin >> *altura;
    cout << "Entre com seu peso em quilos: ";
    cin >> *peso;
    calculaIMC(*altura, *peso);
    cout << endl;

    cout << "Entre com X: ";
    cin >> *num1;
    cout << "Entre com Y: ";
    cin >> *num2;
    verificaQuadrante(*num1, *num2);
    cout << endl;

    cout << "Entre com um valor para o saque: ";
    cin >> *num1;
    verificaSaque(*num1);
    cout << endl;

    cout << "Entre com o numero de Leads diarios: ";
    cin >> *num1;
    verificaLeads(*num1);
    cout << endl;

    float *nota1 = new float;
    float *nota2 = new float;
    float *nota3 = new float;
    float *presenca = new float;
    cout << "Entre com a primeira nota: ";
    cin >> *nota1;
    cout << "Entre com a segunda nota: ";
    cin >> *nota2;
    cout << "Entre com a terceira nota: ";
    cin >> *nota3;
    cout << "Entre com a presenca em porcentagem: ";
    cin >> *presenca;
    verificaAprovacao(*nota1, *nota2, *nota3, *presenca);
    cout << endl;

    delete num1, num2, num3, resultado;
    delete altura, peso;
    delete op;
    return 0;
}