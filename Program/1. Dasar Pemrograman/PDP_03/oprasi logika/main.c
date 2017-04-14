#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

int main()
{
    boolean p1 = true; boolean q1 = true;
    boolean p2 = true; boolean q2 = false;
    boolean p3 = false; boolean q3 = true;
    boolean p4 = false; boolean q4 = false;

    printf("\n");
    printf("p\  q\  p^q\  -(p^q)\  -p\t-q\  v(-q)\  pNANDq\  pNORq\  pXORq\  pXNORq\n\n");
    printf("%d\  %d\    %d\     %d\    %d\    %d\      %d\      %d\      %d\      %d\      %d",p1,q1,p1&&q1,!(p1&&q1),!p1,!q1,(!q1),!(p1||q1),!(p1&&q1),p1^q1,!(p1^q1));printf("\n");
    printf("%d\  %d\    %d\     %d\    %d\    %d\      %d\      %d\      %d\      %d\      %d",p2,q2,p2&&q2,!(p2&&q2),!p2,!q2,(!q2),!(p2||q2),!(p2&&q2),p2^q2,!(p2^q2));printf("\n");
    printf("%d\  %d\    %d\     %d\    %d\    %d\      %d\      %d\      %d\      %d\      %d",p3,q3,p3&&q3,!(p3&&q3),!p3,!q3,(!q3),!(p3||q3),!(p3&&q3),p3^q3,!(p3^q3));printf("\n");
    printf("%d\  %d\    %d\     %d\    %d\    %d\      %d\      %d\      %d\      %d\      %d",p4,q4,p4&&q4,!(p4&&q4),!p4,!q4,(!q4),!(p4||q4),!(p4&&q4),p4^q4,!(p4^q4));printf("\n\n");

    printf("p1 ^ q1 = %d\n",p1&&q1);
    printf("p2 ^ q2 = %d\n",p2&&q2);
    printf("p3 ^ q3 = %d\n",p3&&q3);
    printf("p4 ^ q4 = %d\n",p4&&q4);
    return 0;
}
