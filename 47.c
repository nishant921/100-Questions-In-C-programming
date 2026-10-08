// 113. Find the sum of array elements.

// 114. Find the average of array elements.

// 115. Find maximum element.

// 116. Find minimum element.

// 117. Count even elements.

// 118. Count odd elements.

// 119. Count positive elements.

// 120. Count negative elements.

#include<stdio.h>



int sum(int arr[], int len){
    int total = 0; 
    for (int i = 0; i<len;i++){
        total+=arr[i];
    }
    return total;
}

double avg(int arr[], int len){
    double total = 0;
    for (int i =0;i<len;i++){
        total+=arr[i];
    }

    return total/len;
}

int max(int arr[], int len){
    int maximum = arr[0];
    for (int i =0;i<len;i++){
        if (maximum<arr[i]) maximum = arr[i];
    }
    return maximum;
}
int min(int arr[], int len){
    int minimum = arr[0];
    for (int i =0;i<len;i++){
        if (minimum>arr[i]) minimum = arr[i];
    }
    return minimum;
}

int evenCount(int arr[], int len){
    int count = 0;
    for (int i =0;i<len;i++){
        if (arr[i]%2==0) count++;
    }
    return count;
}
int oddCount(int arr[], int len){
    int count = 0;
    for (int i =0;i<len;i++){
        if (arr[i]%2!=0) count++;
    }
    return count;
}
int positiveCount(int arr[], int len){
    int count = 0;
    for (int i =0;i<len;i++){
        if (arr[i]>0) count++;
    }
    return count;
}
int negativeCount(int arr[], int len){
    int count = 0;
    for (int i =0;i<len;i++){
        if (arr[i]<0) count++;
    }
    return count;
}

int main(){

    int price[] = {62,10,20,10,43,21,-10,65,103,1};
    int len = sizeof(price)/sizeof(price[0]);

    printf("%d\n",sum(price,len));
    printf("%lf\n",avg(price,len));
    printf("%d\n",max(price,len));
    printf("%d\n",min(price,len));
    printf("%d\n",evenCount(price,len));
    printf("%d\n",oddCount(price,len));
    printf("%d\n",positiveCount(price,len));
    printf("%d\n",negativeCount(price,len));
    
    
    // without functions
    int summ = 0;
    int max = price[0];
    int min = price[0];
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    
    for (int i = 0; i < len; i++)
    {
        summ+=price[i];
        if (max<price[i]) max=price[i]; 
        if (price[i] < min) min = price[i];
        if (price[i]%2==0) even++; else odd++;
        if(price[i]>0) pos++;  else if (price[i] < 0) neg++;
        
    }
    double average = (double) summ/len ;
    printf("%d\n",summ);
    printf("%lf\n",average);
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",even);
    printf("%d\n",odd);
    printf("%d\n",pos);
    printf("%d\n",neg);
    

    return 0;
}