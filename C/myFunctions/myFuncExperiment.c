int main(){
    int len;
    scanf("%d", &len);
    //int score[] = {1,2,3,4,5,6};//이것도 가능!
    long long arr[len], sortedArr[len], tempL[len];
    long long max=-2147483647;
    int i, j;
    int count = 0;
    for(i=0;i<len;i++){
        printf("what number? ");
        scanf("%d", &arr[i]);
    }
    for(j = 0; j < len; j++){
        for(i=0; i<len; i++){
            if (max<arr[i]){
                max = arr[i];
            }
        }
        for(i=0; i<len; i++){
            if (max==arr[i]){
                arr[i] = -2147483647;
                break;
            }
        }
        sortedArr[j] = max;
        max = -2147483647;
    }
    for(i = 0; i < len; i++){
        if(sortedArr[i] == sortedArr[i+1]){
            tempL[count] == sortedArr[i];
            count += 1;
        }
    }
    for(i = 0; i < len; i++){
        for(j=0; j<len; j++){
            if(tempL[j] == sortedArr[i]){
                continue;
            }
            else{
                if(j+1 == len){
                    printf("%d\n", sortedArr[j]);
                }
            }
        }
    }
}