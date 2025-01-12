#include <iostream>
#include <iomanip>
#include<ctime>

using namespace std;



void count(int S1, int S2, int Z = 0) {


    Z = (S1 + S2) / 2;
    cout << Z;
}
void arr(int fuckniggers, int ebalobamu) {
    const int n = 5;
    int S1 = 0, S2 = 0, i, p[n], g[n];
    cout << "Первый массив:" << endl;
    for (i = 0; i < n; i++) {
        p[i] = rand() % 100 - 50;
        cout << setw(6) << p[i];
        if (p[i] < 0) {
            S1 += p[i];
        }



    }
    cout << endl << "Второй массив:" << endl;
    for (i = 0; i < n; i++) {
        g[i] = rand() % 100 - 50;
        cout << setw(6) << g[i];
        if (g[i] < 0) {
            S2 += g[i];
        }

    }
    cout << endl;
    cout << "S1 =" << S1 << endl << "S2=" << S2 << endl;

    count(S1, S2);
}

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int n = 5;
    int p[n], g[n];
    arr(p[n], g[n]);




}