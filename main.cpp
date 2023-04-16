#include "TP1Funcoes.cpp"

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int op_metodo, op_instancia;

    do
    {

        menu();
        cout << "\n Escolha uma opcao: ";
        cin >> op_metodo;

        cout << endl;
        system("cls");

        if (op_metodo <= 6 && op_metodo >= 1)
        {
            menu2();
            cout << "Escolha uma opcao: ";
            cin >> op_instancia;

            if (op_instancia == 23)
            {
                break;
            }
        }
        if (op_metodo == 7)
        {
            break;
        }

        system("cls");

        cout << endl;

        Ordena_Vetores(op_metodo, op_instancia);

        system("pause");
        system("cls");

    } while (op_metodo != 7);

    cout << endl
         << endl;
    return 0;
}
