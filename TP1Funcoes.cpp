#include "TP1.hpp"

void menu()//Exibe o menu de metodos
{
    cout << "\n\n  **************************************************************************\n";
    cout << "\n  ****                   METODOS DE ORDENACAO                           ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 1 - Bubble Sort                                                  ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 2 - Insertion Sort                                               ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 3 - Selection Sort                                               ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 4 - Quick Sort                                                   ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 5 - Merge Sort                                                   ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 6 - Shell Sort                                                   ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 7 - Sair                                                         ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
}

void menu2()//Exibe o menu de instancias
{
    cout << "\n\n  **************************************************************************\n";
    cout << "\n  ****                           INSTANCIA                              ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE MIL                                              ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 1 - LISTA ORDENADA - 1000                                        ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 2 - LISTA QUASE ORDENADA - 1000                                  ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 3 - LISTA ALEATORIA - 1000                                       ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 4 - LISTA INVERSAMENTE ORDENADA - 100                            ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE DEZ MIL                                          ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 5 - LISTA ORDENADA - 10000                                       ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 6 - LISTA QUASE ORDENADA - 10000                                 ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 7 - LISTA ALEATORIA - 10000                                      ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 8 - LISTA INVERSAMENTE ORDENADA - 1000                           ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE CEM MIL                                          ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 9 - LISTA ORDENADA - 100000                                      ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 10 - LISTA QUASE ORDENADA - 100000                               ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 11 - LISTA ALEATORIA - 100000                                    ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 12 - LISTA INVERSAMENTE ORDENADA - 10000                         ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE UM MILHAO                                        ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 13 - LISTA ORDENADA - 1000000                                    ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 14 - LISTA QUASE ORDENADA - 1000000                              ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 15 - LISTA ALEATORIA - 1000000                                   ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 16 - LISTA INVERSAMENTE ORDENADA - 1000000                       ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE DICIONARIO - 29855                               ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 17 - DICIONARIO ORDENADO - 29855                                 ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 18 - DICIONARIO ALEATORIO - 29855                                ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 19 - LISTA INERSAMENTE ORDENADO - 29855                          ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  ****   INSTANCIAS DE DICIONARIO - 261791                              ****\n";
    cout << "\n  **************************************************************************\n";
    cout << "\n  **** 20 - DICIONARIO ORDENADO - 261791                                ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 21 - DICIONARIO ALEATORIO - 261791                               ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 22 - LISTA INERSAMENTE ORDENADO - 261791                         ****\n";
    cout << "\n  ****                                                                  ****\n";
    cout << "\n  **** 23 - Sair                                                        ****\n";
    cout << "\n  **************************************************************************\n";
}

void ExibeInstancia(int op_instancia)//vai exibir a instancia escolhida para a ordenacao
{
    switch (op_instancia)
    {
    case 1:
        cout << "Lista Ordenada 1000\n";
        break;

    case 2:
        cout << "Lista Quase Ordenada 1000\n";
        break;

    case 3:
        cout << "Lista Aleatoria 1000\n";
        break;

    case 4:
        cout << "Lista Inveresamente Ordenada 1000\n";
        break;

    case 5:
        cout << "Lista Ordenada 10000\n";
        break;

    case 6:
        cout << "Lista Quase Ordenada 10000\n";
        break;

    case 7:
        cout << "Lista Aleatoria 10000\n";
        break;

    case 8:
        cout << "Lista Inveresamente Ordenada 10000\n";
        break;

    case 9:
        cout << "Lista Ordenada 100000\n";
        break;

    case 10:
        cout << "Lista Quase Ordenada 100000\n";
        break;

    case 11:
        cout << "Lista Aleatoria 100000\n";
        break;

    case 12:
        cout << "Lista Inveresamente Ordenada 100000\n";
        break;

    case 13:
        cout << "Lista Ordenada 1000000\n";
        break;

    case 14:
        cout << "Lista Quase Ordenada 1000000\n";
        break;

    case 15:
        cout << "Lista Aleatoria 1000000\n";
        break;

    case 16:
        cout << "Lista Inveresamente Ordenada 1000000\n";
        break;

    case 17:
        cout << "Dicionario Ordenado 29855\n";
        break;

    case 18:
        cout << "Dicionario Aleaotrio 29855\n";
        break;

    case 19:
        cout << "Dicionario Inversamente Ordenado 29855\n";
        break;

    case 20:
        cout << "Dicionario Ordenado 261791\n";
        break;

    case 21:
        cout << "Dicionario Aleatorio 261791\n";
        break;

    case 22:
        cout << "Dicionario Inversamente Ordenado 261791\n";
        break;
    }
}

