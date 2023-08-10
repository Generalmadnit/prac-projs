//1
//#include<stdio.h>
//
//#include<conio.h>
// pre processor directive, these are executed at time of compilation of program
// any error should not contain any error
// { - open delimiter } - closed delimiter
// printf - print formatted
// header file have predefined functions
//void main()
//{
//    printf("WAP to print the following message \n \\n is used to move cursor to new line");
//}

//2
//void main()
//{
//	printf("Prabhas height is 6\' 1\"\n");
//	printf("\' can be printed using \\\' and \" can be printed using \\\"");
//}
//output is Prabhas height is 6' 1" and ' can be printed using \' and " can be printed using \"

////3
//void main()
//{
//	printf("Ravi got 98%% in senior inter");
//}
//output is Ravi got 98% in senior inter

//4
//void main()
//{
//	printf("ab");
//	printf("\bsi");
//	printf("\rha");
//}
//output is hai

//5
//void main()
//{
//	printf("%*d",5,10);
//}
// this program subsitutes 5 in the place of * and prints 5 spaces to the output

//7
//#define sqr(x) x*x
//void main()
//{
//	printf("%d",sqr(5+2));
//}
//op is 17 as 
// sqr(5+2) -> 5+2*5+2 -> 5+10+2 -> 17

//8
//void main()
//{
//	char fname[100],lname[100];
//	scanf("%s%*s%*s%s",&fname,&lname);
//	printf("first name = %s, last name = %s",fname,lname);
//}

//9 Write a program without main method
//#define kits main
//void kits(void)
//{
//	printf("Hello! World");
//}

//10 printing message without using semicolon
//void main()
//{
//	if(printf("kits")){}
//} -> this can be solved using switch, while also

//11 sum of 2 numbers without using +
//void main()
//{
//	int a = 20;
//	int b = 30;
//	printf("%d",a-(-b));
//	printf("%d",a-~b-1);
//	printf("%d",a - - b);
//}
// ~n = n*-1-1

//12 diff of 2 nos using - symbol
//void main()
//{
//	printf("%d",5+~10+1);
//}

//13 Sum of 2 without any operator
//void main()
//{
//	int a,b,c;
//	printf("Enter 2 numbers");
//	scanf("%d%d",&a,&b);
//	c=printf("%*c%*c",a,' ',b,' ');
//	printf("%d",c);
//}

//14 WAP to read only first 3 digits of given number, print it in 3 digit format
//void main()
//{
//	int a;
//	printf("Enter a number");
//	scanf("%3d",&a);
//	printf("%3d",a);	
//}

//*1 Sum of first N natural numbers without using loop
//void main()
//{
//	int n = 5000;
//	printf("%d",(n*(n+1))/2);
//} 

//sum of digits until single digit using loops
//#include<stdio.h>
//void main()
//{
//	int n,rem=0,sum=0;
//	scanf("%d",&n);
//	while (n > 0 || sum > 9)
//    {
//        if (n == 0) 
//		{
//        	n = sum;
//            sum = 0;
//        }
//        sum += n % 10;
//        n /= 10;
//    }
//	printf("%d",sum);
//}

//sum of digits until single digit without using loop partially and using goto
//void main()
//{
//	int n,sum,rem;
//	scanf("%d",&n);
//	kits:
//		while(n>0)
//		{
//			rem = n%10;
//			sum += rem;
//			n /= 10;
//		}
//		if(sum>0)
//		{
//			n = sum;
//			sum =0;
//			goto kits;
//		}
//		else
//			printf("sum is %d",sum);
//}

// sum of digits until single without using loops
//void main()
//{
//	int n,rem;
//	scanf("%d",&n);
//	rem=n%9;
//	n%9==0?printf("sum==9"):printf("sum==%d",rem);
//}

//
//#include<string.h>
//void main()
//{
//	char a[50],temp;
//	int len;
//	scanf("%s",a);
//	len = strlen(a);
//	temp = a[0];
//	a[0] = a[len-1];
//	a[len-1] = temp;
//	printf("%s",a);
//}

