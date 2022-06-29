

#include <stdio.h>




void sort012(int a[], int n)
{
    int countzero=0,countone=0,counttwo=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            countzero++;
        }else if(a[i]==1)
        {
            countone++;
        }else if(a[i]==2)
        {
            counttwo++;
        }
    }
    
    for(int i=0;i<countzero;i++)
    a[i]=0;
    for(int i=countzero;i<countone+countzero;i++)
    a[i]=1;
    for(int i=countone+countzero;i<n;i++)
    a[i]=2;
    
    
}


int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}