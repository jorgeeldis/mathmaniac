#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

	int x,y,r,z;//variables de los problemas
	int puntaje = 0;//puntaje total en cada nivel
	int puntaje2 = 0;
	int puntaje3 = 0;
	int a = 0;
	int a_1 = 0;
	int a_2 = 0;
	int a_3 = 0;
	int a_4 = 0;
	int a_5 = 0;
	int a_6 = 0;
	int a_7 = 0;
	int a_8 = 0;
	int a_9 = 0;
	int a_10 = 0;
	int a_11 = 0;
	int b = 0;
	int b_1 = 0;
	int b_2 = 0;
	int b_3 = 0;
	int b_4 = 0;
	int b_5 = 0;
	int b_6 = 0;
	int b_7 = 0;
	int b_8 = 0;
	int b_9 = 0;
	int b_10 = 0;
	int b_11 = 0;
	int nivel1total;
	int nivel2total;
	int nivel3total;
	int nivel1totalbuenas;
	int nivel2totalbuenas;
	int nivel3totalbuenas;
	int porcentajenivel1;
	int porcentajenivel2;
	int porcentajenivel3;
	int porcentajesuma1;
	int porcentajesuma2;
	int porcentajesuma3;
	int porcentajeresta1;
	int porcentajeresta2;
	int porcentajeresta3;
	int porcentajemultiplicacion1;
	int porcentajemultiplicacion2;
	int porcentajemultiplicacion3;
	int porcentajedivision1;
	int porcentajedivision2;
	int porcentajedivision3;
	

void presentacion(){
printf("***********************************************************************\n");	
printf("************** SEMESTER PROGRAMMING PROJECT ***************************\n");
printf("***********************************************************************\n");
printf("******* CAREER: Electric & Electronic Engineering  GROUP:1EE-701 ******\n");
printf("***********************************************************************\n");
printf("****** Students *******************************************************\n");
printf("** Nunez, Xavier Ced:*-***-*** ****************************************\n");
printf("** Coiduras,Juan Ced:*-***-*** ****************************************\n");
printf("** Gonzalez, Jorge Ced:*-***-**** *************************************\n");
printf("***********************************************************************\n");	
system("pause"); 
system("cls");

	return ;
}

void reglas(int s1,int r1,int m1,int d1){ 
//	int s1,r1,m1,d1;//estas seran las variables de los puntajes de cada operacion
printf ("******************************************************************************************************************************* \n ");
printf ("******************************* WELCOME TO MATHMANIAC ************************************************************************* \n ");
printf ("***** The game will consist of solving mathematical problems according to the level you are at ... **************************** \n ");
printf ("****** RULES: ***************************************************************************************************************** \n ");
printf ("**** 1. Consists of 3 levels. ************************************************************************************************* \n ");
printf ("**** 2. You will level up as you reach the required score. ******************************************************************** \n ");
printf ("**** 3.The points obtained are determined by the type of operation: *********************************************************** \n ");
printf ("**** -Sum:% i pts ************************************************************************************************************* \n ", s1);
printf ("**** -Resta:% i pts *********************************************************************************************************** \n ", r1);
printf ("**** -Multiplication:% i pts ************************************************************************************************** \n ", m1);
printf ("**** -Division:% i pts ******************************************************************************************************** \n ", d1);
printf ("**** 4.If the answer is incorrect, the number of points that the operation is equivalent will be subtracted. ****************** \n" );
printf ("******************************************************************************************************************************* \n ");
printf ("******************************************************************************************************************************* \n ");
printf ("**** I have read and understood the rules of the game ... ********************************************************************* \n ");
printf ("******************************************************************************************************************************* \n ");
printf ("******************************************************************************************************************************* \n ");
	system("pause");
	system("cls");
	
	return;
}



int suma(int x, int y,int s1){//Lvl 1
	
	x=rand()%9;
	y=rand()%9;
	z=x+y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i+%i?\nR/",x,y);scanf("%i",&r);
	a++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje=puntaje+s1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
		b++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje=puntaje-s1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
	
}	
	return puntaje ;
}