//
//#include <string.h>
//#include <stdio.h>
//#include <math.h>
//void main()
//{
//	int a = 50,len;
//	char arr[50],temp;
//	
//	sprintf(arr,"%d",a);
//	
//	printf("Original %s\n",arr);
//	
//	len = strlen(arr);
//	temp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = arr[0];
//	
//	printf("Swapped %s",arr);
//}

//reverse using loops
//void main()
//{
//	int a = 5321,rem=0,sum=0;
//	while(a>0)
//	{
//		rem = a%10;
//		sum = (sum*10)+rem;
//		a = a/10;
//	}
//	printf("%d",sum);
//}

// reverse without loop
//void main()
//{
//	int a=6432;
//	char s[50];
//	sprintf(s,"%d",a);
//	strrev(s);
//	printf("reversed string %s\n",s);
//	sscanf(s,"%d",&a);
//	printf("reverse number %d",a);
//}

//find big using short hand if-else
//void main()
//{
//	int a = 543,b = 423;
//	printf("%d",(a>b?a:b));
//}

//even or odd without using % symbol
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%s\n",(a%2==0?"Even":"Odd"));
//	printf("%s",((a/2*2)==a?"Even":"Odd"));
//}

//check whether 2 nos are same or not without using conditional operators
//void main()
//{
//	int a=10,b=10;
//	printf("%s",(a-b?"Not Equal":"Equal"));
//} 

//check whether the number is +ve or -ve without comparing with 0
//void main()
//{
//	char s[40];
//	int a;
//	scanf("%s",s);
//	printf("%s\n",(s[0]=='-'?"Negative":"Positive"));
//	sscanf(s,"%d",&a);
//	printf("%s",(a==abs(a)?"Positive":"Negative"));
//}

//India won or Aus won or Tie
//void main()
//{
//	int ind,aus;
//	scanf("%d%d",&ind,&aus);
//	printf("%s",(ind==aus)?"Tie":(ind>aus)?"India won":"Aus won");
//}

//write a program to execute both if and else
//#include <stdio.h>
//void main()
//{
//	int a=20;
//	if(a)
//	{
//		printf("If cond\n");
//		goto kits1;
//	}
//	else
//	{
//		kits1:
//			printf("else cond");
//	}
//}

//
//#include<stdio.h>
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a%2==0)
//		printf("Weird");
//	else if((a>2 && a<=5)||a>20)
//		printf("Not weird");
//	else if(a>=6 && a<=20)
//		printf("Weird");
//}

////Wap to convert a lower case character to upper case character using null else(no need to
////write anything in the else
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	char s[50];
//	int len,i;
//	scanf("%[^\n]s",&s);
//	len = strlen(s);
//	for(i=0;i<len;i++)
//	{
//		s[i]=(s[i]>='a'&&s[i]<='z')?s[i]-32:s[i]+32;
////		if(s[i]>90)
////			s[i]=s[i]-32;
////		else
////			s[i]=s[i]+32;
//	}
//	printf("%s",s);
//}

//to convert to lower case using null if
//void main()
//{
//	char c;
//	scanf("%c",&c);
//	if(c>='a'&&c<='z')
//		;
//	else
//		c = c+32;
//	printf("%c",c);
//}

//to read a char, print whether it is lower case or upper case alpha or digit or symbol using switch
//void main()
//{
//	char ch;
//	int c;
//	scanf("%c",&ch);
//	c = (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')?1:(ch>='1'&&ch<='9')?2:3;
//	switch(c)
//	{
//		case 1:
//			printf("Alphabet");
//			break;
//		case 2:
//			printf("Number");
//			break;
//		default:
//			printf("Symbol");
//	}
//}
//					OR
//void main()
//{
//	char ch;
//	scanf("%c",&ch);
//	switch(ch)
//	{
//		case 'a' ... 'z':printf("Lower case");break;
//		case 'A' ... 'Z':printf("Upper case");break;
//		case '0' ... '9':printf("Number");break;
//		default:printf("symbol");
//	}	
//}

