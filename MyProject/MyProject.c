#include <stdio.h>
#include <string.h>
#include <windows.h>

struct date{
    int startedDay,startedMonth,startedYear;
};

struct Employee{
    char firstName[50], lastName[50], sex[10], tel[10], email[50], position[30], status[30];
    int id,birthYear;
    struct date d;
};
struct Employee employees[1000];
int latestEmployeeIndex=0;

//Function
void loadFile();
void writeFile();
void addEmployee();
void displayAllWorkingEmployee();
void updateInfoEmployee();
void deleteEmployeeByID();
void displayEmployeeByID();
void displayEmployeeWorkingDateByDecending();
void displayEmployeePositionByAsecending();
void displayAllRetiredEmployee();
void displayAllEmployee();
void swap(struct Employee *,struct Employee *);

//Main
int main(){
    int option;

    loadFile();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

    printf("***** Employee management Program V1.01 *****\n\n");

    while(1){
        printf("Choose the following option\n\n");
        printf("1. Add a new employee\n");
        printf("2. Display information for all employees working in the company\n");
        printf("3. Update the information of an employee by his/her id\n");
        printf("4. Delete an employee when there is someone requested to resign (delete by id)\n");
        printf("5. Display information of a specific employee by his/her id\n");
        printf("6. Show all employees sorted by started working date in descending order\n");
        printf("7. Show all employees sorted by position in ascending order\n");
        printf("8. Display all retired employees\n");
        printf("9. Display all employee\n");
        printf("10. Exit\n");
        printf("\n>>>> ");
        scanf(" %d",&option);
        printf("\n");

        if (option==1) addEmployee();
        else if(option==2) displayAllWorkingEmployee();
        else if(option==3) updateInfoEmployee();
        else if(option==4) deleteEmployeeByID();
        else if(option==5) displayEmployeeByID();
        else if(option==6) displayEmployeeWorkingDateByDecending();
        else if(option==7) displayEmployeePositionByAsecending();
        else if(option==8) displayAllRetiredEmployee();
        else if(option==9) displayAllEmployee();
        else if(option==10){
            writeFile();
            printf("Exiting the Employee Management Program...");
            break;
        }
        else{
            printf("Invalid option, please try again.\n\n");
        }
    }
}

void loadFile(){
    int i=latestEmployeeIndex;
    int no[1000];
    FILE *file;
    file = fopen("employee.txt","r");

    while (fscanf(file,"%d %d %s %s %s %d %s %s %s %d %d %d %s",&no[i],&employees[i].id,employees[i].firstName,employees[i].lastName,employees[i].sex,
    &employees[i].birthYear,employees[i].tel,employees[i].email,employees[i].status,
    &employees[i].d.startedDay,&employees[i].d.startedMonth,&employees[i].d.startedYear,employees[i].position) != EOF){
        i++;
        latestEmployeeIndex++;
    }
    fclose(file);
}

void writeFile(){
    FILE *file;
    file = fopen("employee.txt","w");

    for (int i=0;i<latestEmployeeIndex;i++){
        if(employees[i].id!=-1){
            fprintf(file,"%d %d %s %s %s %d %s %s %s %d %d %d %s\n",i+1,employees[i].id,employees[i].firstName,employees[i].lastName,employees[i].sex,
            employees[i].birthYear,employees[i].tel,employees[i].email,employees[i].status,
            employees[i].d.startedDay,employees[i].d.startedMonth,employees[i].d.startedYear,employees[i].position);
        }
    }
    fclose(file);
}

