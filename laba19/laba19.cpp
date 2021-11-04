// laba19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    //задание 1
    cout << "Task 1. ";
    int n,j=0,count=0;
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1 )
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas1 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Print "<< i << " number: ";
            cin >> mas1[i];
        }
        for (int i = 1; i < n; i++) //считаем кол-во одинаковых элементов
        {
            if (mas1[i] == mas1[i -1])
                count++;
        }
        int* mas1Modified = new int[n-count];
        for (int i = 1; i <= n; i++)
        {
            if (mas1[i-1] != mas1[i])
            {
                mas1Modified[j] = mas1[i-1];
                j++;
            }
        }
        cout << "\nModified array: ";
        for (int i = 0; i < n-count; i++)
            cout << mas1Modified[i] << " "; //выводим на экран
    }
    //задание 2
    cout << "\n\nTask 2. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas2 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Print " << i << " number: ";
            cin >> mas2[i];
        }
        int AllCount=0;
        for (int i = 0; i < n; i++) //считаем кол-во одинаковых элементов
        {
            count = 0;
            for (j = 0; j < n; j++)
                if (mas2[i] == mas2[j])
                    count++;
            if (count == 2) 
                AllCount = AllCount + count-1;
        }
        int* mas2Modified = new int[n - AllCount];
        int k=0;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (j = 0; j < n; j++)
                if (mas2[i] == mas2[j])
                    count++;
            if (count!=2)
            {
                mas2Modified[k] = mas2[i];
                k++;
            }
        }
        cout << "\nModified array: ";
        for (int i = 0; i < n - AllCount; i++)
            cout << mas2Modified[i] << " "; //выводим на экран
        cout <<"\nSize modified array:" << n - AllCount; //выводим на экран
    }
    //задание 3
    cout << "\n\nTask 3. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas3 = new int[n]; 
        cout << "Array: \n";
        for (int i = 0; i < n; i++)
        {
            mas3[i] = rand() % 30;  //рандомно заполняем массив 
            cout << mas3[i] << " "; //выводим на экран
        }
        int iMin=0, iMax=0;
        for (int i = 0; i < n; i++)
        {
            if (mas3[i] < mas3[iMin]) //индекс мин числа
                iMin = i;
            if (mas3[i] > mas3[iMax]) //индекс макс числа
                iMax = i;
        }
        cout << "\nModified array: \n";
        for (int i = 0; i < n; i++)
        {
            if(i==iMin)
                cout << 0 << " ";
            cout << mas3[i] << " "; //выводим на экран
            if(i==iMax)
                cout << 0 << " ";
        }
    }
    //задание 4
    cout << "\n\nTask 4. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas4 = new int[n];
        cout << "Array: \n";
        for (int i = 0; i < n; i++)
        {
            mas4[i] = rand() % 30-15;  //рандомно заполняем массив 
            cout << mas4[i] << " "; //выводим на экран
        }
        cout << "\nModified array: \n";
        for (int i = 0; i < n; i++)
        {
            cout << mas4[i] << " "; //выводим на экран
            if (mas4[i]<0)
                cout << 0 << " ";//вставляем 0 после отриц. числа
        }
    }
    //задание 5
    cout << "\n\nTask 5. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas5 = new int[n];
        cout << "Array: \n";
        for (int i = 0; i < n; i++)
        {
            mas5[i] = rand() % 30 - 15;  //рандомно заполняем массив 
            cout << mas5[i] << " "; //выводим на экран
        }
        cout << "\nModified array: \n";
        for (int i = 0; i < n; i++)
        {
            if (mas5[i] > 0)  //вставляем 0 перед положительным числом
                cout << 0 << " ";
            cout << mas5[i] << " "; //выводим на экран
        }
    }
    cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
