    #include<stdio.h>
    #include<stdlib.h>

    struct singlenode{
        struct singlenode* singlenext;
        int singledata;
    };

    struct doublenode{
        struct doublenode* doubleprev;
        int doubledata;
        struct doublenode* doublenext;
    };

    struct singlenode* singlehead = NULL;
    struct singlenode* singletail = NULL;
    struct doublenode* doublehead = NULL;
    struct doublenode* doubletail = NULL;

                        //CASE-1:DISPLAY THE SINGLY-LINKED LIST
                                void DisplaySingleList(){
                                    if (singlehead==NULL){
                                        printf("Your Linked List is Empty.\n\n");
                                                         }else{
                                                            struct singlenode* singletemp=singlehead;
                                                            printf("Your Linked List is: ");
                                                            while(singletemp!=NULL){
                                                                printf("[%d]-->",singletemp->singledata);
                                                                singletemp=singletemp->singlenext;
                                                                                   }
                                                            printf("\n\n");
                                                              }
                                                        }

                        //CASE-2:ADD A NODE TO THE BEGINNING OF THE SINGLY-LINKED LIST
                                void InsertAtBeginningOfSinglyList(int x){
                                struct singlenode* newnode = (struct singlenode*)malloc(sizeof(struct singlenode));
                                newnode->singlenext = NULL;
                                newnode->singledata = x;
                                struct singlenode* singletemp=singlehead;

                                if(singlehead == NULL){
                                    printf("Your Linked List is Empty.\n\n");
                                    printf("Assigning newnode to Head and Tail...\n\n");
                                    singlehead = newnode;
                                    singletail = newnode;
                                    struct singlenode* singletemp = singlehead;

                                    printf("Your Linked List is: ");
                                    while(singletemp != NULL){
                                        printf("[%d]-->", singletemp->singledata);
                                        singletemp = singletemp->singlenext;
                                                             }
                                                             printf("\n\n");
                                                      }
                                                else{
                                                    newnode->singlenext = singlehead;
                                                    singlehead = newnode;
                                                    singletail = newnode;
                                                    printf("Your Linked List is: ");
                                                    while(singletemp != NULL){
                                                        printf("[%d]-->", singletemp->singledata);
                                                        singletemp = singletemp->singlenext;
                                                                             }
                                                                             printf("\n\n");
                                                    }
                                                    }

                        //CASE-3:INSERT DATA AFTER A SELECTED NODE IN A SINGLY-LINKED LIST
                            void InsertDataAfterNodeSingly(int data){
                            struct singlenode* newnode=}

            //CASE-4:INSERT A NODE AT THE END OF YOUR SINGLY-LINKED LIST
           // void InsertattheEndofSingly()

    int main(){
        int choice;
        while(1){
        printf("\t\t  =================================================================  \n");
        printf("\t\t||          {{WELCOME TO METRO'S LAIR OF LINKED LISTS}}            ||\n");
        printf("\t\t||                         ::MAIN MENU::                           ||\n");
        printf("\t\t||                                                                 ||\n");
        printf("\t\t||1)Display Singly-Linked List                                     ||\n");
        printf("\t\t||2)Add at the beginning of Singly-Linked List                     ||\n");
        printf("\t\t||3)Add after given data to Singly-Linked List                     ||\n");
        printf("\t\t||4)Add at the end of the Singly-Linked List                       ||\n");
        printf("\t\t||5)Delete the element at the beginning of the Singly-Linked List  ||\n");
        printf("\t\t||6)Delete the element after given data in the Singly-Linked List  ||\n");
        printf("\t\t||7)Delete the element at the end of the Singly-Linked List        ||\n");
        printf("\t\t||                                                                 ||\n");
        printf("\t\t||8)Display Doubly-Linked List                                     ||\n");
        printf("\t\t||9)Add at the beginning of Doubly-Linked List                     ||\n");
        printf("\t\t||12)Add after given data to Doubly-Linked List                    ||\n");
        printf("\t\t||11)Add at the end of the Doubly-Linked List                      ||\n");
        printf("\t\t||12)Delete the element at the beginning of the Doubly-Linked List ||\n");
        printf("\t\t||13)Delete the element after given data in the Doubly-Linked List ||\n");
        printf("\t\t||14)Delete the element at the end of the Doubly-Linked List       ||\n");
        printf("\t\t||                                                                 ||\n");
        printf("\t\t||15)EXIT                                                          ||\n");
        printf("\t\t  =================================================================\n");

        printf("Input Choice(1-13):");
        scanf("%d",&choice);

        int x;
        int userinputdata;
        switch(choice){

        case 1:
            DisplaySingleList();
            break;
        case 2:
            printf("Enter data to be inserted into the FIRST node of the Linked List:");
            scanf("%d",&x);
            printf("Inserting Data.........\n\n");
            InsertAtBeginningOfSinglyList(x);
            break;
        case 3:
            printf("Your Linked List is:");
                    while(singletail!=NULL){
                        printf("[%d]-->",singletail->singledata);
                        singletail=singletail->singlenext;
                                           }
            printf("\nEnter Data to be inserted in newnode:");
            scanf("%d",&x);
            printf("\nEnter data after which you wish to insert the Node:");
            scanf("%d",&userinputdata);
            InsertAfterGivenDatainSingly(userinputdata,x);
            break;
        case 15:
            printf("EXITING the Program........\n\n");
            exit(0);
        default:
            printf("Invalid Choice!Please Try Again.");
            break;
                      }
    }}
