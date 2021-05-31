#include <stdio.h>

void taskInformation (int taskNumber);
void grading(int marks);

int main()
{
    int i,j;
    for(i=0;i<=50;i++){
        printf("=");
    }
    printf("\n\tMIT - Computer Training Center\n");
    for(i=0;i<=50;i++){
        printf("=");
    }
    
    for(j=1;j<=5;j++){
        printf("\n\t\t%d. Task\n",j);
    }
    int input,marks;
    
    printf("\n\nEnter the Task no : ");
    scanf("%d",&input);
    printf("Enter the Marks : ");
    scanf("%d",&marks);
    
    taskInformation (input);
    grading(marks);
    
   
    return 0;
}

void taskInformation (int taskNumber){
	 if (taskNumber<=5 && taskNumber>=0){
        switch(taskNumber){
        	case 1 :
            printf("\n\nTask no : %d\n",taskNumber);
            printf("Discription - \n");
            
            break;
        case 2 :
            printf("\n\nTask no : %d\n",taskNumber);
            printf("Discription - \n");
          
            break;
        case 3 :
             printf("\n\nTask no : %d\n",taskNumber);
             printf("Discription - \n");
             
             break;
        case 4 :
             printf("\n\nTask no : %d\n",taskNumber);
             printf("Discription - \n");
            
             break;
        default :
            printf("\n\nTask no : %d\n",taskNumber); 
            printf("Discription - \n");
            
        }
        
    }
    else printf("\n\n******Invalide*******");
    
}
void grading(int marks){
	
        if (marks<=100 && marks>=75){
        	printf("Marks : %d\n",marks);
        	printf("Grade is : A");
		}
		else if (marks>=65){
			printf("Marks : %d\n",marks);
        	printf("Grade is : B");
		}
		else if ( marks>=55){
			printf("Marks : %d\n",marks);
        	printf("Grade is : C");
		}
		else if ( marks>=35){
			printf("Marks : %d\n",marks);
        	printf("Grade is : S");
		}
        else if ( marks>=0){
        	printf("Marks : %d\n",marks);
        	printf("Grade is : W");
		}
		else printf("Out of Range ");
}