void addEmployee(){
    int i=latestEmployeeIndex;
    int status=0;

    printf("*****Adding new employee*****\n\n");
    printf("Input employee's ID: ");
    scanf("%d",&employees[i].id);

    for(int k=0; k<latestEmployeeIndex; k++)
    {
        if(employees[i].id==employees[k].id)
        {
            printf("\n***This ID is already exist.***\n\n");
            status=1;
            break;
        }
    }
    if(status==0)
    {
        printf("Input employee's last name: "); scanf("%s",&employees[i].lastName) ;
        printf("Input employee's fist name: "); scanf("%s",&employees[i].firstName) ;
        printf("Input employee's sex: "); scanf("%s",&employees[i].sex);
        printf("Input employee's year of birth: "); scanf("%d",&employees[i].birthYear);
        printf("Input employee's phone number: "); scanf("%s",&employees[i].tel);
        printf("Input employee's email: "); scanf("%s",&employees[i].email);
        printf("Input employee's started working day: "); scanf("%d",&employees[i].d.startedDay);
        printf("Input employee's started working month: "); scanf("%d",&employees[i].d.startedMonth);
        printf("Input employee's started working year: "); scanf("%d",&employees[i].d.startedYear);
        printf("Input employee's position: "); scanf("%s",&employees[i].position);
        printf("Input employee's working status: "); scanf("%s",&employees[i].status);
        printf("\n\n");
        latestEmployeeIndex++;
    }
}

void displayAllWorkingEmployee(){
    int status = 0,k=1;

    printf("*****Display all information of working employee*****\n\n");

    for( int i=0;i<latestEmployeeIndex;i++){
        if(strcmp(employees[i].status,"working")==0){
            printf("Employee #%d\n\n",k++);
            printf("ID: %d\n",employees[i].id);
            printf("Last name: %s\n",employees[i].lastName);
            printf("First name: %s\n",employees[i].firstName);
            printf("Sex: %s\n",employees[i].sex);
            printf("Year of birth: %d\n",employees[i].birthYear);
            printf("Phone number: %s\n",employees[i].tel);
            printf("Email: %s\n",employees[i].email);
            printf("Started working day: %d\n",employees[i].d.startedDay);
            printf("Started working month: %d\n",employees[i].d.startedMonth);
            printf("Started working year: %d\n",employees[i].d.startedYear);
            printf("Position: %s\n",employees[i].position);
            printf("Working status: %s\n",employees[i].status);
            printf("\n\n");
            status=1;
        }
    }
    if(status==0)
    {
        printf("Don't have information yet.\n\n");
    }
}

void updateInfoEmployee(){
    int selection,status=0;

    printf("*****Update employee information*****\n\n");
    printf("Enter the ID of Employee: ");
    scanf("%d",&selection);

    for( int i=0;i<latestEmployeeIndex;i++){
        if(selection==employees[i].id){
            printf("\nUPDATE INFORMATION HERE:\n\n");
            printf("First name: ");
            scanf("%s",&employees[i].firstName);
            printf("Last name: ");
            scanf("%s",&employees[i].lastName);
            printf("Year of birth: ");
            scanf("%d",&employees[i].birthYear);
            printf("Sex: ");
            scanf("%s",&employees[i].sex);
            printf("Phone number: ");
            scanf("%s",&employees[i].tel);
            printf("Email: ");
            scanf("%s",&employees[i].email);
            printf("Started working day: ");
            scanf("%d",&employees[i].d.startedDay);
            printf("Started working month: ");
            scanf("%d",&employees[i].d.startedMonth);
            printf("Started working year:");
            scanf("%d",&employees[i].d.startedYear);
            printf("Position: ");
            scanf("%s",&employees[i].position);
            printf("Working status: ");
            scanf("%s",&employees[i].status);
            printf("\n\n");
            status=1;
            break;
        }
     }
     if (status==0){
        printf("\nNo Selection to update!!!\n\n");
     }
}