void ExibeMetodo(int op_metodo, int op_instancia)//exibe o metodo e a instancia escolhidos e executados
{
    switch (op_metodo)
    {
    case 1:
        cout << "\n\nOrdenou usando: Bubble Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;

    case 2:
        cout << "\n\nOrdenou usando: Insertion Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;

    case 3:
        cout << "\n\nOrdenou usando: Selection Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;

    case 4:
        cout << "\n\nOrdenou usando: Quick Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;

    case 5:
        cout << "\n\nOrdenou usando: Merge Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;

    case 6:
        cout << "\n\nOrdenou usando: Shell Sort\nInstancia: ";
        ExibeInstancia(op_instancia);
        break;
    }
}

void LeArq(int op) // funcao que le o arquivo a ser ordenado
{
    string nome_arquivo; // salva em uma variavel o nome do arquivo
    ifstream arquivo;

    switch (op)
    {
        // MIL
    case 1:
        nome_arquivo = "../ListaOrdenada-1000.txt";
        break;

    case 2:
        nome_arquivo = "../ListaQuaseOrdenada-1000.txt";
        break;

    case 3:
        nome_arquivo = "../ListaAleatoria-1000.txt";
        break;

    case 4:
        nome_arquivo = "../ListaInversamenteOrdenada-1000.txt";
        break;

        // DEZ MILL
    case 5:
        nome_arquivo = "../ListaOrdenada-10000.txt";
        break;

    case 6:
        nome_arquivo = "../ListaQuaseOrdenada-10000.txt";
        break;

    case 7:
        nome_arquivo = "../ListaAleatoria-10000";
        break;

    case 8:
        nome_arquivo = "../ListaInversamenteOrdenada-10000.txt";
        break;

        // CEM MIL
    case 9:
        nome_arquivo = "../ListaOrdenada-100000.txt";
        break;

    case 10:
        nome_arquivo = "../ListaQuaseOrdenada-100000.txt";
        break;

    case 11:
        nome_arquivo = "../ListaAleatoria-100000.txt";
        break;

    case 12:
        nome_arquivo = "../ListaInversamenteOrdenada-100000.txt";
        break;

        // UM MILHAO
    case 13:
        nome_arquivo = "../ListaOrdenada-1000000.txt";
        break;

    case 14:
        nome_arquivo = "../ListaQuaseOrdenada-1000000.txt";
        break;

    case 15:
        nome_arquivo = "../ListaAleatoria-1000000.txt";
        break;

    case 16:
        nome_arquivo = "../ListaInversamenteOrdenada-1000000.txt";
        break;
        // DICIONARIO 29855
    case 17:
        nome_arquivo = "../DicionarioOrdenado-29855.txt";
        break;

    case 18:
        nome_arquivo = "../DicionarioAleatorio-29855.txt";
        break;

    case 19:
        nome_arquivo = "../DicionarioInversamenteOrdenado-29855.txt";
        break;

        // DICIONARIO 261791
    case 20:
        nome_arquivo = "../DicionarioOrdenado-261791.txt";
        break;

    case 21:
        nome_arquivo = "../DicionarioAleatorio-261791.txt";
        break;

    case 22:
        nome_arquivo = "../DicionarioInversamenteOrdenado-261791.txt";
        break;

    default:
        cout << "Opcao Invalida! ";
        break;
    }

    arquivo.open(nome_arquivo); // abre o arquivo escolhido
    if (op < 17 && op > 0)      // isntacias de numeros
    {
        while (!arquivo.eof()) // enquanto nao for o final do arquivo  ou seja ele le ate o final
        {
            int aux;                  // variavel auxiliar
            arquivo >> aux;           // puxa um numero do arquivo e salva em aux
            vetor_num.push_back(aux); // insere aux no vetor
        }
    }
    else if (op > 16 && op < 23) // instancias de palavras
    {
        while (!arquivo.eof()) // ate o final do arquivo
        {
            string aux;
            arquivo >> aux;
            vetor_string.push_back(aux);
        }
    }

    arquivo.close(); // fecha o arquivo
}

