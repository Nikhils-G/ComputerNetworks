#include<stdlib.h>
void main()
{
int packets[8],i,j,clk,b_size,o_rate,i_rate,p_sz_rm=0,p_sz,p_time;
for(i=0;i<5;++i)
{
packets[i]=rand()%10; if(packets[i]==0)
--i;
}
printf("Enter output rate:"); scanf("%d",&o_rate); printf("\nEnter bucket size:");
scanf("%d",&b_size); for(i=0;i<5;++i)
{ if((packets[i]+p_sz_rm) > b_size)
{
if(packets[i]>b_size)
printf("\nIncoming packet size:%d greaterthan bucket capacity\n",packets[i]);
else printf("Bucket size exceeded\n");
}
else
{
p_sz=packets[i]; p_sz_rm+=p_sz;
printf("\n \n");
printf("Incoming packet:%d",p_sz); printf("\nTransmission left:%d\n",p_sz_rm);
p_time=rand()%10;
printf("Next packet will come at %d",p_time); for(clk=0;clk<p_time&&p_sz_rm>0;++clk)
{
printf("\nTime left %d---No packets to transmit!!\n",p_time-clk);
sleep(1); if(p_sz_rm)
{ printf("Transmitted\n"); if(p_sz_rm<o_rate)
p_sz_rm=0;
else p_sz_rm-=o_rate;
printf("Bytes remaining:%d\n",p_sz_rm);
}
else printf("No packets to transmit\n");
}
}
}
getch();
}
