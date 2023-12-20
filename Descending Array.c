#include <stdio.h>

 // C program to accept N numbers and arrange them in an Descending order
 
void main(){
    int i, a[50], j, num, no;
        
    printf("Enter the value :-  ");
    scanf("%d", &no);

    for (i=0; i<no; i++){
        printf("a[%d] :- ",i );
        scanf("%d", &a[i]);
	}
    for (i=0; i<no; i++){
        for (j=i+1; j<no; j++){
            if (a[i] < a[j]){
                num = a[i];
                a[i] = a[j];
                a[j] = num;
            }
        }
    }
    printf("\nDescending  Order to Array\n");
    for (i=0; i<no; i++){
        printf("a[%d] = %d\n", i, a[i]);
	} 
}
