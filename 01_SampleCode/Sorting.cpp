#include <algorithm>
#include <bits/stdc++.h>
using namespace :: std;

int ARR[1000];

void BubbleSort(int Arr[], int l, int r) {
    for(int i = l; i <= r; i++) {
        for(int j = l; j <= r - (i - l); j++) {
            int temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }
}

void SelectionSort(int Arr[], int l, int r) {
    for (int j = l; j <= r; j++) {
        int max_index = l;
        for(int i = l; i <= r - j + l; i++) 
        {
            if(Arr[max_index] <= Arr[i]) max_index = i;
        }
        int temp = Arr[max_index];
        Arr[max_index] = Arr[r - j + l];
        Arr[r] = temp;
    }
}

void QuickSort(int Arr, int l, int r) {

}

void MergeSort(int Arr[], int l, int r) {
    if(l < r) {
        int mid = (l+r)/2;
        MergeSort(Arr, l, mid);
        MergeSort(Arr, mid+1, r);
        int i = l, j = mid+1, k = 0;
        int TempArr[r-l+1];
        while(i <= mid && j <= r) {
            if(Arr[i] <= Arr[j]) TempArr[k++] = Arr[i++];
            else TempArr[k++] = Arr[j++];
        }

        while(i <= mid) Arr[k++] = Arr[i++];
        while(j <= r) Arr[k++] = Arr[j++];
        for(int x = 0; x < r - l + 1; x++) Arr[x - l] = TempArr[x];
    }
}

void BucketSort(int Arr[], int l_range, int r_range) {
    // We use this sorting algorithm where the range is from a, b;
    // This is basically an array of the given range size that notes the number of occurences in given 
    // array as values. Now simply read through these occurences and give the sorted version of the array !!
}

void CountSort(int Arr[], int l_range, int r_range) {
}

void RadixSort(int Arr[], int l_range, int r_range) {
    
}

int main(void) {
    // Using STL sorting!!
    //First create a lambda function
    vector<int> V = {1, 2, 3, -3 , 100, 50};
    sort(V.begin(), V.end());
    for(int x: V) cout << x << ' ';
    cout << '\n';
    sort(V.begin(), V.end(), [](int &a, int &b){return a > b;});
    for(int y: V) cout << y << ' ';
    cout << '\n';
    return 0;
}


