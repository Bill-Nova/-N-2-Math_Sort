#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//N^2

int main(){
	int NULL_Add_NULL;
	int Sort_Add[21];
	int Counter=0;
	int Sort_MAX=20;
//-------------------------------------------------------------
	srand((unsigned)time(NULL));
	printf("Input=\n");
Loop_Input_Rand:
		Sort_Add[Counter]=rand()%10;
		printf("%d",Sort_Add[Counter]);
	if(Counter<Sort_MAX){
		Counter++;
		goto Loop_Input_Rand;
	}
	printf("\nSort=\n");
//------------------------------------------------------------
	Counter=Sort_MAX;
Loop_To_Sort_Add:
	Sort_Add[Counter]=Sort_Add[Counter]-Sort_Add[Counter-1];
	Counter--;
	if(Counter!=0){
		goto Loop_To_Sort_Add;
	}
	Counter=Sort_MAX;
//------------------------------------------------------------
Min_Sort_Loop:	
	if(Sort_Add[Counter]<0){
	Goto_Sort:	
		Sort_Add[Counter+1]=Sort_Add[Counter+1]+Sort_Add[Counter];
		Sort_Add[Counter-1]=Sort_Add[Counter-1]+Sort_Add[Counter];
		Sort_Add[Counter]=0-Sort_Add[Counter];
		if(Counter!=Sort_MAX){
			Counter++;
			if(Sort_Add[Counter]<0){
				goto Goto_Sort;
			}
			Counter--;
		}
	Sub_Sort_Loop:
		Counter--;
		if(Counter<0){ 
			Counter=0;
			goto End_Loop;
		}
		if(Sort_Add[Counter]<0){
			if(Counter>0){	
				if(Sort_Add[Counter-1]<0){
					Sort_Add[Counter-2]=Sort_Add[Counter-2]+Sort_Add[Counter-1];
					Sort_Add[Counter-2]=Sort_Add[Counter-2]+Sort_Add[Counter];
					Sort_Add[Counter+1]=Sort_Add[Counter+1]+Sort_Add[Counter-1];
					Sort_Add[Counter+1]=Sort_Add[Counter+1]+Sort_Add[Counter];
					NULL_Add_NULL=0-Sort_Add[Counter-1];
					Sort_Add[Counter-1]=0-Sort_Add[Counter];
					Sort_Add[Counter]=NULL_Add_NULL;
					if(Sort_Add[Counter+1]<0){
						Counter++;
					}else{
						goto Sub_Sort_Loop;
					}
					
				}
			}
			goto Goto_Sort;
		}
		goto Sub_Sort_Loop;
	}
	if(Counter!=0){
		Counter--;
		goto Min_Sort_Loop;
	}
//---------------------------------------------------------------
End_Loop:
	Counter++;
	Sort_Add[Counter]=Sort_Add[Counter]+Sort_Add[Counter-1];
	if(Counter!=Sort_MAX){
		goto End_Loop;
	}
//----------------------------------------------------------------
	
	printf("%d",Sort_Add[0]);
	Counter=0;
Printf_Loop:
	Counter++;
	printf("%d",Sort_Add[Counter]);
	if(Counter!=Sort_MAX){
		goto Printf_Loop;
	}
}
