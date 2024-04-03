#include<stdio.h>
#include<pthread.h>
int counter=0;
void *multithread()
{
    unsigned int i=0;
    counter+=1;
    printf("\n job has started",counter);
for(i=0;i<100000000;i++)
printf("\n job has finished",counter);

int main()
{
    pthread_t t1,t2;
    pthread_create(&t1,NULL,& multithread,NULL);
    pthread_create(&t2,NULL,&multithread,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);


}
}