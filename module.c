//This program should calculate a mileage reimbursement.
// It will prompt the user to enter a distance in miles, and will tell the user how much their reimbursement should be.
#include <stdio.h>
//from std import *
//using namespace std;
#include "reimbursement/reimbursement.h"


int main() {
//Step 1: declaring a miles variable
	int miles;
//Step 2: initialize a reimbursement rate variable
	float reimbursement_rate = 62.5;
//Step 3: Read input from user into miles, with prompt
	printf("Please enter number of miles traveled: ");
	scanf("%d", &miles);
//Step 4: Multiply miles and rate and print result	
	printf("You should get reimbursed $%2f.\n", miles*reimbursement_rate/100);

  Reimbursement_t reimb;
  reimb.amount = 0.0f;
  reimb.id = 0;

  setAmount(&reimb, miles*reimbursement_rate/100);
  printReimbursement(&reimb);
  
	return 0;
}







