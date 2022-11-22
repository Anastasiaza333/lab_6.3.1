#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

template <typename T, typename T1, typename T2, typename T3>
void create(T* a, const T1 n, const T2  HIGH, const T3 LOW)
{
    for (int i = 0; i < n; i++)
        a[i] = LOW + rand() % (HIGH - LOW + 1);
}
template <typename T, typename T1>
void print(T* a, const T1 n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
template <typename T, typename T1>
T find_sum(T* a, const T1 n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            sum += a[i];
    }
    return sum;
}

int main()
{
    srand(time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int S[n];
    const int HIGH = 37;
    const int LOW = 1;

    cout << "S[10] = { ";
    create(S, n, HIGH, LOW);
    print(S, n);
    cout << "}" << endl;
    cout << "Сума додатних чисел = " << find_sum(S, n) << endl;

    return 0;
}
#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

template <typename T>
void create(T* a, const int n, const T  HIGH, const T LOW)
{
    for (int i = 0; i < n; i++)
        a[i] = LOW + rand() % (HIGH - LOW + 1);
}
void create(int* a, const int n, const int  HIGH, const int LOW)
{
    for (int i = 0; i < n; i++)
        a[i] = LOW + rand() % (HIGH - LOW + 1);
}
template <typename A>
void print(A* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
template <typename B>
B find_sum(B* a, const int n)
{
    B sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            sum += a[i];
    }
    return max;
}
int find_sum(int* a, const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= sum)
            sum = a[i];
    }
    return sum;
}

int main()
{
    srand(time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int S[n];
    const int HIGH = 37;
    const int LOW = 1;

    cout << "S[10] = { ";
    create(S, n, HIGH, LOW);
    print(S, n);
    cout << "}" << endl;
    cout << "Сума додатних чисел = " << find_sum(S, n) << endl;

    cout << "S[10] = { ";
    create<int>(S, n, HIGH, LOW);
    print<int>(S, n);
    cout << "}" << endl;
    cout << "Сума додатних чисел = " << find_sum<int>(S, n) << endl;

    return 0;
}
