void insert (int x){
    if(size == cap) return;
    size ++;
    arr[size-1]=x;
    int i=size-1;
    while(i>0){
        if(arr[i]<arr[parent(i)]){
            swap(arr[i],arr[parent(i)]);
        }
        i=(i-1)/2;
    }

    

}