int suma2(int x, int y,int s1){//LvL2
	
	x=rand()%99;//aumentando digitos...
	y=rand()%99;
	z=x+y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i+%i?\nR/",x,y);scanf("%i",&r);
	a_1++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje2=puntaje2+s1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
		b_1++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje2=puntaje2-s1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
	
}	
	return puntaje2 ;
}

int suma3(int x, int y,int s1){//Lvl3
	
	x=99+rand()%999;//aumentando digitos...
	y=99+rand()%999;
	z=x+y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i+%i?\nR/",x,y);scanf("%i",&r);
	a_2++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje3=puntaje3+s1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
		b_2++;
	}
	else if (r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje3=puntaje3-s1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
	
}	
	return puntaje3 ;
}

int resta(int x,int y,int r1){ //LvL1
	
	x=rand()%9;
	y=rand()%5;//solo hasta 5 para que sea algo facil el nivel 1 
	z=x-y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i-%i?\nR/",x,y);scanf("%i",&r);
	a_3++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje=puntaje+r1;
		printf("YOUR CURRENT SCORE IS: %i\n",puntaje);
		b_3++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje = puntaje - r1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
	
}	
	return puntaje ;

}

int resta2(int x,int y,int r1){// Lvl2
	
	x=10+rand()%99;//aumentando digitos... 
	y=10+rand()%99;
	z=x-y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i-%i?\nR/",x,y);scanf("%i",&r);
	a_4++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje2=puntaje2+r1;
		printf("YOUR CURRENT SCORE IS: %i\n",puntaje2);
		b_4++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje2 = puntaje2 - r1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
	
}	
	return puntaje2 ;

}

int resta3(int x,int y,int r1){// LVL3
	
	x=99+rand()%999;//aumentando digitos... 
	y=99+rand()%999;
	z=x-y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i-%i?\nR/",x,y);scanf("%i",&r);
	a_5++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje3=puntaje3+r1;
		printf("YOUR CURRENT SCORE IS: %i\n",puntaje3);
		b_5++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje3 = puntaje3 - r1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
	
}	
	return puntaje3 ;

}

int multiplicacion(int x,int y,int m1){//Lvl 1
	
	x=rand()%9;
	y=rand()%9;
	z=x*y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %ix%i?\nR/\n",x,y);scanf("%i",&r);
	a_6++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje=puntaje+m1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
		b_6++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje = puntaje - m1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
	
}	
	return puntaje ;
}

int multiplicacion2(int x,int y,int m1){// Lvl2
	
	x=10+rand()%99;//aumentando digitos solo a uno de los valores...
	y=rand()%9;
	z=x*y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %ix%i?\nR/\n",x,y);scanf("%i",&r);
	a_7++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje2=puntaje2+m1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
		b_7++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje2 = puntaje2 - m1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
}	
	return puntaje2 ;
}

int multiplicacion3(int x,int y,int m1){// LVl 3
	
	x=99+rand()%999;//aumentando digitos a solo uno de los valores...
	y=99+rand()%999;
	z=x*y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %ix%i?\nR/\n",x,y);scanf("%i",&r);
	a_8++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje3=puntaje3+m1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
		b_8++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje3 = puntaje3 - m1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
	
}	
	return puntaje3 ;
}

int division(int x,int y, int d1){//Lvl 1
	
	x=rand()%9;
	y=rand()%9;
	z=x/y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i/%i?\nR/",x,y);scanf("%i",&r);
	a_9++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje = puntaje +d1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
		b_9++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje = puntaje - d1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje);
	
}	
	return puntaje ;
}

int division2(int x,int y, int d1){ // LVl2
	
	x=10+rand()%99;//aumentando digitos....
	y=rand()%9;
	z=x/y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i/%i?\nR/",x,y);scanf("%i",&r);
	a_10++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje2 = puntaje2 +d1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
		b_10++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje2 = puntaje2 - d1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje2);
	
}	
	return puntaje2 ;
}

