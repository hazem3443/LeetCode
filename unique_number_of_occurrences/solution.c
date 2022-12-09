bool uniqueOccurrences(int* arr, int arrSize){
    int occ[2000]={0};
    bool res=1;
    for(int i=0;i < arrSize;i++){
        occ[arr[i]+1000]++;
    }
    
    //check that the arr of occ have unique values
    int occ2[1001]={0};
    for(int i=0;i < 2000;i++){
        if(occ[i]>0)
            occ2[occ[i]]++;
    }
    for(int i=0;i < 1001;i++){
        if(occ2[i]>0){
            if(occ2[i]>1)
                (res&=0);
            else
                (res&=1);
        }
    }
    return res;
}