void deleteEmployeeByID(){
    int selection,status=0;
    char c;

    printf("*****Delete employee*****\n\n");
    printf("Enter the ID of Employee: ");
    scanf("%d",&selection);

     for(int i=0;i<latestEmployeeIndex;i++){
        if (employees[i].id==selection){
            printf("\nDisplaying info of employee with ID: %d\n\n",selection);
            printf("ID: %d\n",employees[i].id);
            printf("Last name: %s\n",employees[i].lastName);
            printf("First name: %s\n",employees[i].firstName);
            printf("Sex: %s\n",employees[i].sex);
            printf("Year of birth: %d\n",employees[i].birthYear);
            printf("Phone number: %s\n",employees[i].tel);
            printf("Email: %s\n",employees[i].email);
            printf("Started working day: %d\n",employees[i].d.startedDay);
            printf("Started working month: %d\n",employees[i].d.startedMonth);
            printf("Started working year: %d\n",employees[i].d.startedYear);
            printf("Position: %s\n",employees[i].position);
            printf("Working status: %s\n",employees[i].status);
            printf("\n\n");
            status=1;

            printf("Do you want to delete this Employee?(y/n): ");
            scanf(" %c",&c);

            if(c=='y'){
                printf("Deleting this employee info.....\n\n");
                employees[i].id=-1;
                strcpy(employees[i].lastName," ");
                strcpy(employees[i].firstName," ");
                strcpy(employees[i].tel," ");
                employees[i].birthYear=-1;
                employees[i].d.startedDay=-1;
                employees[i].d.startedMonth=-1;
                employees[i].d.startedYear=-1;
                strcpy(employees[i].email," ");
                strcpy(employees[i].position," ");
                strcpy(employees[i].status," ");
                strcpy(employees[i].sex," ");
                break;
            }
            else if (c=='n'){
                printf("Not deleting...\n\n");
                break;
            }
            else{
                printf("Wrong option.\n\n");
                break;
            }
        }
    }
    if (status==0){
        printf("\nNo Selection to delete!!!\n\n");
    }
}

void displayEmployeeByID(){
    int id,status=0;

    printf("*****Display employee by ID*****\n\n");
    printf("Enter an id of an employee: ");
    scanf("%d",&id);
    printf("\n");

    for(int i=0;i<latestEmployeeIndex;i++){
        if (id==employees[i].id){
            printf("Displaying info of employee with ID: %d\n\n",id);
            printf("ID: %d\n",employees[i].id);
            printf("Last name: %s\n",employees[i].lastName);
            printf("First name: %s\n",employees[i].firstName);
            printf("Sex: %s\n",employees[i].sex);
            printf("Year of birth: %d\n",employees[i].birthYear);
            printf("Phone number: %s\n",employees[i].tel);
            printf("Email: %s\n",employees[i].email);
            printf("Started working day: %d\n",employees[i].d.startedDay);
            printf("Started working month: %d\n",employees[i].d.startedMonth);
            printf("Started working year: %d\n",employees[i].d.startedYear);
            printf("Position: %s\n",employees[i].position);
            printf("Working status: %s\n",employees[i].status);
            printf("\n\n");
            status=1;
            break;
        }
    }

    if(status==0){
        printf("Could not find employee with id %d, please try again.\n\n",id);
    }
}

void displayEmployeeWorkingDateByDecending(){
    struct Employee e[1000];

    //New array to store sorted by date
    for (int i=0;i<latestEmployeeIndex;i++){
        e[i]=employees[i];
    }

    printf("*****Display employee sorted by working date*****\n\n");
    if(latestEmployeeIndex==0) printf("Don't have information yet.\n\n");
    else{
        for (int i=0;i<latestEmployeeIndex-1;i++){
            for (int j=0;j<latestEmployeeIndex-i-1;j++){
                if (e[j].d.startedYear<e[j+1].d.startedYear){
                    swap(&e[j],&e[j+1]);
                }
                else if (e[j].d.startedYear==e[j+1].d.startedYear){
                    if(e[j].d.startedMonth<e[j+1].d.startedMonth){
                        swap(&e[j],&e[j+1]);
                    }
                    else if (e[j].d.startedMonth==e[j+1].d.startedMonth){
                        if (e[j].d.startedDay<e[j+1].d.startedDay){
                            swap(&e[j],&e[j+1]);
                        }
                    }
                }
            }
        }

        for(int i=0;i<latestEmployeeIndex;i++){
            printf("Employee #%d\n\n",i+1);
            printf("ID: %d\n",e[i].id);
            printf("Last name: %s\n",e[i].lastName);
            printf("First name: %s\n",e[i].firstName);
            printf("Sex: %s\n",e[i].sex);
            printf("Year of birth: %d\n",e[i].birthYear);
            printf("Phone number: %s\n",e[i].tel);
            printf("Email: %s\n",e[i].email);
            printf("Started working day: %d\n",e[i].d.startedDay);
            printf("Started working month: %d\n",e[i].d.startedMonth);
            printf("Started working year: %d\n",e[i].d.startedYear);
            printf("Position: %s\n",e[i].position);
            printf("Working status: %s\n",e[i].status);
            printf("\n\n");
        }
    }
}

