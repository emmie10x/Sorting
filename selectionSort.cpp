#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

//minIndex ko i se initialize karte hain kyunki hum assume karte hain ki current position par hi minimum element hai, aur minIndex index store karta hai value nahi.
//Selection sort me compare value se hota hai, store index hota hai