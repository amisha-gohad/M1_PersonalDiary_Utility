/**
 * @file main.c
 * @author Amisha Gohad
 * @brief In this C Projects source code series, we are creating simple Personal dairy. It is a c console-based application that works without using graphics and is one of the best c programming projects
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"inc/addrecord.h" //
#include"inc/editrecord.h"//
#include"inc/viewrecord.h"//
#include"inc/deleterecord.h"
#include <curses.h>

int main()

{
    //A Variable to Store users choice
    int user_choice;


    printf("\n\n\t***************************************************\n");

    printf("\t*WELCOME TO YOUR  PERSONAL DIARY*\n");

    printf(" \t***************************************************");

    while(1)

    {
        
        printf("\n\n\t\tMAIN MENU:\n");

        printf("\n\tCREATE RECORD\t[1]\n \t  VIEW RECORD\t[2]\n\tEDIT RECORD\t[3]\n\tDELETE RECORD\t[4]\n\tEXIT\t\t[5]\n\n");

        printf("\tPLEASE ENTER THE NUMBER YOUR CHOICE:");

        scanf("%d",&user_choice);

        switch(user_choice)
            //Depending upon the users choice a different function will be called
        {

     
        case 3:

            editrecord();

            break;
        case 1:

            addrecord();

            break;

        case 4:

            deleterecord();

            break;

        case 2:
{
            viewrecord();

            break;
}

        case 5:
{
            printf("\n\n\t\tTHANK YOU FOR USING OUR SOFTWARE ");

          

            exit(0);
}
        default:

            printf("\nSORRY! YOU ENTERED WRONG CHOICE..");

            printf("\nYOU MAY PRESS ANY KEY TO TRY AGAIN");

          

            break;

        }
        // TO CLEAR THE SCREEN    
        system("cls");

    }

    return 0;

}










