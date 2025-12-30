#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,A,B,C,D,E;
	
	a=1; b=1; c=5; d=1;
    A = (3.0 * (a / 5.0)) + (1.0 / b);
    B = (3.0 * a + (5.0 * b)) / (2.0 + c);
    C = (pow(4.0, 3.0 + c) - 5.0 * d)*(2.0 / 7.0);
    D = sqrt((2.0 + 8.0 * b) / a);
    E = cbrt(b*b - (4.0 * d));
    printf("4.1\nA:%.1f\nB:%.1f\nC:%.1f\nD:%.1f\nE:%.1f\n", A, B, C, D, E);

    a=9; b=2; c=0; d=1;
    A = (3.0 * (a / 5.0)) + (1.0 / b);
    B = (3.0 * a + (5.0 * b)) / (2.0 + c);
    C = (pow(4.0, 3.0 + c) - 5.0 * d)*(2.0 / 7.0);
    D = sqrt((2.0 + 8.0 * b) / a);
    E = cbrt(b*b - (4.0 * d));
    printf("4.2\nA:%.1f\nB:%.f\nC:%.1f\nD:%.1f\nE:%.1f\n", A, B, C, D, E);

    
    a=0; b=3; c=3; d=3;
    A = (3.0 * (a / 5.0)) + (1.0 / b);
    B = (3.0 * a + (5.0 * b)) / (2.0 + c);
    C = (pow(4.0, 3.0 + c) - 5.0 * d)*(2.0 / 7.0);
    D = sqrt((2.0 + 8.0 * b) / a);
    E = cbrt(b*b - (4.0 * d));
    printf("4.3\nA:%.1f\nB:%.1f\nC:%.1f\nD:%.1f\nE:%.1f\n", A, B, C, D, E);

    return 0;

}