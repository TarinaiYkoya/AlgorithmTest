#pragma once
#include "bits/stdc++.h"
struct SortData
{
    int key;
};
void quick_main();
void quick_outputtext(SortData input[], int n);
void quick_sort(SortData input[], int n, int p, int r);
int partition(SortData input[], int n, int p, int r);