//read a num and print single or double or triple using switch
//void main()
//{
//	int ch;
//	scanf("%d",&ch);
//	switch(ch)
//	{
//		case 0 ... 9:printf("Single digit");break;
//		case 10 ... 99:printf("Double digit");break;
//		case 100 ... 999:printf("Triple digit");break;
//		default:printf("Multi digit");
//	}	
//}

//even or odd using switch
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	switch(a%2)
//	{
//		case 0 :printf("Even");break;
//		default:printf("Odd");
//	}
//}

//A if a,e,i,o,u B if b,c,d,f,g C if h,j,k,m D if ,n,p,q,r,s,t,u,v,z,x,y,z
//void main()
//{
//	char c;
//	scanf("%c",&c);
//	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
//		printf("A");
//	else if(c=='b'||c=='c'||c=='d'||c=='f'||c=='g')
//		printf("B");
//	else if(c=='h'||c=='j'||c=='k'||c=='m')
//		printf("C");
//	else
//		printf("D");
//}

//sum of 2 nos using while
//void main()
//{
//	int a, b, c=0;
//	scanf("%d %d",&a,&b);
//	while(a+b>c) 
//	{
//		c++;
//	}
//	printf("%d",c);
//
//	while(b!=0) 
//	{
//		a++;
//		b--;
//	}
//	printf("%d",a);
//}

//sub of 2 using loop
//void main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	{
//		while(b!=0)
//		{
//			a--;
//			b--;
//		}
//		printf("diff is %d",a);
//	}
//	else
//	{
//		
//		while(a!=0)
//		{
//			a--;
//			b--;
//		}
//		printf("diff is %d",b);
//	}
//}

//Multiplication of 2 using loop
//void main()
//{
//	int a,b,r=0;
//	scanf("%d%d",&a,&b);
//	while(b!=0)
//	{
//		r=r+a;
//		b--;
//	}
//	printf("%d",r);
//}

//division of 2 using loop
//void main()
//{
//	int a,b,r=0;
//	scanf("%d%d",&a,&b);
//	while(a>=b)
//	{
//		r++;
//		a=a-b;
//	}
//	printf("%d",r);
//}

//Multiplication using russian multiplication table
//void main()
//{
//	int a,b,sum=0;
//	scanf("%d%d",&a,&b);
//	while(a!=0)
//	{
//		if(a%2!=0)
//		{
//			sum+=b;
//		}
//		a/=2;
//		b*=2;
//	}
//	printf("%d",sum);
//}

//
//void main()
//{
//	int ind,aus;
//	scanf("%d%d",&ind,&aus);
//	printf("%s",(ind>aus)?"India won":(ind<aus)?"Aus won":"Tie");
//}

//wap to read favorite color os user
//if the user said his favorite color is blue "it's ours too!"
//if red then print "our best friend share that favorite"
// else "it's a great color
//#include<string.h>
//void main()
//{
//	char s[50];
//	scanf("%s",&s);
//	if(strcmp("blue",s)||strcmp("Blue",s))
//		printf("It\'s ours too!");
//	else if(strcmp("red",s)||strcmp("Red",s))
//		printf("Our best friend shares that favorite");
//	else
//		printf("It\'s a great color.");
//}

//round to nearest integer
//#include<math.h>
//void main()
//{
//	float a=50.6;
//	int b;
//	b = round(a);
//	printf("%d",b);
//}

//100's place
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a<100)
//		printf("%d",0);
//	else
//	{
//		a=a/100;
//		printf("%d",a%10);
//	}
//}

//if even /2 else *3+1 hail stone series
//#include<stdio.h>
//void main()
//{
//	int a;
//	scanf("%d",&a);
//	while(a!=1)
//	{
//		printf("%d\n",a);
//		a=(a%2==0)?a/2:a*3+1;
//	}
//	printf("%d",a);
//}

//WAP to print pythagorean triplets belowe the given number
//#include<stdio.h>
//void main()
//{
//	int rng,a,b,c,i=0;
//	scanf("%d",&rng);
//	for(a=1;a<=rng;a++)
//		for(b=1;b<=rng;b++)
//			for(c=1;c<=rng;c++)
//				if((a*a)+(b*b)==c*c)
//					printf("%d, %d, %d \n",a,b,c);
//}

