int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    *returnSize = 2;
    int* element = (int*)malloc(2*sizeof(int));

    int i,j,flag=0;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                // printf("%d,%d",i,j);
                flag=1;
                break;
            }
        }
        if(flag==1){break;}
    }
    
    printf("%d,%d",i,j);
    element[0]=i;
    element[1]=j;
    // dsfsdf
    return element;
}