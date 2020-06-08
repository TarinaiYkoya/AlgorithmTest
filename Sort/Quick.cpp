#include "Quick.h"
using namespace std;
#define MAX 500

int quick_count;

void quick_outputtext(SortData input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i].key;
        cout << " ";
    }
    cout << "\n";
    cout << quick_count << endl;
    cout << "\n";
}


int partition(SortData input[], int n, int p, int r)
{
    int i;
    SortData x = input[r];
    SortData tmp;
    i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (input[j].key <= x.key)
        {
            i++;
            tmp = input[i];
            input[i] = input[j];
            input[j] = tmp;
            quick_count++;
        }
    }
    tmp = input[i + 1];
    input[i + 1] = input[r];
    input[r] = tmp;
    quick_outputtext(input,n);
    return i + 1;
}

void quick_sort(SortData input[], int n, int p, int r)
{
    if (p < r)
    {
        int q = partition(input,n,p,r);
        quick_sort(input, n, p, q - 1);
        quick_sort(input, n, q + 1, r);
    }
}

void quick_main()
{
    int n = 0;
    quick_count = 0;
    SortData input[MAX];

    //‘“ü—Í”
    cin >> n;
    //“ü—ÍŽæ“¾
    for (int i = 0; i < n; i++)
    {
        cin >> input[i].key;
    }
    quick_sort(input, n, 0, n-1);
}