void BubbleSort(unsigned long long *comparacoes, unsigned long long *trocas) // usando ponteiro para que quando enviar a variavel para outra funcao ele atualiza o valor de troca e comp
{
    int aux, tr; // variavel auxiliar e troca

    for (int i = 0; i < vetor_num.size() - 1; i++)
    {
        tr = 0;
        for (int j = 1; j < vetor_num.size() - i; j++)
        {
            if (vetor_num[j] < vetor_num[j - 1])
            {
                (*comparacoes)++; // comparacoes mais 1
                aux = vetor_num[j];
                vetor_num[j] = vetor_num[j - 1];
                vetor_num[j - 1] = aux;
                tr = 1;      // troca recebe 1
                (*trocas)++; // trocas recebe mais 1
            }
            else
            {
                (*comparacoes)++; // comparacoes mais 1
            }
        }

        if (tr == 0) // se troca for igual a 0 quer dizer que o vetor esta ordenado
            break;
    }
}

void BubbleSort_String(unsigned long long *comparacoes, unsigned long long *trocas) // usando ponteiro para que quando enviar a variavel para outra funcao ele atualiza o valor de troca e comp
{
    string aux;
    int tr;

    for (int i = 0; i < vetor_string.size() - 1; i++)//percorre o vector de string
    {
        tr = 0;
        for (int j = 1; j < vetor_string.size() - i; j++)
        {
            if (vetor_string[j] < vetor_string[j - 1])
            {
                (*comparacoes)++; // comparacoes mais 1
                aux = vetor_string[j];
                vetor_string[j] = vetor_string[j - 1];
                vetor_string[j - 1] = aux;
                tr = 1;      // troca recebe 1
                (*trocas)++; // trocas recebe mais 1
            }
            else
            {
                (*comparacoes)++; // comparacoes mais 1
            }
        }

        if (tr == 0) // se troca for igual a 0 quer dizer que o vector esta ordenado
            break;
    }
}

