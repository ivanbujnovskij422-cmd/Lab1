#include <iostream>

using namespace std;

// Расширенный алгоритм Евклида
long long gcdExtended(long long a, long long b, long long& x, long long& y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }

    long long x1, y1;
    long long gcd = gcdExtended(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    long long a, n;
    cin >> a >> n;

    long long x, y;
    long long g = gcdExtended(a, n, x, y);

    if (g != 1)
    {
        cout << 0 << endl; // обратного элемента нет
    }
    else
    {
        long long result = (x % n + n) % n;
        cout << result << endl;
    }

    // информация об авторе
    cout << "Автор: Буйновский Иван Игоревич" << endl;
    cout << "Группа:ФИТУ 090301-ПОВа_о25" << endl;

    return 0;
}
