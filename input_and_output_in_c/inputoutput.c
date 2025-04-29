#include <stdio.h>
#define MSSG "HELLO WORLD\n"
int main(void){

	
	
	// integer input
	int marks;
	printf("Enter the student marks: ");
	scanf("%d",&marks);
	printf("Intege input is %d\n", marks);
	
	
	// charcter input
	char grade;
	printf("Enter the student Grade: ");
	scanf(" %c",&grade);
	printf("Character input is %c\n", grade);
	//by mentioning some space  character befor the %c it will neglect all the white space characters before taking input with out mentioning space it will take some white space characters if it presents
	
	
	// float input
	float percentage;
	printf("Enter your percentage: ");
	scanf("%f",&percentage);
	printf("float input is %f\n", percentage);
	
	// string input
	char str[30];
	printf("Enter the string inpuyt: ");
	scanf("%s",str);
	printf("The entered string is %s",str);
	

	int basic, da;
	printf("Entere two intergeres");
	scanf("%d%d",&basic,&da);
	printf("The basic is %d and da is %d",basic,da);
	//when giving input we give input as separated by space ex: 78 00 or we give by clicking enter 678 enter 89
	
	int basic;
	float hra;
	char grade;
	printf("Enter baic, hra and grade: ");
	scanf("%d%f%c",&basic,&hra,&grade);
	printf("Basic is %d and hra is %f and grade is %c",basic,hra,grade);
	 

	int basic;
	float hra;
	char grade;
	printf("Enter baic, hra and grade: ");
	scanf("%d:%f:%c",&basic,&hra,&grade);
	printf("Basic is %d and hra is %f and grade is %c",basic,hra,grade);
	//in the above while giving input we need to give : for each input if we give any other white space characters that particular input is not read as input		



	int basic;
	float hra;
	char grade;
	printf("Enter baic, hra and grade: ");
	scanf("%d,%f:%c",&basic,&hra,&grade);
	printf("Basic is %d and hra is %f and grade is %c",basic,hra,grade);
	//in the above in the inuput we need to give those characters only ex:(34,89.09:a) we give any other that particular input is not taken ex:(34-89.09:a) in the example
	//float value 89.09 input is not read
	

	int basic, da, hra;
	printf("Entere three intergeres");
	scanf("%d %d    %d",&basic,&da,&hra);
	printf("The basic is %d and da is %d and hra is %d",basic,da,hra);


	
	int basic;
	float hra;
	char grade;
	printf("Enter baic, hra and grade: ");
	scanf("%d%f %c",&basic,&hra,&grade);
	printf("Basic is %d and hra is %f and grade is %c",basic,hra,grade);

	

	//Print statements

	printf("printing without any conversition specification\n");
	int marks = 100;
	float percentage = 89.0098;
	char grade='A';
	double attendence_percentage=75.908876897;
	printf("%d\n",marks);
	printf("%f\n",percentage);
	printf(" %c\n",grade);
	printf("%lf\n",attendence_percentage);
	printf("%d %f %c %lf\n",marks, percentage,grade,attendence_percentage);
	printf("The number is %d = %o\n",marks,marks);
	//for the above result 100 == 144 because we divide 100/8= 12 -rem 4 and 12/8=1 -rem 4 and 1/8=1 rem=1 so 144 in octal where we divide by 8 because it is octal
	//In the above the number in decimal is equal to octal	
	printf("The number is %d = %x\n",marks,marks);
	// in the above decimal number is equla to hexadecimall number 



	// Escape characters
	printf("a is used to set the alert which give some beet sound ex:\a");
	printf("b is used to move the cursor previous position of the current line ex: \b we calles as black slash\n");
	printf("r is used to move the cursor beginnig of the current line ex:\a we called as carriage return\n");
	printf("n is used to move new line ex:\n we called it as new line\n");
	printf("t is used to give one tab space ex:\t we called is horizantal tab  space\n");
	printf("f is used to move initial position of the next logical page ex:\f we called it as form feed\n");
	printf("v is used to give vertical tab space ex:\v we called it as vertical tabl \n");
	printf("I am using back slash  ex:\\ we called it baclslash \n");
	printf("I am using singlw quote \' and i am using double quote\" we calles it single quote and double quote\n");
	

	// integer input, output format
	int a1,b1;
	printf("Enter the value of a1 and b1: ");
	scanf("%2d,%3d",&a1,&b1);
	printf("the value of a1 is %d and value of b1 is %d\n",a1,b1);
	//if input is 6,394 is is stored in a1 and 394 is stored in b1
	//if input is 269,3845 26 is stored in a1 and 9 is stored in b1 and rest of the input is ignored becaures length of input is greater than field withd ex:in 2d->269
	int a=4000, b=200, c=15;
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
	printf("a=%4d\nb=%4d\nc=%4d\n",a,b,c);


	
	//flat input, output format
	float a,b;
	printf("Enter the float values for a and b: ");
	scanf("%3f%4f",&a,&b);
	printf("The float value of a is %f and b is%f\n",a,b);
	//if input is 5.8 and 5.85 and 5.8 is stored in a and 5.85 is stored in b because length of 5.8 is 3 and 5.85 is 4 including . equal to %3f,%4f
	//if input is 5.55 and 5.987 and 5.5 is stored in a and 5.000 is stored in because length of inputs is not equal to the %3f abd %4f
	float x,y;
	printf("Enter the values for x and y: ");
	scanf("%f %f",&x,&y);
	printf("x=%4.1f   y=%7.2f",x,y);
	//first input as 8 5.9 and output is x= 8.0,y=   5,90
	//second input as 25.3 1635.92 and outpur is x=25.3,y=1635.92
	//third input as 15.2321 65.875948 and output is x=15.2,y=  65.88 

	
	
	//string input and output format
	char str[8];
	scanf("%3s",str);
	printf("The given name is %s\n",str);
	printf("%3s","sureshkumar");
	printf("%10s","seeta");//print the seeta which is 5 characters and print the 5 spaces before the seets
	printf("%.3s","sureshkumar");//print the only first 3 characters
	printf("%8.4s","sureshkumar");//print the four characters and print the 8-4=4 empty spaces before first four characters
	
	
	
	//supersession characters
	//it means it will read the input and it will not assign to any memory location
	int a, b, c;
	scanf("%d%*d%d",&a,&b);
	printf("a is %d and b is %d and c is %d\n",a,b,c);
	int d,m,y;
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	printf("%d/%d/%d\n",d,m,y);
	
	
	
	//Character input and output
	char ch;
	printf("Enter a character: ");
	ch=getchar();
	printf("The entered character is : ");
	putchar(ch);
	
	
	
	//Examples
	printf(MSSG); //MMSG is defined in preprosser statements
	
	printf("Indian\b\n");
	printf("New\rDelhi\n");
	
	int a=10;
	printf("%d\t",a);
	printf("%o\t",a);
	printf("%x\t",a);
	printf("%X\n",a);
	
	
	int b=4000000000;
	unsigned int c=4000000000;
	printf("b=%d, c=%u\n",b,c);
	//printf("b=%d, c=%u\n",INT_MAX,UINT_MAX);
	
	char ch;
	printf("Enter a character: \n");
	scanf("%c",&ch);
	printf("%d\n",ch);
	
	float z=123.1265;
	printf("%f\t",z);
	printf("%.2f\t",z);
	printf("%.3f\n",z);
	
	int p=625, q=2394, r=12345;
	printf("%5d,%5d,%5d\n",p,q,r);
	printf("%3d,%4d,%5d\n",p,q,r);
	
	int k=98;
	char l=c;
	printf("%c%d\n",k,l);
	
	float a1,b1,a2,b2,a3,b3;
	a1=2;
	b1=6.8;
	a2=4.2;
	b2=3.57;
	a3=9.82;
	b3=85.673;
	printf("%3.1f,%4.2f\n",a1,b1);
	printf("%5.1f,%6.2f\n",a2,b2);
	printf("%7.1f,%8.2f\n",a3,b3);
	
	printf("%10s\n","India");
	printf("%4s\n","India");
	printf("%.2s\n","India");
	printf("%5.2s\n","India");
	
	






}
