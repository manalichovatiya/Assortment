#include <stdio.h>    
int main(){  
 	int n;
 	printf("Inter the size of Array:"); 
 	scanf("%d",&n);
    int a[n]; 
    int i;   
    printf("\nolny negative elements are allowed in array!!!\n\n");
    for(i=0; i<n; i++){  
	    printf("Element[%d]: ",i);
        scanf("%d", &a[i]);  
    }    
   printf("\nElements in array are: "); 
    for(i=0; i<n; i++){ 
		if(a[i]<0){
		 
		 printf("%d  ", a[i]);  
		}
	}
     
    printf("\n");	
}
