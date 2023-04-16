#ifndef FUNCOES_H
#define FUNCOES_H
#include <iostream>
#include <windows.h>
#include <vector>
#include <fstream>
#include <time.h>

using namespace std;

vector<int> vetor_num;       // vetor de numeros
vector<string> vetor_string; // vetor de strings

void menu();
void menu2();
void LeArq(int op );
void BubbleSort( unsigned long long *comparacoes, unsigned long long *trocas);
void BubbleSort_String( unsigned long long *comparacoes, unsigned long long *trocas);
void Ordena_Arq( int op_metodo, int op_instancia);
void OrdenaArq_String(int op_metodo, int op_instancia);
void InsertionSort_String(unsigned long long *comparacoes, unsigned long long *trocas);
void InsertionSort( unsigned long long *comparacoes, unsigned long long *trocas);
void SelectionSort( unsigned long long *comparacoes, unsigned long long *trocas);
void SelectionSort_String( unsigned long long *comparacoes, unsigned long long *trocas);
void QuickSort( int esquerda, int direita, unsigned long long *comparacoes, unsigned long long *trocas);
void QuickSort_String( int esquerda, int direita, unsigned long long *comparacoes, unsigned long long *trocas);
void ShellSort( unsigned long long *comparacoes, unsigned long long *trocas);
void ShellSort_String( unsigned long long *comparacoes, unsigned long long *trocas);
void Merge_String(vector<string> &vetor_string, int inicio, int meio, int fim, unsigned long long *comparacoes, unsigned long long *trocas);
void MergeSort_String(vector<string> &vetor_string, int inicio, int fim, unsigned long long *comparacoes, unsigned long long *trocas);
void MergeSort(vector<int> &vetor_num, int inicio, int fim, unsigned long long *comparacoes, unsigned long long *trocas);
void Merge(vector<int> &vetor_num, int inicio, int meio, int fim, unsigned long long *comparacoes, unsigned long long *trocas);
void Imprime_String();
void Imprime();
void Ordena_Vetores(int op_metodo, int op_instancia);
void ExibeMetodo(int op_metodo, int op_instancia);
void ExibeInstancia(int op_instancia);

#endif
