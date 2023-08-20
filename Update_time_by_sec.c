/*C program to update time by 1 second and returns new time */
#include<stdio.h>
struct update_time up_time(struct update_time);
struct update_time
{
    int hr,mm,ss;
};

main()
{
    struct update_time t1,t2;
    printf("Enter current time :");
    scanf("%d:%d:%d", &t1.hr, &t1.mm, &t1.ss);
    // clrscr();
    printf("Real time : %d : %d : %d\n", t1.hr, t1.mm, t1.ss);
    t2 = up_time(t1);
    printf("Updated time : %d : %d : %d\n", t2.hr, t2.mm, t2.ss);
}
struct update_time up_time(struct update_time t1)
{
    if (t1.ss<60)
    {
        t1.ss+=1;
    }
    if (t1.ss==60)
    {
        t1.ss=0;
        t1.mm+=1;
    }
    if(t1.mm==60)
    {
        t1.mm=0;
        t1.hr+=1;
    }
    if (t1.hr==24)
    {
        t1.hr=0;
    }
    return t1;
}