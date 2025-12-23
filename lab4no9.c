#include <stdio.h>
int main() {
	int score,i;
	int countA=0,countB=0,countC=0,countD=0,countF=0;
	
	while(1){
		scanf("%d",&score);
		if(score== -1){
			break;
		}

	if (score<=100&&score>=0) {
		if(score>=85){
			printf("%d(A)\n",score);
			countA++;
		}
		else if(score>=75){
			printf("%d(B)\n",score);
			countB++;
		}
		else if(score >= 68){
			printf("%d(C)\n",score);
			countC++;
		}
		else if(score>=55){
			printf("%d(D)\n",score);
			countD++;
		}
		else{
			printf("%d(F)\n",score);
			countF++;
		}
	
		}
	
	else{
		
			printf("error score\n");
		}
	}
	printf("A(%d)\n",countA);
    printf("B(%d)\n",countB);
    printf("C(%d)\n",countC);
    printf("D(%d)\n",countD);
    printf("F(%d)\n",countF); 
	return 0;
}
	
