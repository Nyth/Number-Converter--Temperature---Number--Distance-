#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char first_choice, binary[100];
	int n, len, decimal, power, i, decimalNumber, remainder,a,binaryNumber[100],j,octal;
	printf("	This is a converter.\nWhat kind of conversion do you need??\nPlease enter your choice\n\n");
	printf("1. Press ""n"" to convert Number.\n2. Press ""t"" to convert Temperature\n3. Press ""d"" to convert distance\n");
	top:
	printf("Your choice:");
	scanf("%c",&first_choice);
	if(first_choice == 'n'){
		number1:
		printf("\n\n1. Enter 1 to convert binary to decimal\n");
		printf("2. Enter 2 to convert decimal to binary\n");
		printf("3. Enter 3 to convert decimal to octal\n");
		printf("4. Enter 4 to convert octal to decimal\n");
		printf("5. Enter 5 to convert decimal to hexadecimal\n");
		printf("6. Enter 6 to Exit\n");
		number:
		printf("Enter your choice: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				//to convert binary to decimal
				printf("Enter the binary number: ");
				scanf("%s", binary);
				decimal = 0;
				len = strlen(binary);
				power = len - 1;
				for(i = 0; i < len; i++) {
				decimal += (binary[i]-'0')*pow(2, power);
				power--;
				}
				printf("Decimal value is %d\n\n", decimal);
				goto number1;
			case 2:
				//to convert decimal to binary
				    i=1;
				    printf("Enter any decimal number: ");
				    scanf("%d",&decimalNumber);
				    a = decimalNumber;
				    while(a!=0){
				         binaryNumber[i]= a % 2;
				         i++;
				         a = a / 2;
				    }
				    printf("Equivalent binary value of decimal number %d: ",decimalNumber);
				    for(j = i -1 ;j> 0;j--)
				        printf("%d",binaryNumber[j]);
				    goto number1;
				case 3:
					//to convert decimal to octal
					printf("Enter any decimal number : ");
					scanf("%d",&decimalNumber);
					printf("Equivalent octal number is: %o\n\n",decimalNumber);
					goto number1;
				case 4:
					//to convert octal to decimal
				    decimal =0;
				    i=0;
				    printf("Enter any octal number: ");
				    scanf("%d",&octal);
				    while(octal!=0){
				         decimal = decimal + (octal % 10) * pow(8,i++);
				         octal = octal/10;
				    }
				    printf("Equivalent decimal value: %d\n\n",decimal);
				    goto number1;
				case 5:
					//Enter 5 to convert decimal to hexadecimal
				    decimalNumber=0;
				    a=0;
				    i=1,j;
				    int temp;
				    char hexadecimalNumber[100];

				    printf("Enter any decimal number: ");
				    scanf("%ld",&decimalNumber);

				    a = decimalNumber;

				    while(a!=0){
				        temp = a % 16;
				      //To convert integer into character
				      if( temp < 10)
				           temp =temp + 48;
				      else
				         temp = temp + 55;

				      hexadecimalNumber[i++]= temp;
				      a = a / 16;
				  }
				    printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
				    for(j = i -1 ;j> 0;j--)
				      printf("%c",hexadecimalNumber[j]);
				  goto number1;

				case 6:
					break;

				default:
				printf("Wrong choice!!!\n Try again>>\n");
				goto number;
		}
	}
	else if(first_choice == 't'){
		int fahr=0,cel=0,kel=0;
		int choice;
		temperature1:
		printf("1. Enter 1 to convert Fahrenheit to Celsius\n");
		printf("2. Enter 2 to convert Celsius to Fahrenheit\n");
		printf("3. Enter 3 to convert Celsius to Kelvin\n");
		printf("4. Enter 4 to convert Kelvin to Celsius\n");
		printf("5. Enter 6 to Exit\n");
		temperature:
		printf("Your choice: ");
		scanf("%d",&choice);

		switch(choice){
		case 1:
			//to convert Fahrenheit to Celsius
			printf("Enter Fahrenheit value: ");
			scanf("%d",&fahr);
			cel=(fahr-32)*5/9;
			printf("Celsius of %d degrees Fahrenheit is %d degrees Celsius\n\n",fahr,cel);
			goto temperature1;

		case 2:
			//to convert Celsius to Fahrenheit
			printf("Enter Fahrenheit value: ");
			scanf("%d",&cel);
			fahr=cel*5/9 + 32;
			printf("Fahrenheit of %d degrees Celsius is %d degrees Fahrenheit\n\n",cel,fahr);
			goto temperature1;
		case 3:
			//to convert Celsius to Kelvin
			printf("Enter Celsius value:");
			scanf("%d",&cel);
			kel=cel+273;
			printf("Kelvin of %d degrees Celsius is %d kelvin\n\n", cel,kel);
			goto temperature1;
		case 4:
			//to convert Kelvin to Celsius
			printf("Enter Kelvin value: ");
			scanf("%d",&kel);
			cel=kel-273;
			printf("Celsius value of %d kelvin is %d degrees Celsius\n\n", kel,cel);
			goto temperature1;

			case 5:
				break;

		default:
				printf("Wrong choice!!!\n Try again>>\n");
				goto temperature;
		}
	}
	else if(first_choice == 'd'){
		int num;
		float distance,meters,kilometers,miles,centimeters;
		distance1:
		printf("1. Enter 1 to convert centimeters to meters\n");
		printf("2. Enter 2 to convert kilometers to meters\n");
		printf("3. Enter 3 to convert miles to meters\n");
		printf("4. Enter 4 to convert meters to centimeters\n");
		printf("5. Enter 5 to convert meters to kilometers\n");
		printf("6. Enter 6 to convert meters to miles\n");
		printf("7. Enter 7 to Exit\n");
		distance:
		printf("Enter your choice:");
		scanf("%d",&num);
		switch(num){
			case 1 :
				printf("\n selected centimeters to meters\n");
				break;

			case 2 :
				printf("\n selected kilometers to meters\n");
				break;

			case 3 :
				printf("\n selected miles to meters\n");
				break;

			case 4 :
				printf("\n selected meters to centimeters\n");
				break;

			case 5 :
				printf("\n selected meters to kilometers\n");
				break;

			case 6 :
				printf("\n selected meters to miles\n");
				break;
			case 7 :
				break;

			default :
				printf("Wrong choice!!!\n Try again>>\n");
				goto distance;
		}
		switch(num){
			case 1 :
				//to convert centimeters to meters
				printf("Enter centimeters: ");
				scanf("%f",&distance);
				meters=distance/100;
				printf("\n %.2f centimeters is %.2f meters\n\n",distance,meters);
				goto distance1;

			case 2 :
				//to convert kilometers to meters
				printf("Enter kilometers: ");
				scanf("%f",&distance);
				meters=distance*1000;
				printf("\n %.4f kilometers is %.4f meters\n\n",distance,meters);
				goto distance1;

			case 3 :
				//to convert miles to meters
				printf("Enter miles: ");
				scanf("%f",&distance);
				meters=(distance*1609344)/1000;
				printf("\n %.4f miles is %.4f meters\n\n",distance,meters);
				goto distance1;

			case 4 :
				//to convert meters to centimeters
				printf("Enter meters: ");
				scanf("%f",&distance);
				centimeters=distance*100;
				printf("\n %.4f meters is %.4f centimeters\n\n",distance,centimeters);
				goto distance1;

			case 5 :
				//to convert meters to kilometers
				printf("Enter meters: ");
				scanf("%f",&distance);
				kilometers=distance/1000;
				printf("\n %.4f meters is %.4f kilometers\n\n",distance,kilometers);
				goto distance1;
			case 6 :
				//to convert meters to miles
				printf("Enter meters: ");
				scanf("%f",&distance);
				miles=distance*0.000621371;
				printf("\n %.4f meters is %.4f miles\n\n",distance,miles);
				goto distance1;

			case 7:
				break;
		}
	}
	else{
				printf("Wrong choice!!!\n Try again>>\n");
				goto top;
	}

	return 0;
}