//wap to find first and last digits of num
//#include<stdio.h>
//void main(){int a,b;scanf("%d",&a);b=a%10;while(a>=10)a=a/10;printf("%d is the first num,%d is the last num",a%10,b);}

//print all 2 digit numbers, where the second digit is smaller
//than its first digit by 4, and if the number was divided
//by the digit's sum, the quotient would be 7
//sample out put 62,73,84
//void main()
//{
//	int a,b,c;
//	for(a=5;a<=9;a++)
//	{
//		for(b=1;b<=9;b++)
//		{
//			c = (a*10)+b;
//			if(((c/(a+b))==7)&&((a-4)==b))
//				printf("%d\n",c);
//		}
//	}
//}

//perfect squares
//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int a,c;
//	float b;
//	for(a=4;a<10;a++)
//		printf("%d ",a*a);
//	for(a=10;a<100;a++)
//	{
//		b = sqrt(a);
//		c = sqrt(a);
//		if(b==c)
//			printf("%d ",a);
//	}
//}

//read and print username and pass
//#include<string.h>
//void main()
//{
//	char uname[50],pass[50];
//	int len,i=0;
//	printf("Enter username\n");
//	scanf("%s",&uname);
//	printf("Enter password\n");
//	do
//	{
//		pass[i]=getch();
//		i++;
//	}while(pass[i-1]!=13);
//	len=strlen(pass);
//	for(i=0;i<len-1;i++)
//		printf("*");
//	printf("\nUsername is %s",uname);
//	printf("\nPassword is %s",pass);
//}

//Or
//void main()
//{
//	char uname[50],pass[50],ch;
//	int i=0;
//	printf("Enter user name:\n");
//	scanf("%s",uname);
//	printf("Enter password:\n");
//	do
//	{
//		ch = getch();
//		printf("*");
//		pass[i++]=ch;
//	}while(ch!=13);
//	printf("\nUsername is %s",uname);
//	printf("\nPassword is %s",pass);
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf("*");
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j;
//	for(i=5;i>=1;i--)
//	{
//		for(j=1;j<=i;j++)
//			printf("*");
//		printf("\n");
//	}
//}

////
//void main()
//{
//	int i,j,k,s=4;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(k=1;k<=i;k++)
//			printf("*");
//		printf("\n");
//		s--;
//	}
//}

//
//void main()
//{
//	int i,j,k,s=0;
//	for(i=5;i>=1;i--)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(k=1;k<=i;k++)
//			printf("*");
//		printf("\n");
//		s++;
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int i,j,k,s=4;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(k=1;k<=i;k++)
//			printf("*");
//		printf("\n");
//		s--;
//	}
//}

//
//void main()
//{
//	int i,j,s=4;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(j=1;j<=i*2-1;j++)
//			printf("*");
//		printf("\n");
//		s--;
//	}
//}

//
//void main()
//{
//	int i,j,s,h;
//	scanf("%d",&h);
//	s=h-1;
//	for(i=1;i<=h;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(j=1;j<=i*2-1;j++)
//			printf("*");
//		printf("\n");
//		s--;
//	}
//}

//
//void main()
//{
//	int i,j,s,h;
//	scanf("%d",&h);
//	for(i=h;i>=1;i--)
//	{
//		for(j=1;j<=s;j++)
//			printf("   ");
//		for(j=1;j<=i*2-1;j++)
//			printf(" * ");
//		printf("\n");
//		s++;
//	}
//}

//
//void main()
//{
//	int i,j,k,s;
//	scanf("%d",&k);
//	s=k-1;
//	for(i=1;i<=k;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(j=1;j<=i*2-1;j++)
//			printf("*");
//		printf("\n");
//		s--;
//	}
//	s=1;
//	for(i=k-1;i>=1;i--)
//	{
//		for(j=1;j<=s;j++)
//			printf(" ");
//		for(j=1;j<=i*2-1;j++)
//			printf("*");
//		printf("\n");
//		s++;
//	}
//}

