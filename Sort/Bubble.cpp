#include "Bubble.h"
using namespace std;


void bubble_outputtext(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
        cout << " ";
    }
    cout << "\n";
}

void bubble_sort(int input[], int n)
{
    int j = n - 2;
    int ComparisonNum = input[n - 1];
    while (j >= 0)
    {
        //Œã‚ë‚©‚ç”ä‚×‚Ä‚¢‚­Œã‚ë‚Ì—v‘f‚ª¬‚³‚¢ê‡“ü‚ê‘Ö‚¦
        if (input[j] > ComparisonNum)
        {
            int tmp = input[j];
            input[j] = ComparisonNum;
            input[j + 1] = tmp;
            bubble_outputtext(input, n);
        }
        else
        {
            ComparisonNum = input[j];
        }
        j--;
    }
}


void bubble_main() {
    int n = 100;

    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    bubble_outputtext(input, n);
    for (int i = n; i > 0; i--)
    {
        bubble_sort(input, n);
    }
}
