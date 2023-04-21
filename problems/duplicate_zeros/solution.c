

void duplicateZeros(int* arr, int arrSize){
    int i,j;
    for(i=0;i<arrSize-1;i++){
        if( (arr[i]==0) ){
             for(j = arrSize-1 ;j>i;j--){
                arr[j]=arr[j-1];
            }
            ++i;
        }
    }
}