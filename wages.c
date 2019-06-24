#include <stdio.h>
#include <stdlib.h>

void main(){
    int ag, agh, hag, amount;
    float k,coin,agents, agentheads, admin,agentcoin;
    printf("Enter no. of agents: ");
    scanf("%d",&ag);
    printf("Enter no. of agent heads: ");
    scanf("%d",&agh);
    printf("Enter agents from higest enrollment: ");
    scanf("%d",&hag);
    printf("Enter amount to be paid: ");
    scanf("%d",&amount);

    k=(1.75*(agh+1)+(ag+hag)+0.5);
    coin=amount/k;

    printf("Coin is %f\n\n",coin);
    agents=coin*(ag+hag);
    agentheads=coin*1.75*(agh+1);
    admin=0.5*coin;

    printf("Agents get %f\n",agents);
    printf("Agentheads get %f\n",agentheads);
    printf("Admin gets %f\n\n",admin);

    agentcoin=agents/(2*hag+(ag-hag));
    printf("The agents from highest take %f\n",2*agentcoin);
    printf("Normal agents take %f\n",agentcoin);


}