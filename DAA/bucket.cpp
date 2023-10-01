#include <iostream>

using namespace std;
 
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        if (i < n-1){
            cout << ", " << flush;
        }
    }
    cout << "]" << endl;
}
 
int Max(int A[], int n){
    int max = -32768;
    for (int i=0; i<n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}
 
// Linked List node
class Node{
public:
    int value;
    Node* next;
};
 
void Insert(Node** ptrBins, int idx){
    Node* temp = new Node;
    temp->value = idx;
    temp->next = NULL;
 
    if (ptrBins[idx] == NULL){ // ptrBins[idx] is head ptr
        ptrBins[idx] = temp;
    } else {
        Node* p = ptrBins[idx];
        while (p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
}
 
double Delete(Node** ptrBins, int idx){
    Node* p = ptrBins[idx];  // ptrBins[idx] is head ptr
    ptrBins[idx] = ptrBins[idx]->next;
    double x = p->value;
    delete p;
    return x;
}
 
void BinSort(float A[], float n){
    float max = Max(A, n);
 
    // Create bins array
    Node** bins = new Node* [max + 1];
 
    // Initialize bins array with NULL
    for (int i=0; i<max+1; i++){
        bins[i] = NULL;
    }
 
    // Update count array values based on A values
    for (int i=0; i<n; i++){
        Insert(bins, A[i]);
    }
 
    // Update A with sorted elements
    int i = 0.0;
    int j = 0.0;
    while (i < max+1)
	{
        while (bins[i] != NULL){
            A[j++] = Delete(bins, i);
        }
        i++;
    }
    // Delete heap memory
    delete [] bins;
}
 
int main() {
 
    float A[] = {0.2, 0.5, 0.8, 0.12, 0.3, 0.6, 0.7, 0.10};
    float n = sizeof(A)/sizeof(A[0]);
 
    Print(A, n, "\t\tA");
    BinSort(A, n);
    Print(A, n, " Sorted A");
    cout << endl;
    return 0;
}
