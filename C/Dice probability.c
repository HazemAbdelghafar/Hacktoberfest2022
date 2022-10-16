#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(0));
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,num;
    float acco,acctw,accth,accfo,accfi,accs,probo,probtw,probth,probfo,probfi,probs,avgacc;
    for(int i = 0; i<600;i++)
    {
        num = rand() % 6;
        switch(num)
        {
        case 0:
            six++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        }
    }
    printf("One:%d\tTwo:%d\tThree:%d\tFour:%d\tFive:%d\tSix:%d\n\n\n",one,two,three,four,five,six);
    probo = one / 600.0;
    probtw = two / 600.0;
    probth = three/600.0;
    probfo = four / 600.0;
    probfi = five / 600.0;
    probs =  six / 600.0;
    printf("The probability of One is:\t%.2f\n",probo);
    printf("The probability of Two is:\t%.2f\n",probtw);
    printf("The probability of Three is:\t%.2f\n",probth);
    printf("The probability of Four is:\t%.2f\n",probfo);
    printf("The probability of Five is:\t%.2f\n",probfi);
    printf("The probability of Six is:\t%.2f\n",probs);
    printf("--------------------------------------------\n");
    acco = 100 - (sqrt(pow((probo-0.166667),2))/0.166667);
    acctw = 100 - (sqrt(pow((probtw-0.166667),2))/0.166667);
    accth = 100 - (sqrt(pow((probth-0.166667),2))/0.166667);
    accfo = 100 - (sqrt(pow((probfo-0.166667),2))/0.166667);
    accfi = 100 - (sqrt(pow((probfi-0.166667),2))/0.166667);
    accs = 100 - (sqrt(pow((probs-0.166667),2))/0.166667);
    printf("The accuracy of One is:\t\t%.2f%%\n",acco);
    printf("The accuracy of Two is:\t\t%.2f%%\n",acctw);
    printf("The accuracy of Three is:\t%.2f%%\n",accth);
    printf("The accuracy of Four is:\t%.2f%%\n",accfo);
    printf("The accuracy of Five is:\t%.2f%%\n",accfi);
    printf("The accuracy of Six is:\t\t%.2f%%\n",accs);
    avgacc = (acco + accfi + accfo + accs + accth + acctw) / 6;
    printf("The accuracy of this model is:\t%.2f%%\n",avgacc);
    return 0;
}
