#include<stdio.h>

// Update Element to Array....

void main (){
	int a[10] ,i,sum=0,no,pos,value;
	
	printf("Enter Array Number :- ");
	scanf("%d", &no);
	
	for(i=0; i<no; i++){
		printf("a[%d] :- ",i);
		scanf("%d", &a[i]);
	}
	printf("\nEnter Indexes of the Array :- ");
	scanf("%d", &pos);
	printf("Enter Element of the Array :- ");
	scanf("%d", &value);
	
	if(pos>0 && pos<no){
		for(i=no; i>pos; i--){
			
		}
		a[pos] = value;
		
		printf("\nInsert Array Element\n\n");
		
		for(i=0; i<no; i++){
			printf("a[%d] = %d \n",i,a[i]);
		}
	}else {
		printf("Not Valid Array");
	}
	
}
