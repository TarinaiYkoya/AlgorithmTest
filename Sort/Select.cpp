#include "Select.h"
using namespace std;


void select_outputtext(int input[], int n, int swapcount)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
        cout << " ";
    }
    cout << "\n";
    cout << swapcount << endl;
    cout << "\n";
}

void select_sort(int input[], int n)
{
    int mincount;
    int swapcount = 0;
    for (int i=0; i<n-1; i++)
    {
        mincount = i;
        for (int j=i; j<n; j++)
        {
            if (input[j] < input[mincount])
            {
                mincount = j;
            }
        }
        if (i != mincount)
        {
            int tmp = input[i];
            input[i] = input[mincount];
            input[mincount] = tmp;
            swapcount++;
            select_outputtext(input, n, swapcount);
        }
    }
}


void select_main() {
    int n = 1;

    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    select_outputtext(input, n, 0);
    select_sort(input, n);
}
