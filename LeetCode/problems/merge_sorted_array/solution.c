void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    char i=0,j=0;
    int k=0;
    int* newarr = (int *)malloc(sizeof(int) * nums1Size);
    while(i<m && j< n){
        if(nums1[i]<nums2[j])
            newarr[k++]=nums1[i++];
        else
            newarr[k++]=nums2[j++];
    }
    
    while(i<m)newarr[k++]=nums1[i++];
    while(j<n)newarr[k++]=nums2[j++];
    
    memcpy(nums1, newarr, sizeof(int)*nums1Size);
    
    free(newarr);
}