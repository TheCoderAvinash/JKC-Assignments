//Blood donation eligibility check
#include<stdio.h>
int main(){
    int age, weight;
    printf("Enter your age and weight: ");
    scanf("%d%d", &age, &weight);
    if(age>18 && age<=55 && weight>45)
    printf("You're eligible for donating blood.");
    return 0;
}


//Voter eligibility check
#include<stdio.h>
int main(){
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    if(age>=18)
    printf("Eligible");
    else
    printf("Non-Eligible");
}


//Photo-copy Bill
#include<stdio.h>
int main(){
    int cost=0, pages,copies;
    printf("Enter the number of pages and the printout copies:");
    scanf("%d%d", &pages, &copies);
    if(pages>=1 && copies>=1){
        cost= 3*pages + 5*pages + 3*pages*(copies-1);
    }
    printf("The total cost would be %dRs.", cost);
    return 0;
}


//Calculating the bill of jobs
#include<stdio.h>
int main(){
    int copy;
    printf("Enter the number of desired passport photo harcopies: ");
    scanf("%d", &copy);
    if(copy>0 &&copy<11)
    printf("The total cost would be %dRs.", copy*5);
    else if(copy>10)
    printf("The total cost would be %dRs.", (copy-10)*3+50);
    return 0;
}
