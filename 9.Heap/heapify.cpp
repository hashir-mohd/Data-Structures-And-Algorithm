void heapify(int i){
    int lt= left(i);
    int rt = right(i);
    int smallest =i;
    if(lt <size && arr[lt]<arr[i]){smallest =lt;}
    if(rt <size && arr[rt]<arr[smallest]){smallest =rt;}
    if(i!= smallest){
        swap (arr[i],arr[smallest])
        heapify(smallest);
    }
}