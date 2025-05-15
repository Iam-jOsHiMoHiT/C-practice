#include <stdio.h>
int main(){
    float cp , sp , pp , lp;
    printf("Enter the Cost Price : ");
    scanf("%f",&cp);
    printf("Enter the Selling Price : ");
    scanf("%f",&sp);
    if(sp>cp){
        printf("You have made PROFIT !\n");
        pp=(sp-cp)/cp*100;
        printf("Profit Percent is %f .", pp);
    }
    else{
        printf("You have incurred LOSS !\n");
        lp=(cp-sp)/cp*100;
        printf("Loss Percent is %f .", lp);
    }






    return 0;
}