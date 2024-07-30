int setBit(int n) {
        int i =0;
        while((n& (1<<i))!=0){
            i++;
        }
        return n||1<<i;
    }