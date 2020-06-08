#include "Insert.h"
using namespace std;


void outputtext(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
        cout << " ";
    }
    cout << "\n";
}

void sort(int input[], int n)
{
    int tmp, j;
    for (int i = 1; i < n; i++)
    {
        tmp = input[i];
        j = i - 1;
        while (j >= 0 && input[j] > tmp)
        {
            input[j + 1] = input[j];
            j--;
        }
        input[j + 1] = tmp;
        outputtext(input, n);
    }

}


void insert_main() {
    int n = 1;

    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    outputtext(input, n);
    sort(input, n);
}