//
// void main()
// {
// 	int i,j,s=0;
// 	for(i=0;i<5;i++)
// 	{
// 		for(j=1;j<=s;j++)
// 			printf("  ");
// 		for(j=0;j<5;j++)
// 			printf(" *");
// 		printf("\n");
// 		s++;
// 	}
//}

//
//void main()
//{
//	int i,j;
//	//N
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((i==j)||j==1||j==5)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//I
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==3)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//T
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||j==3)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//I
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==3)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//N
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((i==j)||j==1||j==5)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}	
//}

//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||j==5||i==3||i==1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if()
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//C program to print heart star pattern 
//#include <stdio.h>
//int main()
//{
//    int i, j, n=9;
//    for(i=n/2; i<=n; i+=2)
//    {
//        for(j=1; j<n-i; j+=2)
//            printf(" ");
//        for(j=1; j<=i; j++)
//            printf("*");
//        for(j=1; j<=n-i; j++)
//            printf(" ");
//        for(j=1; j<=i; j++)
//            printf("*");
//        printf("\n");
//    }
//    for(i=n; i>=1; i--)
//    {
//        for(j=i; j<n; j++)
//			printf(" ");
//        for(j=1; j<=(i*2)-1; j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==1||j==5||(i==3&&i<j))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int i,j;
//	//K
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||(i==j&&i!=2)||(i==2&&j==4)||(i==1&&j==5))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	//O
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||i==1||i==5||j==5)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	//M
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||j==5||(i==j&&i<=3)||(i==2&&j==4))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//A
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||j==5||i==3||i==1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	//L
//	printf("\n");
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||i==5)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==3||j==3||(j==1&&i!=4)||(j==5&&i!=2)||(i==1&&j==4)||(i==5&&j==2))
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//}

//W
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||j==5||(i==4&&j==2)||(j==i&&i==3)||(i==4&&j==4))
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||(i==j&&i!=2)||(i==2&&j==4)||(i==1&&j==5))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if()
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(j==1||i==5||i==j)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((j==3&&(i==2||i==5))||((j==1||j==5)&&i==3)||((i==1||i==4)&&(j==2||j==4))||(i==2&&(j==1||j==5)))
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//}

//
//void main()
//{
//	int i,j,s=0;
//	for(i=5;i>=1;i--)
//	{
//		for(j=1;j<=s;j++)
//			printf("  ");
//		for(j=1;j<=2*i-1;j++)
//		{
//			if(j==1 || j==2*i-1 || i==5)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//		s++;
//	}
//}

//
//void main()
//{
//	int i,j,s=0;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=s;j++)
//			printf("  ");
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==1||j==5)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//		s++;
//	}
//}

//25 paisa coins, 50 paise coins, 1 rupee coins - total should be 700
//void main()
//{
//	int i;
//	for(i=1;i<=500;i++)
//	{
//		if((0.25*i+0.5*i+1*i)==700)
//		{
//			printf("25 paisa coins:%d\n50 paisa coins:%d\n1$ rupee coins:%d",i,i,i);
//			break;	
//		}
//	}
//}

//60 eyes and 86 legs
//void main()
//{
//	int i,j;
//	for(i=1;i<=30;i++)
//	{
//		for(j=1;j<=30;j++)
//		{
//			if(i*4+j*2==86&&(i+j)*2==60)
//			{
//				printf("There should be %d goats and %d hens\n",i,j);
//			}
//		}
//	}
//}

/* two painters came for painting the windows of 101. first person starts
painting from window 1. he started painting alternative windows i.e. 1,3,5..
second person starts painting from 101 window. where as the second person
started painting by leaving 2 windows 101,98,95,.. In this case find out
the common point */
//void main()
//{
//	int i=1,j=101;
//	for(;i<101&&j>1;i=i+2,j=j-3)
//	{
//		if(i==j)
//			printf("%d is the common point",i);
//	}
//}

