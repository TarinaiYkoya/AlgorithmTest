#include "merge.h"
using namespace std;
#define MAX 500
#define SENTINEL 2000000000

int L[MAX / 2 + 2];
int R[MAX / 2 + 2];
int _count;

void merge_outputtext(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
        cout << " ";
    }
    cout << "\n";
    cout << _count << endl;
    cout << "\n";

}


void merge(int input[], int n,int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i=0; i<n1; i++)
    {
        L[i] = input[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = input[mid + i];
    }
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;

    for (int k=left;k<right;k++)
    {
        _count++;
        if (L[i]<=R[j])
        {
            input[k] = L[i++];
        }
        else 
        {
            input[k] = R[j++];
        }
        merge_outputtext(input, n);
    }
}

void merge_sort(int input[], int n, int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        merge_sort(input, n, left, mid);
        merge_sort(input, n, mid, right);
        merge(input, n, left, mid, right);
    }
}

void merge_main() 
{
    int n = 0;
    _count = 0;
    int input[MAX];

    //‘“ü—Í”
    cin >> n;
    //“ü—ÍŽæ“¾
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    merge_sort(input, n, 0, n);
    //merge_outputtext(input, n);
}
