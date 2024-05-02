#include <iostream>
#include <algorithm>

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


int main(){
    // Exercícios sobre Strings e Arrays em C++
    imprimeNome();
    imprimeVogal();
    verificaVogal();
    imprimePalavra();
    imprimeFrase();
    imprimePar();
    imprimeFrutas();
    imprimeCores();
    imprimeAnimais();
    imprimeDiaDaSemana();
    comparaPalavras();
    contaNumeroVogais();
    encontraLetraA();
    inverteCaracteres();

    return 0;
}