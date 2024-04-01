#include <iostream>
using namespace std;


class minHeap{
    int *arr;
    int size;
    int cap;
    minHeap(int c){
        cap= c;
        size =0;
        arr = new int [c];
    }
    int left(int i){ return (2*i +1);}
    int right(int i){ return (2*i +2);}
    int parent(int i){ return (i-1)/2;}
};

int main(){

    return 0;
}