#include <stdio.h>

int ComputeDigitSum(char num[50])
{
    int digit,sum=0;
    for(int i=0;num[i] != '\0';i++){
        digit = num[i] - 48;
        sum = sum+digit;
    }
    return sum;
}
   
int main()
{
    int userInputSum, matriculationNumberSum, difference;
    char matriculationNumber[50] = "00808581", userInput[50];
    matriculationNumberSum = ComputeDigitSum(matriculationNumber);
    printf("Enter number:");
    scanf("%s",userInput);
    userInputSum = ComputeDigitSum(userInput);
    difference = userInputSum - matriculationNumberSum;
    if(difference < 0){
        difference = difference * -1;
    }
    printf("Difference is %d",difference);
    return 0;

}
