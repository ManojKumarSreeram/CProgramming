#include<stdio.h>


//Arithmetic Operations when both operand is interger
int main(void){
	int a,b;
	printf("Enter the a, b values: \n");
	scanf("%d%d",&a,&b);
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	printf("Subtraction of %d and %d is %d\n",a,b,a-b);
	printf("Multiclipation of %d and %d is %d\n",a,b,a*b);
	printf("Division of %d and %d is %d\n",a,b,a/b);
	printf("Modulus(remainder) of %d and %d is %d\n",a,b,a%b);
	return 0;
}


//Arithmetic Operations when both operand is float
int main(void){
	float a,b;
	printf("Enter the a, b values: \n");
	scanf("%f%f",&a,&b);
	printf("Addition of %f and %f is %f\n",a,b,a+b);
	printf("Subtraction of %f and %f is %f\n",a,b,a-b);
	printf("Multiclipation of %f and %f is %f\n",a,b,a*b);
	printf("Division of %f and %f is %f\n",a,b,a/b);
	printf("modulus operator do not support float operands");
	return 0;
}



//Arithmetic Operations when one operand is int and other is float
int main(void){
	int a;
	float b;
	printf("Enter the a, b values: \n");
	scanf("%d%f",&a,&b);
	printf("Addition of %d and %f is %f\n",a,b,a+b);
	printf("Subtraction of %d and %f is %f\n",a,b,a-b);
	printf("Multiclipation of %d and %f is %f\n",a,b,a*b);
	printf("Division of %d and %f is %f\n",a,b,a/b);
	printf("modulus operator do not support float operands");
	return 0;
}




//Increment and Decrement operator
//prefix increment and decrement operatopr
int main(void){
	int x=5;
	printf("Before pre increment of X=%d\n",x);
	printf("with pre increment of X=%d\n",++x);
	printf("After pre increment of X=%d\n",x);
	printf("with the pre decrement of X=%d\n",--x);
	printf("After pre decrement of X=%d\n",x);
	return 0;
}



//postfix increment and decrement operatopr
int main(void){
	int x=5;
	printf("Before post increment of X=%d\n",x);
	printf("with post increment of X=%d\n",x++);
	printf("After post increment of X=%d\n",x);
	printf("with the post decrement of X=%d\n",x--);
	printf("After post decrement of X=%d\n",x);
	return 0;
}


//Relation or conditional operator
int main(void){
	int a,b;
	printf("Enter the a,b values: ");
	scanf("%d %d",&a,&b);
	
	if(a<b)
		printf("%d is less than %d\n",a,b);
	if(a<=b)
		printf("%d is less than or equal to %d\n",a,b);
	if(a==b)
		printf("%d is equal to %d\n",a,b);
	if(a!=b)
		printf("%d is not equal to %d\n",a,b);
	if(a>b)
		printf("%d is greater than %d\n",a,b);
	if(a>= b)
		printf("%d is greater than or equal to %d\n",a,b);	
	return 0;
		
}



//conditional operator or terinary operator
int main(void){
	int a, b, max;
	printf("Enter the values for a and b : \n");
	scanf("%d%d",&a,&b);
	max=a>b ? a : b;
	printf("maximum value of %d and %d is %d\n",a,b,max);
	return 0;
}



//comma operato
//sum of three number
int main(void){
	int a,b,c,sum;
	sum=(a=10,b=20,c=30,a+b+c);
	printf("sum of %d, %d, %d is %d\n", a,b,c,sum);
	return 0;
}
//interchanging number
int main(void){
	int a,b,temp;
	printf("Enter the vlues for a,b :\n");
	scanf("%d%d",&a,&b);
	printf("Values before swapping a=%d and b=%d\n",a,b);
	temp = a, a=b, b=temp;
	printf("Values after swapping a=%d and b=%d\n",a,b);
	return 0;
}




//size of operator 
int main(void){
	int var;
	printf("size of int=%lu\n",sizeof(int));
	printf("size of float=%lu\n",sizeof(float));
	printf("size of var=%lu\n",sizeof(var));
	printf("size of integer constant=%lu\n",sizeof(45));
	printf("size of double=%lu\n",sizeof(double));
	return 0;
}




//type conversion operator
//type conversion in assignment
int main(void){
	int i1,i2;
	char c1,c2;
	float f1,f2;
	c1='H';
	i1=80.56;	//float converted to integer type i1=80
	f1=12.6;
	c2=i1;		//int converted to char c2=p
	i2=f1;		//float converted to integer type i2=12
	printf("c2=%c, i2=%d\n",c2,i2);
	f2=i1;		//int converted to float f2=80.000000
	i2=c1;		//char converted to int i2=72
	printf("f2=%f.2f, i2=%d\n",f2,i2);
	return 0;
}



// type conversion or type casting
int main(void){
	int x=20, y=3;
	float p,q,r;
	p=x/y;
	printf("p=%f\n",p);
	q=(float)x/y;		//Here explict type casting done and first x is converted to float and division done
	printf("q=%f\n",q);
	r=(float)(x/y);		//Here first x/y division done later float is applied to it
	printf("r=%f\n",r);
	return 0;
}


//comment every main funtion and run oly one main function
















