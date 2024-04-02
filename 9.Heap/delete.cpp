//i is the index of the node of heap
//parent(i)= (i-1)/2

void delete(int i){
    if(size==1){
        size--;
        return;
    }
    swap(arr[i],arr[size-1]);
    size--;
    while(i>0){
        if(arr[i]<arr[parent(i)]){
            swap(arr[i],arr[parent(i)]);
        }
        i=(i-1)/2;
    }
}