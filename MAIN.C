#include <stdio.h>
int main() {
  int pin = 1234, e_pin = 0, count = 0, operation, amount = 1, count_2 = 0,
      more = 0, balance = 9999999;
  printf("\t\t\t========WELCOME=========\n");
  while (pin != e_pin) {
    printf("enter pin : ");
    scanf("%d", &e_pin);
    if (e_pin != pin) {
      printf("\tINVAILID PIN !!!\n");
      count++;
    }
    if (count == 3) {
      exit(0);
    }
  }
  while (more == 0) {
    printf("enter operation\n");
    printf("enter 1 for widhdrawl\n");
    printf("enter 2 for Balance Enquiry\n");
    scanf("%d", &operation);

    switch (operation) {

    case 1:
      while (amount % 100 != 0) {
        printf("enter amount to widhdrawl\n");
        scanf("%d", &amount);
        if (amount % 100 != 0) {
          printf("enter amount in multiple of 100\n");
          count_2++;
        }
        if (count_2 == 2) {
          exit(0);
        }
      }
      if (balance < amount) {
        printf("insuficient balance");
      } else {
        printf("ok...transaction is being proceed\n");
        balance -= amount;
        printf("remaining balance=%d\n", balance);
      }
      amount = 1;
      break;

    case 2:
      printf("your acount balance=%d\n", balance);
    }
    printf("Do you want to do more transactions\n");
    printf("0 for [Yes]\n");
    printf("1 for [No]\n");
    scanf("%d", &more);
  }
  printf("\t\t======THANKYOU========");
  return 0;
}