int division3(int x,int y, int d1){//LVl 3 
	
	x=99+rand()%999;//aumentando digitos....
	y=99+rand()%999;
	z=x/y;
	cout<<"(Enter 1234 if you want to finish.)"<<endl;
	printf("How much is %i/%i?\nR/",x,y);scanf("%i",&r);
	a_11++;
	if(r==z){
		printf("\nCORRECT\n");
		puntaje3 = puntaje3 +d1;
		printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
		b_11++;
	}
	else if(r==1234)
	{
		exit(622);
	}
else{
	printf("\nINCORRECT\n");
	puntaje3 = puntaje3 - d1;
	printf("\nYOUR CURRENT SCORE IS: %i\n",puntaje3);
	
}	
	return puntaje3 ;
}

void menu(int nivel1,int nivel2, int nivel3){

	printf("***************                      Levels                   *************************\n");
	printf("*****    1.Level 1 (score to pass the level% i pts)    ********************************\n",nivel1);
	printf("*****    2.Level 2 (score to pass the level% i pts)    ********************************\n",nivel2);
	printf("*****    3.Level 3 (score to pass the level% i pts)    ********************************\n",nivel3);
	return;
}

int main (){
	char nombre[10],apellido[10];//nombre y apellido
	int eleccion;//eleccion en el switch
    int i,test = rand()%3;//numero random
    int nivel1,nivel2,nivel3;//puntajes para niveles
    int s1,r1,m1,d1;//puntajes de cada operacion
    
	
    
	presentacion();
	printf("Enter the score of the problems to be done:\n");
	printf("*Sum*:\n");
	scanf("%i",&s1);
	printf("*Subtraction:*\n");
	scanf("%i",&r1);
	printf("Multiplication:*\n");
	scanf("%i",&m1);
	printf("*Division:*\n");
	scanf("%i",&d1);
	system("pause");
	system("cls");
	
    reglas(s1,r1,m1,d1);
    
	printf("****Please enter your name:****\n");scanf("%s",&nombre);
	printf("****Enter your last name:****\n");scanf("%s",&apellido);
	system("cls");
	printf("PLEASE ENTER THE SCORE TO PASS LEVELS:\n");
	printf("Level 1:\n");scanf("%i",&nivel1);
	printf("Level 2:\n");scanf("%i",&nivel2);
	printf("Level 3:\n");scanf("%i",&nivel3);
	system("pause");
	system("cls");
    menu(nivel1, nivel2, nivel3);
    printf("**************   PRESS THE NUMBER OF THE OPTION OF THE LEVEL YOU WANT TO START   *****\n");
    scanf("%i",&eleccion);
    system("pause");
	system("cls");
    
    switch (eleccion){
    	
    case 1:     printf("READY FOR LEVEL 1?");
	            do{
	
	            srand(time(NULL));
	            i=rand()%4;
	
                if(i==0){
    	        suma(x,y,s1);
						}
    			if(i==1){
    			resta(x,y,r1);
						}
				if(i==2){
    			multiplicacion(x,y,m1);
						}
				if(i==3){
    			division(x,y,d1);
						}
	
				}while (puntaje < nivel1 ) ;
				printf("\n************************************************************\n");
				printf("**********CONGRATULATIONS YOU HAVE EXCEEDED LEVEL 1 !!********\n");
				printf("\n************************************************************\n");
				system("pause");
				system("cls");
				break;


case 2:  printf("READY FOR LEVEL 2?");
	            do{
	
	            srand(time(NULL));
	            i=rand()%4;
	
                if(i==0){
    	        suma2(x,y,s1);
						}
    			if(i==1){
    			resta2(x,y,r1);
						}
				if(i==2){
    			multiplicacion2(x,y,m1);
						}
				if(i==3){
    			division2(x,y,d1);
						}
	
				}while (puntaje2 < nivel2 ) ;
				printf("\n************************************************************\n");
				printf("**********CONGRATULATIONS YOU HAVE EXCEEDED LEVEL 2 !!********\n");
				printf("\n************************************************************\n");
				system("pause");
				system("cls");
				break;
				
				
case 3:           printf("READY FOR LEVEL 3?");
	            do{
	
	            srand(time(NULL));
	            i=rand()%4;
	
                if(i==0){
    	        suma3(x,y,s1);
						}
    			if(i==1){
    			resta3(x,y,r1);
						}
				if(i==2){
    			multiplicacion3(x,y,m1);
						}
				if(i==3){
    			division3(x,y,d1);
						}
	
				}while (puntaje3 < nivel3 ) ;
				printf("\n************************************************************\n");
				printf("**********CONGRATULATIONS YOU HAVE EXCEEDED LEVEL 3 !!********\n");
				printf("\n************************************************************\n");
				system("pause");
				system("cls");


	}
	
	
	if (nivel1 <= puntaje)
	{
		printf("READY FOR LEVEL 2?");
		do{
	            srand(time(NULL));
	            i=rand()%4;
	
                if(i==0){
    	        suma2(x,y,s1);
						}
    			if(i==1){
    			resta2(x,y,r1);
						}
				if(i==2){
    			multiplicacion2(x,y,m1);
						}
				if(i==3){
    			division2(x,y,d1);
						}
	
				}while (puntaje2 < nivel2 ) ;
				printf("\n************************************************************\n");
				printf("**********CONGRATULATIONS YOU HAVE EXCEEDED LEVEL 2 !!********\n");
				printf("\n************************************************************\n");
				system("pause");
				system("cls");
	}
	
	if (nivel2 <= puntaje2)
	{
		printf("READY FOR LEVEL 3?");
		do{
	
	            srand(time(NULL));
	            i=rand()%4;
	
                if(i==0){
    	        suma3(x,y,s1);
						}
    			if(i==1){
    			resta3(x,y,r1);
						}
				if(i==2){
    			multiplicacion3(x,y,m1);
						}
				if(i==3){
    			division3(x,y,d1);
						}
	
				}while (puntaje3 < nivel3 ) ;
				printf("\n************************************************************\n");
				printf("**********CONGRATULATIONS YOU HAVE EXCEEDED LEVEL 3 !!********\n");
				printf("\n************************************************************\n");
				system("pause");
				system("cls");
	}
	
exit:
cout << "You have exited the game.\n";
	
cout << "Counter adds 1 digits:" << a << endl;
cout << "Counter adds 2 digits:" << a_1 << endl;
cout << "Counter adds 3 digits:" << a_2 << endl << endl;
cout << "Counter subtracts 1 digits:" << a_3 << endl;
cout << "Counter subtracts 2 digits:" << a_4 << endl;
cout << "Counter subtracts 3 digits:" << a_5 << endl << endl;
cout << "Counter multiplication 1 digits:" << a_6 << endl;
cout << "Counter multiplication 2 digits:" << a_7 << endl;
cout << "Counter multiplication 3 digits:" << a_8 << endl << endl;
cout << "Counter division 1 digits:" << a_9 << endl;
cout << "Counter division 2 digits:" << a_10 << endl;
cout << "Counter division 3 digits:" << a_11 << endl << endl;
cout << "Counter adds 1 correct digits:" << b << endl;
cout << "Counter adds 2 correct digits:" << b_1 << endl;
cout << "Counter adds 3 correct digits:" << b_2 << endl << endl;
cout << "Counter subtracts 1 correct digits:" << b_3 << endl;
cout << "Counter subtracts 2 correct digits:" << b_4 << endl;
cout << "Counter subtracts 3 correct digits:" << b_5 << endl << endl;
cout << "Multiplication counter 1 correct digits:" << b_6 << endl;
cout << "Multiplication counter 2 correct digits:" << b_7 << endl;
cout << "Multiplication counter 3 correct digits:" << b_8 << endl << endl;
cout << "Counter division 1 correct digits:" << b_9 << endl;
cout << "Counter division 2 correct digits:" << b_10 << endl;
cout << "Counter division 3 correct digits:" << b_11 << endl << endl;
	
	nivel1total=a+a_3+a_6+a_9;
	nivel2total=a_1+a_4+a_7+a_10;
	nivel3total=a_2+a_5+a_8+a_11;
	
	nivel1totalbuenas=b+b_3+b_6+b_9;
	nivel2totalbuenas=b_1+b_4+b_7+b_10;
	nivel3totalbuenas=b_2+b_5+b_8+b_11;
	
	
	/*
	if(nivel1totalbuenas == 0){
		porcentajenivel1 = 0;
	}
	else{
		porcentajenivel1=(nivel1totalbuenas/nivel1total)*100;
	}
    
*/
	if(nivel1total > 0)
		porcentajenivel1=(nivel1totalbuenas*100/nivel1total);
	else
	{
		porcentajenivel1=0;
	}
	if(nivel2total > 0)
		porcentajenivel2=(nivel2totalbuenas*100/nivel2total);
	else
	{
		porcentajenivel2=0;
	}
	if(nivel3total > 0)
		porcentajenivel3=(nivel3totalbuenas*100/nivel3total);
	else
	{
		porcentajenivel3=0;
	}
	if(a > 0)
		porcentajesuma1=(b*100/a);
	else
	{
		porcentajesuma1=0;
	}
	if(a_1 > 0)
		porcentajesuma2=(b_1*100/a_1);
	else
	{
		porcentajesuma2=0;
	}
	if(a_2 > 0)
		porcentajesuma3=(b_2*100/a_2);
	else
	{
		porcentajesuma3=0;
	}
	if(a_3 > 0)
		porcentajeresta1=(b_3*100/a_3);
	else
	{
		porcentajeresta1=0;
	}
	if(a_4 > 0)
		porcentajeresta2=(b_4*100/a_4);
	else
	{
		porcentajeresta2=0;
	}
	if(a_5 > 0)
		porcentajeresta3=(b_5*100/a_5);
	else
	{
		porcentajeresta3=0;
	}
	if(a_6 > 0)
		porcentajemultiplicacion1=(b_6*100/a_6);
	else
	{
		porcentajemultiplicacion1=0;
	}
	if(a_7 > 0)
		porcentajemultiplicacion2=(b_7*100/a_7);
	else
	{
		porcentajemultiplicacion2=0;
	}
	if(a_8 > 0)
		porcentajemultiplicacion3=(b_8*100/a_8);
	else
	{
		porcentajemultiplicacion3=0;
	}
	if(a_9 > 0)
		porcentajedivision1=(b_9*100/a_9);
	else
	{
		porcentajedivision1=0;
	}
	if(a_10 > 0)
		porcentajedivision2=(b_10*100/a_10);
	else
	{
		porcentajedivision2=0;
	}
	if(a_11 > 0)
		porcentajedivision3=(b_11*100/a_11);
	else
	{
		porcentajedivision3=0;
		
	}
	
	/*
	porcentajenivel1=(nivel1totalbuenas/nivel1total)*100;
	porcentajenivel2=(nivel2totalbuenas/nivel2total)*100;
	porcentajenivel3=(nivel3totalbuenas/nivel3total)*100;
	
	
	porcentajesuma1=(a/b)*100;
	porcentajesuma2=(a_1/b_1)*100;
	porcentajesuma3=(a_2/b_2)*100;
	
	porcentajeresta1=(a_3/b_3)*100;
	porcentajeresta2=(a_4/b_4)*100;
	porcentajeresta3=(a_5/b_5)*100;
	
	porcentajemultiplicacion1=(a_6/b_6)*100;
	porcentajemultiplicacion2=(a_7/b_7)*100;
	porcentajemultiplicacion3=(a_8/b_8)*100;
	
	porcentajedivision1=(a_9/b_9)*100;
	porcentajedivision2=(a_10/b_10)*100;
	porcentajedivision3=(a_11/b_11)*100;
	*/
	
	cout<<"Total problems done in level 1: "<<nivel1total<<endl;
	cout<<"Total problems done in level 2: "<<nivel2total<<endl;
	cout<<"Total problems done in level 3: "<<nivel3total<<endl<<endl;
	
	cout<<"Total correct problems of level 1: "<<nivel1totalbuenas<<endl;
	cout<<"Total correct problems of level 2: "<<nivel2totalbuenas<<endl;
	cout<<"Total correct problems of level 3: "<<nivel3totalbuenas<<endl;
	
	system("pause");
	system("cls");
	
	if(puntaje>=nivel1){
	    system("COLOR 2");
	    printf("***************************************\n");
	    cout<<"Your level 1 score is: "<<nivel1totalbuenas<<"/"<<nivel1total<<endl;
	    printf("***************************************");
	
	}
	
	else
	{
		system("COLOR 4");
	    printf("***************************************\n");
	    cout<<"Your level 1 score is: "<<nivel1totalbuenas<<"/"<<nivel1total<<endl;
	    printf("***************************************");
	}
	system("pause");
	system("cls");
	
		if(puntaje2>=nivel2){
	    system("COLOR 2");
	    printf("***************************************\n");
	    cout<<"Your level 2 score is: "<<nivel2totalbuenas<<"/"<<nivel2total<<endl;
	    printf("***************************************");
	
	}
	
	else
	{
		system("COLOR 4");
	    printf("***************************************\n");
	    cout<<"Your level 2 score is: "<<nivel2totalbuenas<<"/"<<nivel2total<<endl;
	    printf("***************************************");
	}
	system("pause");
	system("cls");
	
		if(puntaje3>=nivel3){
	    system("COLOR 2");
	    printf("***************************************\n");
	    cout<<"Your level 3 score is: "<<nivel3totalbuenas<<"/"<<nivel3total<<endl;
	    printf("***************************************");

	}
	
		else
	{
		system("COLOR 4");
	    printf("***************************************\n");
	    cout<<"Your level 3 score is: "<<nivel3totalbuenas<<"/"<<nivel3total<<endl;
	    printf("***************************************");
	}
	system("pause");
	system("cls");
	
	system("COLOR 7");
	
	
	cout<<"Name of competitor "<<nombre<<" "<<apellido<<"."<<endl;
	cout<<"--------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Operations-------|------Total operations carried out----------|-------Percentage of successes----"<<endl;
	cout<<"-----------------|--------------------------------------------|---------------------------------"<<endl;
	cout<<"---Level 1-------|------"<<nivel1total<<"----------------------------------------|------"<<porcentajenivel1<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Sum-----------|------"<<a<<"------------------------------------------|------"<<porcentajesuma1<<"--------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Substraction--|------"<<a_3<<"------------------------------------------|------"<<porcentajeresta1<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Multiplication|------"<<a_6<<"------------------------------------------|------"<<porcentajemultiplicacion1<<"----------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Division------|------"<<a_9<<"------------------------------------------|------"<<porcentajedivision1<<"----------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Level 2-------|------"<<nivel2total<<"------------------------------------------|------"<<porcentajenivel2<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Sum-----------|------"<<a_1<<"------------------------------------------|------"<<porcentajesuma2<<"--------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Substraction--|------"<<a_4<<"------------------------------------------|------"<<porcentajeresta2<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Multiplication|------"<<a_7<<"------------------------------------------|------"<<porcentajemultiplicacion2<<"----------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Division------|------"<<a_10<<"------------------------------------------|------"<<porcentajedivision2<<"----------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Level 3-------|------"<<nivel3total<<"------------------------------------------|------"<<porcentajenivel3<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Sum-----------|------"<<a_2<<"------------------------------------------|------"<<porcentajesuma3<<"--------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Substraction--|------"<<a_5<<"------------------------------------------|------"<<porcentajeresta3<<"-------------------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Multiplication|------"<<a_8<<"------------------------------------------|------"<<porcentajemultiplicacion3<<"----------"<<endl;
	cout<<"-----------------|----------------------------------------------|-----------------------------------------------"<<endl;
	cout<<"---Division------|------"<<a_11<<"------------------------------------------|------"<<porcentajedivision3<<"----------------"<<endl;
	system("pause");
	system("cls");
	
	cout<<"Thanks! I hope you liked our project! "<<endl;

	return 0;
}