/*Ravi wrote an objective type of exam and got 40 marks. In this total
number of questions are 20. Ravi attempted all the questions. for each
right ans 3 will be added and for wrong 1 will be lost
find total no of right and wrong */
//void main()
//{
//	int i,j;
//	for(i=1;i<=20;i++)
//	{
//		for(j=1;j<20;j++)
//		{
//			if(i*3-j*1==40&&i+j==20)
//			{
//				printf("Ravi attempted %d right and %d wrong",i,j);
//				break;
//			}
//		}
//	}
//}

/* Bacteria are knwon to multiply ver rapidly If a certain container contains
just one bacterium on the first day and
there are twice as many on the next day. In this manner
the number of bacteria in the container double itself everyday.
Assuming that the container would be full on the 10th day
with 13,312 bacteria, find the number of bacteria that was intially
in the container on the first day. */
//void main()
//{
//	int i=10,f=13312,in;
//	while(i>1)
//	{
//		in = f/2;
//		f = in;
//		i--;
//	}
//	printf("%d",in);
//}

/*WAP to find sum of numbers entered by user */
//void main()
//{
//	int sum,ch,i;
//	do
//	{
//		printf("Enter a number\n");
//		scanf("%d",&i);
//		sum+=i;
//		printf("Do you want to continue: 1, break: 0\n");
//		scanf("%d",&ch);
//	}while(ch==1);
//	printf("Sum is %d",sum);
//}

/*WAP to count odd nos and even nos entered by user. */
//void main()
//{
//	int ec=0,oc=0,i,ch;
//	do
//	{
//		printf("Enter a number:\n");
//		scanf("%d",&i);
//		(i%2==0)?ec++:oc++;
//		printf("Do you want to continue: 1 to continue, 0 to break\n");
//		scanf("%d",&ch);
//	}while(ch!=0);
//	printf("%d even(s) and %d odd(s)",ec,oc);
//}

//EVM
//void main()
//{
//	int rc=0,mc=0,sc=0,ch;
//	do
//	{
//		printf("\n1. Ramesh\n2.Mahesh\n3. Suresh\n4. Exit\nEnter your vote:");
//		scanf("%d",&ch);
//		switch(ch)
//		{
//			case 1: rc++;break;
//			case 2: mc++;break;
//			case 3: sc++;break;
//			case 4: break;
//			default: printf("Invalid vote");
//		}
//	}while(ch!=4);
//	printf("\nRamesh votes: %d",rc);
//	printf("\nMahesh votes: %d",mc);
//	printf("\nSuresh votes: %d",sc);
//	if(rc==sc&&rc==mc)
//		printf("\nTie between Ramesh, Mahesh, Suresh");
//	else if(rc>mc&&rc>sc)
//		printf("\nRamesh won the elections");
//	else if(mc>rc&&mc>sc)
//		printf("\nMahesh won the elections");
//	else if(sc>rc&&sc>mc)
//		printf("\nSuresh won the elections");
//	else if(sc==rc&&(sc>mc||rc<mc))
//		printf("\nTie between Suresh and Ramesh");
//	else if(rc==mc&&(rc>sc||rc<sc))
//		printf("\nTie between Ramesh and Mahesh");
//	else
//		printf("\nTie between Suresh and Mahesh");
//}

//Digital clock
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int hr=1,min=0,sec=0;
//	while(1)
//	{
//		printf("\r");
//		if(hr<10)
//			printf("0");
//		printf("%d: ",hr);
//		if(min<10)
//			printf("0");
//		printf("%d: ",min);
//		if(sec<10)
//			printf("0");
//		printf("%d ",sec);
//		sec++;
//		sleep(1);
//		if(sec==61)
//		{
//			sec=0;
//			min++;
//		}
//		if(min==61)
//		{
//			min=0;
//			hr++;
//		}
//		if(hr==13)
//		{
//			hr=1;
//		}
////		delay(1000);
//	}
//}

//Wap to print all the odd numbers from 1 to 100 using continue statement.
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2==0)
//			continue;
//		printf("%3d",i);
//	}
//}