void displayEmployeePositionByAsecending(){
    int i,j,k=1;

    printf("*****Display employee position in sorted order*****\n\n");

    if(latestEmployeeIndex==0) printf("Don't have information yet.\n\n");
    for (i=65;i<=90;i++)
    {
        for(j=0;j<latestEmployeeIndex;j++)
        {
            if (employees[j].position[0]==i)
            {
                printf("Employee #%d\n\n",k++);
                printf("ID: %d\n",employees[j].id);
                printf("Last name: %s\n",employees[j].lastName) ;
                printf("First name: %s\n",employees[j].firstName) ;
                printf("Sex: %s\n",employees[j].sex);
                printf("Year of birth: %d\n",employees[j].birthYear);
                printf("Phone number: %s\n",employees[j].tel);
                printf("Email: %s\n",employees[j].email);
                printf("Started working day: %d\n",employees[j].d.startedDay);
                printf("Started working month: %d\n",employees[j].d.startedMonth);
                printf("Started working year: %d\n",employees[j].d.startedYear);
                printf("Position: %s\n",employees[j].position);
                printf("Working status: %s\n",employees[j].status);
                printf("\n\n");
            }
        }
    }
}

void displayAllRetiredEmployee(){
    int status=0,k=1;
    char words[10]="retired";

    printf("*****Display info of all the retired employees*****\n\n");

    for(int i=0;i<latestEmployeeIndex;i++)
    {
        if(strcmp(employees[i].status,words)==0)
        {
            printf("Employee #%d\n\n",k++);
            printf("ID: %d\n",employees[i].id);
            printf("Last name: %s\n",employees[i].lastName) ;
            printf("First name: %s\n",employees[i].firstName) ;
            printf("Sex: %s\n",employees[i].sex);
            printf("Year of birth: %d\n",employees[i].birthYear);
            printf("Phone number: %s\n",employees[i].tel);
            printf("Email: %s\n",employees[i].email);
            printf("Started working day: %d\n",employees[i].d.startedDay);
            printf("Started working month: %d\n",employees[i].d.startedMonth);
            printf("Started working year: %d\n",employees[i].d.startedYear);
            printf("Position: %s\n",employees[i].position);
            printf("Working status: %s\n",employees[i].status);
            printf("\n\n");
            status=1;
        }
    }
    if(status==0){
        printf("There is no retired employee.\n\n");
    }
}

void displayAllEmployee(){
    printf("*****Display all information of employee*****\n\n");

    if(latestEmployeeIndex==0) printf("Don't have information yet.\n\n");
    else{
        for(int i=0;i<latestEmployeeIndex;i++)
        {
            printf("Employee #%d\n\n",i+1);
            printf("ID: %d\n",employees[i].id);
            printf("Last name: %s\n",employees[i].lastName) ;
            printf("First name: %s\n",employees[i].firstName) ;
            printf("Sex: %s\n",employees[i].sex);
            printf("Year of birth: %d\n",employees[i].birthYear);
            printf("Phone number: %s\n",employees[i].tel);
            printf("Email: %s\n",employees[i].email);
            printf("Started working day: %d\n",employees[i].d.startedDay);
            printf("Started working month: %d\n",employees[i].d.startedMonth);
            printf("Started working year: %d\n",employees[i].d.startedYear);
            printf("Position: %s\n",employees[i].position);
            printf("Working status: %s\n",employees[i].status);
            printf("\n\n");
        }
    }
}

void swap(struct Employee *e1, struct Employee *e2){
    struct Employee tmp;

    tmp = *e1;
    *e1 = *e2;
    *e2 = tmp;
}