void Ordena_Arq(int op_metodo, int op_instancia)//Ordena as instancias de numeros
{
    unsigned long long comparacoes = 0, trocas = 0; // numeros muito grandes de troca e comparacoes
    clock_t inicio, fim;                            // contagem de tempo para ordenacao
    long double tempo;

    LeArq(op_instancia); // le o arquivo escolhido e colocar no vetor

    if (op_metodo == 1)
    {

        inicio = clock(); // inicio do tempo de execucao
        BubbleSort(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime();

        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 2)
    {

        inicio = clock(); // inicio do tempo de execucao
        InsertionSort(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 3)
    {

        inicio = clock(); // inicio do tempo de execucao
        SelectionSort(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos
        Imprime();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << " segundos"<< endl;
        cout << "Tempo: " << tempo << endl;
    }

    if (op_metodo == 4)
    {

        inicio = clock(); // inicio do tempo de execucao
        QuickSort(0, vetor_num.size() - 1, &comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 5)
    {

        inicio = clock(); // inicio do tempo de execucao
        MergeSort(vetor_num, 0, vetor_num.size() - 1, &comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 6)
    {

        inicio = clock(); // inicio do tempo de execucao
        ShellSort(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos
        Imprime();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }
}

void OrdenaArq_String(int op_metodo, int op_instancia)//Ordena as instancias de String
{

    unsigned long long comparacoes = 0, trocas = 0; // numeros muito grandes de troca e comparacoes
    clock_t inicio, fim;                            // contagem de tempo para ordenacao
    long double tempo;

    LeArq(op_instancia); // le o arquivo escolhido e colocar no vetor

    if (op_metodo == 1)
    {

        inicio = clock(); // inicio do tempo de execucao
        BubbleSort_String(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 2)
    {
        inicio = clock(); // inicio do tempo de execucao
        InsertionSort_String(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 3)
    {

        inicio = clock(); // inicio do tempo de execucao
        SelectionSort_String(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 4)
    {

        inicio = clock(); // inicio do tempo de execucao
        QuickSort_String(0, vetor_string.size() - 1, &comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 5)
    {

        inicio = clock(); // inicio do tempo de execucao
        MergeSort_String(vetor_string, 0, vetor_string.size() - 1, &comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }

    if (op_metodo == 6)
    {

        inicio = clock(); // inicio do tempo de execucao
        ShellSort_String(&comparacoes, &trocas);
        fim = clock(); // fim do tempo de execucao

        tempo = (double)(fim - inicio) / CLOCKS_PER_SEC; // transforma o tempo em segundos

        Imprime_String();
        ExibeMetodo(op_metodo, op_instancia);
        cout << "\n\nTrocas: " << trocas << endl;
        cout << "Comparacoes: " << comparacoes << endl;
        cout << "Tempo: " << tempo << " segundos"<< endl;
    }
}

void InsertionSort(unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao
{
    int aux;
    for (int i = 1; i < vetor_num.size(); i++)
    {
        aux = vetor_num[i];//recebe a primeira posicao e vai andando
        for (int j = i; (j > 0) && (aux < vetor_num[j - 1]); j--)
        {
            vetor_num[j] = vetor_num[j - 1];
            vetor_num[j - 1] = aux;
            (*trocas)++;
            (*comparacoes)++;
        }
    }
}

void InsertionSort_String(unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao para string
{
    string aux;
    for (int i = 1; i < vetor_string.size(); i++)
    {
        aux = vetor_string[i];
        for (int j = i; (j > 0) && (aux < vetor_string[j - 1]); j--)
        {
            vetor_string[j] = vetor_string[j - 1];
            vetor_string[j - 1] = aux;
            (*trocas)++;
            (*comparacoes)++;
        }
    }
}

void SelectionSort(unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao
{
    int min, aux;

    for (int i = 0; i < vetor_num.size() - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < vetor_num.size(); j++)
        {
            (*comparacoes)++;
            if (vetor_num[j] < vetor_num[min])
            {
                min = j;
            }
        }

        aux = vetor_num[i];
        vetor_num[i] = vetor_num[min];
        vetor_num[min] = aux;

        (*trocas)++;
    }
}

void SelectionSort_String(unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao para string
{
    int min, i, j;
    string aux;

    for (i = 0; i < vetor_string.size(); i++)
    {
        min = i;

        for (j = i + 1; j < vetor_string.size(); j++)
        {
            if (vetor_string[j] < vetor_string[min])
            {
                (*comparacoes)++;
                min = j;
            }
            else
            {
                (*comparacoes)++;
            }
        }
        aux = vetor_string[i];
        vetor_string[i] = vetor_string[min];
        vetor_string[min] = aux;

        (*trocas)++;
    }
}

void QuickSort(int esquerda, int direita, unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao
{
    int temp, i = esquerda, j = direita;
    int pivot = vetor_num[(esquerda + direita) / 2];//pivo central

    while (i <= j)
    {
        while (vetor_num[i] < pivot)
            i++;
        while (vetor_num[j] > pivot)
            j--;

        (*comparacoes)++;
        if (i <= j)
        {
            temp = vetor_num[i];
            vetor_num[i] = vetor_num[j];
            vetor_num[j] = temp;
            i++;
            j--;

            (*trocas)++;
        }
    }

    (*comparacoes)++;
    if (esquerda < j)
        QuickSort(esquerda, j, comparacoes, trocas);
    (*comparacoes)++;
    if (i < direita)
        QuickSort(i, direita, comparacoes, trocas);
}

void QuickSort_String(int esquerda, int direita, unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao para string
{
    string temp;
    int i = esquerda, j = direita;
    string pivot = vetor_string[(esquerda + direita) / 2];//pivo central

    while (i <= j)
    {
        while (vetor_string[i] < pivot)
            i++;
        while (vetor_string[j] > pivot)
            j--;

        (*comparacoes)++;
        if (i <= j)
        {
            temp = vetor_string[i];
            vetor_string[i] = vetor_string[j];
            vetor_string[j] = temp;
            i++;
            j--;

            (*trocas)++;
        }
    }

    (*comparacoes)++;
    if (esquerda < j)
        QuickSort_String(esquerda, j, comparacoes, trocas);
    (*comparacoes)++;
    if (i < direita)
        QuickSort_String(i, direita, comparacoes, trocas);
}

void ShellSort(unsigned long long *comparacoes, unsigned long long *trocas)//Metodo de ordenacao
{
    int h, x, i, j;

    for (h = 1; h < vetor_num.size(); h = 3 * h + 1)
        ;
    while (h > 1)
    {
        h = h / 3;
        (*comparacoes)++;
        for (i = h; i < vetor_num.size(); i++)
        {
            x = vetor_num[i];
            j = i;
            while (j >= h && vetor_num[j - h] > x)
            {
                (*comparacoes)++;
                vetor_num[j] = vetor_num[j - h];
                j = j - h;
                (*trocas)++;
            }
            vetor_num[j] = x;
            (*comparacoes)++;
        }
    }
}

void ShellSort_String(unsigned long long *comparacoes, unsigned long long *trocas)
{
    int h, i, j;
    string x;

    for (h = 1; h < vetor_string.size(); h = 3 * h + 1)
        ;
    while (h > 1)
    {
        h = h / 3;
        (*comparacoes)++;
        for (i = h; i < vetor_string.size(); i++)
        {
            x = vetor_string[i];
            j = i;
            while (j >= h && vetor_string[j - h] > x)
            {
                (*comparacoes)++;
                vetor_string[j] = vetor_string[j - h];
                j = j - h;
                (*trocas)++;
            }
            vetor_string[j] = x;
            (*comparacoes)++;
        }
    }
}

void Imprime()
{
    for (int i = 0; i < vetor_num.size(); i++) // imprime vetor de numeros
    {
        cout << vetor_num[i] << " ";
    }

    vetor_num.clear();
}

void Imprime_String()
{
    for (int i = 0; i < vetor_string.size(); i++) // imprime vetor de string
    {
        cout << vetor_string[i] << " ";
    }

    vetor_string.clear();
}

void Merge(vector<int> &vetor_num, int inicio, int meio, int fim, unsigned long long *comparacoes, unsigned long long *trocas)
{
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int *L = new int[n1];
    int *R = new int[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = vetor_num[inicio + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = vetor_num[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2)
    {
        (*comparacoes)++;
        if (L[i] <= R[j])
        {
            vetor_num[k] = L[i];
            i++;
        }
        else
        {
            vetor_num[k] = R[j];
            j++;
        }
        k++;
        (*trocas)++;
    }

    while (i < n1)
    {
        vetor_num[k] = L[i];
        i++;
        k++;
        (*trocas)++;
    }

    while (j < n2)
    {
        vetor_num[k] = R[j];
        j++;
        k++;
        (*trocas)++;
    }
}

void MergeSort(vector<int> &vetor_num, int inicio, int fim, unsigned long long *comparacoes, unsigned long long *trocas)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        MergeSort(vetor_num, inicio, meio, comparacoes, trocas);
        MergeSort(vetor_num, meio + 1, fim, comparacoes, trocas);

        Merge(vetor_num, inicio, meio, fim, comparacoes, trocas);
    }
}

void Merge_String(vector<string> &vetor_string, int inicio, int meio, int fim, unsigned long long *comparacoes, unsigned long long *trocas)
{
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    string *L = new string[n1];
    string *R = new string[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = vetor_string[inicio + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = vetor_string[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2)
    {
        (*comparacoes)++;
        if (L[i] <= R[j])
        {
            vetor_string[k] = L[i];
            i++;
        }
        else
        {
            vetor_string[k] = R[j];
            j++;
        }
        k++;
        (*trocas)++;
    }

    while (i < n1)
    {
        vetor_string[k] = L[i];
        i++;
        k++;
        (*trocas)++;
    }

    while (j < n2)
    {
        vetor_string[k] = R[j];
        j++;
        k++;
        (*trocas)++;
    }
}

void MergeSort_String(vector<string> &vetor_string, int inicio, int fim, unsigned long long *comparacoes, unsigned long long *trocas)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        MergeSort_String(vetor_string, inicio, meio, comparacoes, trocas);
        MergeSort_String(vetor_string, meio + 1, fim, comparacoes, trocas);

        Merge_String(vetor_string, inicio, meio, fim, comparacoes, trocas);
    }
}

void Ordena_Vetores(int op_metodo, int op_instancia)
{
    if (op_instancia < 17 && op_instancia >= 1)
    {

        Ordena_Arq(op_metodo, op_instancia);
    }
    else if (op_instancia > 16 && op_instancia < 23)
    {

        OrdenaArq_String(op_metodo, op_instancia);
    }
    else
    {
        cout << "Opcao invalida!";
    }
}