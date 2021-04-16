/*
Get x and y coordinates of two points(x1,y1,x2,y2) and find distance between two points

Sample Input 1:

3 4 4 5

Sample Output 1:

1.414
*/
#include<math.h>
#include<stdio.h>
int main()

{
    int x1,x2,y1,y2,x,y;
    float distance;
    printf("Enter X and Y coordinates of first point\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter X and Y coordinates of second point\n");
    scanf("%d %d",&x2,&y2);

    x=x2-x1;
    y=y2-y1;
    distance=sqrt((x*x+y*y));
    printf("Distance: %.2f",distance);

	return 0;







}