//void main()
//{
//	int i=1;
//	x:
//		printf("%4d",i);
//		i++;
//	if(i<=100)
//		goto x;
//}

//Swap adjacent elements of a 1D array
//void main()
//{
//	int arr[100],ln,i,temp;
//	printf("Enter array size");
//	scanf("%d",&ln);
//	for(i=0;i<ln;i++)
//	{
//		printf("%d element of array",i+1);
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<ln;i++)
//	{
//		printf("%5d",arr[i]);
//	}
//	for(i=0;i<ln-1;i+=2)
//	{
//		temp=arr[i];
//		arr[i]=arr[i+1];
//		arr[i+1]=temp;
//	}
//	printf("\n");
//	for(i=0;i<ln;i++)
//	{
//		printf("%5d",arr[i]);
//	}
//	printf("\b\b");
//}

//void main()
//{
//	int arr[100],brr[100],i,j=0,n,k,temp;
//	printf("Enter the size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of array\n",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]!=0)
//			brr[j++]=arr[i];
//	}
//	if(j<n)
//	{
//		for(i=j;i<n;i++)
//			brr[i]=0;
//	}
//	for(i=0;i<n;i++)
//		printf("%5d",brr[i]);
//}

//WAP to read n elements into an array, swap the index values with elements
//void main()
//{
//	int arr[10],brr[10],i,j,n;
//	printf("Enter the size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of the array",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	for(i=0;i<n;i++)
//		brr[i]=0;
//	for(i=0;i<n;i++)
//		brr[arr[i]-1]=arr[i];
//	for(i=0;i<n;i++)
//		printf("%5d",brr[i]);
//}

//Given an array arr[] of integers. Find max and min elements
//void main()
//{
//	int min,max,i,arr[20],n;
//	printf("Enter the array size");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	min = arr[0];
//	max = arr[0];
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]<min)
//			min = arr[i];
//		if(arr[i]>max)
//			max=arr[i];
//	}
//	printf("Max ele is %d and min ele is %d",max,min);
//}

//
//void main()
//{
//	int arr[20],brr[20],i,j=0,n;
//	printf("Enter size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of array",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	printf("Elements before swap are\n");
//	for(i=0;i<n;i++)
//		printf("%3d",arr[i]);		
//	for(i=n-1;i>=0;i--)
//		brr[j++]=arr[i];
//	for(i=0;i<n;i++)
//		arr[i]=brr[i];
//	printf("\nElements after swap are\n");
//	for(i=0;i<n;i++)
//		printf("%3d",arr[i]);
//}

//			OR
//void main()
//{
//	int arr[20],i,j,n,t;
//	printf("Enter the size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of array",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	for(i=0,j=n-1;i<j;i++,j--)
//	{
//		t=arr[j];
//		arr[j]=arr[i];
//		arr[i]=t;	
//	}
//	printf("Elements after swap is");
//	for(i=0;i<n;i++)
//		printf("%3d",arr[i]);
//}

//Given an array arr[] of integers. Find the count of 
//void main()
//{
//	int i,j,arr[20],sum,c=0,n;
//	printf("Enter the size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of array",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	printf("\nEnter the combination sum");
//	scanf("%d",&sum);
//	for(i=0;i<n;i++)
//	{
//		for(j=i;j<n;j++)
//			if(arr[i]+arr[j]==sum)
//				c++;
//	}
//	printf("\nThere are %d pair of sums",c);
//	
//}

//
//void main()
//{
//	int i,arr[20],n;
//	printf("Enter the size of array");
//	scanf("%d",&n);
//	printf("Enter %d elements of array",n);
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	for(i=0;i<n-1;i++){
//		if(arr[i+1]-arr[i]!=1){
//			printf("Missing element is %d",arr[i]+1);
//			break;
//		}
//	}
//}

//find the occurance of the int in array
void main()
{
	int arr[20],n,k,i,fl=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter %d elements of array",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to find");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			printf("\n%d is found at %d",k,i+1);
			fl++;
		}
	}
	if(fl==0)
		printf("\n%d is not found",k);
}
