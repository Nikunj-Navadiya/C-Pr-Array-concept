#include<stdio.h>

// Add Indexes & Element to Array....

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
		for(i=no; i>=pos; i--){
			a[i+1] = a[i];
		}
		a[pos] = value;
		no++;
		
		printf("\nInsert Array Element\n\n");
		
		for(i=0; i<no; i++){
			printf("a[%d] = %d \n",i,a[i]);
		}
	}else {
		printf("Not Valid Array");
	}
	
}
