#include<stdio.h>
#include<direct.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h> 

char *read_file(char *filename);

int compare(char[],char[]);  




//Main Function
int main()
{
/*****Main Local Variables*****/
 //Login and new account creation page
    int input1;
	
 //User creating a new account
  //Getting basic User informations
	char User_NIC[30];
	char UserName_Initials[1024];
	char UserName_Full[1024];
	char User_Email[1024];
	char User_Home_Address[1024];
	char User_Age[30];
	char User_Phone_Number[30];
	
	
  //Creating a password for the new account
    char User_Account_Password[30];
	char User_Account_Number[30];
	//int User_Account_Number
    char Confirming_User_Account_Password[30];
	int input2;
	int i=0, chk=0;
	char temp;
	
	
	float Initial_deposit = 0.00000000;
	
	int UPD_input5;
	int UPD1_input5;
	int ByPass1 = 0;
	
	
   
   
	
	system("cls");
	
lable4:	
//Greeting
   printf("       -------------------------------------------------------------------------       \n");
   printf("                              Welcome to Sampath Bank\n");
   printf("       -------------------------------------------------------------------------       \n\n\n\n");
//Login and new account creation page
lable1:
   printf("       Enter 1 to log into your Account\n");
   printf("       Enter 2 to create a New Account\n\n");
   printf("       Your Selection: ");
   scanf("%d", &input1);
   
   
   

//User logging in to a previously created bank account
   if(input1 == 1){
	   system("cls");
	   printf("       -------------------------------------------------------------------------       \n");
       printf("                              Welcome to Sampath Bank\n");
       printf("       -------------------------------------------------------------------------       \n\n\n\n");
	   printf("       Enter your NIC number: ");
	   scanf("%s", &User_NIC);
	   
   //checking whether this NIC already has an account or not 	
	   char* folder1;
       char s1[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
	
	
       folder1 = strcat(s1, User_NIC);
       struct stat sb;


lable15: //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //if user already has an account -> alwoing to continue
       if (stat(folder1, &sb) == 0 && S_ISDIR(sb.st_mode)) {
		   system("cls");
           
		   
		   
		   
		   
	//Getting user's Full Name from the Data Base
	//creating the path to get user' full name
	   char s21[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s22 = strcat(s21, User_NIC);
	   char* folder13 = strcat(s22, "\\UserName_Full");
       char* path_to_database10;
       path_to_database10 = strcat(folder13, "\\UserName_Full.txt");
    // read the file contents of the file
       char *file_contents1 = read_file(path_to_database10);
    //if there was an error reading the file, file_contents will be set to NULL,
    //handle the error gracefully with an error message and error return status
       if (file_contents1 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
  
  
     //Getting user's Name with initials from the Data Base
	  //creating the path to get user's Name with initials
	   char s23[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s24 = strcat(s23, User_NIC);
	   char* folder14 = strcat(s24, "\\UserName_Initials");
       char* path_to_database11;
       path_to_database11 = strcat(folder14, "\\UserName_Initials.txt");
	  // read the file contents of the file
       char *file_contents2 = read_file(path_to_database11);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents2 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
     
	 
	 //Getting user's account Number from the Data Base
	  //creating the path to get user's account Number
	   char s25[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s26 = strcat(s25, User_NIC);
	   char* folder15 = strcat(s26, "\\User_Account_Number");
       char* path_to_database12;
       path_to_database12 = strcat(folder15, "\\User_Account_Number.txt");
	  // read the file contents of the file
       char *file_contents3 = read_file(path_to_database12);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents3 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
	   
	   
	  //Getting user's Age from the Data Base
	  //creating the path to get user's Age
	   char s29[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s30 = strcat(s29, User_NIC);
	   char* folder17 = strcat(s30, "\\User_Age");
       char* path_to_database14;
       path_to_database14 = strcat(folder17, "\\User_Age.txt");
	  // read the file contents of the file
       char *file_contents5 = read_file(path_to_database14);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents5 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
	   
	   
	   //Getting user's Email from the Data Base
	  //creating the path to get user's Email
	   char s31[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s32 = strcat(s31, User_NIC);
	   char* folder18 = strcat(s32, "\\User_Email");
       char* path_to_database15;
       path_to_database15 = strcat(folder18, "\\User_Email.txt");
	  // read the file contents of the file
       char *file_contents6 = read_file(path_to_database15);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents6 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
	   
	   
	   
	   //Getting user's User_Home_Address from the Data Base
	  //creating the path to get user's User_Home_Address
	   char s33[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s34 = strcat(s33, User_NIC);
	   char* folder19 = strcat(s34, "\\User_Home_Address");
       char* path_to_database16;
       path_to_database16 = strcat(folder19, "\\User_Home_Address.txt");
	  // read the file contents of the file
       char *file_contents7 = read_file(path_to_database16);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents7 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
	  
	   
	   //Getting user's User_Phone_Number from the Data Base
	  //creating the path to get user's User_Phone_Number
	   char s35[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s36 = strcat(s35, User_NIC);
	   char* folder20 = strcat(s36, "\\User_Phone_Number");
       char* path_to_database17;
       path_to_database17 = strcat(folder20, "\\User_Phone_Number.txt");
	  // read the file contents of the file
       char *file_contents8 = read_file(path_to_database17);
     //if there was an error reading the file, file_contents will be set to NULL,
     //handle the error gracefully with an error message and error return status
       if (file_contents8 == NULL)
       {
       printf("Error reading file.\n");
       return 1;
       }
	   
	   
	          
			  
			  if (ByPass1==1){
				  ByPass1 = 0;
				  goto lable16;
			  }
	   
	   
	   
	   
	 //Getting Account Balance from the database and saving in to file_contents4 as float
	   
	   float file_contents4;
	   char s27[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s28 = strcat(s27, User_NIC);
	   char* folder16 = strcat(s28, "\\User_Account_Balance");
       char* path_to_database13;
       path_to_database13 = strcat(folder16, "\\User_Account_Balance.txt");
	   FILE *FH_User_Account_Balance = fopen(path_to_database13, "r");
	
	   if (FH_User_Account_Balance == NULL){
		printf("Unable to open file\n");
		
		
	   }else{
		while (fscanf(FH_User_Account_Balance, "%f", &file_contents4)==1){
			
		}
		
		 fclose(FH_User_Account_Balance);
	   }  
		   
		   
		   
		   
		   
	//getting password from the user
		lable6:
           printf("       -------------------------------------------------------------------------       \n");
           printf("                              Welcome to Sampath Bank\n");
           printf("       -------------------------------------------------------------------------       \n\n\n\n");		
	     

		   printf("       Enter your account password: ");
	       scanf("%s", &User_Account_Password);
		   
       
	
	
	   char s19[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s20 = strcat(s19, User_NIC);
	   char* folder12 = strcat(s20, "\\User_Account_Password");
       char* path_to_database9;
       path_to_database9 = strcat(folder12, "\\User_Account_Password.txt");
	   FILE *Open_File1 = fopen(path_to_database9, "r");
	   
       if (Open_File1 == NULL){
          printf("Unable to open the file"); 
		  } 

       char Open_File1_line[100];
       fgets (Open_File1_line, sizeof(Open_File1_line), Open_File1);
       fclose(Open_File1);

       int c= compare(User_Account_Password,Open_File1_line); // calling string compare function  
   
   
      //passwords match
      if(c==0){
      system("cls");
	  
	  
	  
	  
	 
  lable10:
	  
	  //Transaction and options page
	  //User Welcome message
	  printf("       -------------------------------------------------------------------------       \n");
	  printf("                    Welcome back ");
	  printf("%s", file_contents1);
	  printf("       -------------------------------------------------------------------------       \n");
   
      printf("\n\n                                                 Account Number  : %s", file_contents3);
      printf("\n                                                 Account Holder  : %s", file_contents2);
      printf("                                                 Account Balance : LKR %.2f", file_contents4);
   
      printf("\n\n\n\n       1) Deposit Money\n");
	  printf("       2) Withdraw Money\n");
	  printf("       3) View Recent Transactions\n");
      printf("       4) More Options\n");
	  printf("       5) Log out\n\n");
	  
	  int input5; 
	  printf("       Enter your selection here: ");
      scanf("%d", &input5);
	  
	  
	  
	//Money deposit portal  
	  if(input5==1){
		  system("cls");
		  
		  printf("       -------------------------------------------------------------------------       \n");
	      printf("                              Money Deposit Portal\n");
	      printf("       -------------------------------------------------------------------------       \n");
   
          printf("\n\n                                                 Account Number  : %s", file_contents3);
          printf("\n                                                 Account Holder  : %s", file_contents2);
          printf("                                                 Account Balance : LKR %.2f", file_contents4);
		  
		  printf("\n\n\n\n       How much do you want to Deposit: LKR ");
	 
	     float input6; 
	     scanf("%f", &input6);
		 if (input6 > 0.000000){
			 file_contents4 = file_contents4 + input6;
			 
			 
			 system("cls");
			 printf("       -------------------------------------------------------------------------       \n");
	         printf("                              Money Deposit Receipt\n");
	         printf("       -------------------------------------------------------------------------       \n");
             
             printf("\n\n                                                 Account Number  : %s", file_contents3);
             printf("\n                                                 Account Holder  : %s\n", file_contents2);
             printf("                                                 Account Balance : LKR %.2f\n\n\n", file_contents4);
             {time_t current_time=time(NULL); struct tm*tm=localtime(&current_time); 
             printf("       Transaction Date and Time : %s", asctime(tm)); } 
   			 printf("       Customer Name             : %s\n\n", file_contents1);
			 printf("       Deposit Amount    : LKR %.2f\n\n", input6);
			 printf("       Terminal Fee      : LKR 0.00\n");
			 printf("       Total Amount      : LKR %.2f\n", input6);
			 printf("\n\n\n\n");
			 
			 
			 
			 
			 printf("                 LKR %.2f Deposited to your account Successfully\n", input6);
	         printf("       -------------------------------------------------------------------------       \n");
             printf("                     Your new account balance: LKR %.2f\n", file_contents4);
			 printf("\n                                 ~~~ Thank You ~~~");
			
			 
			 
		//Updating Account Balance
			 
	         FILE *FH_User_Account_Balance2;
	         FH_User_Account_Balance2 = fopen (path_to_database13, "w"); // "w" defines "writing
	 
	         if (FH_User_Account_Balance2 == NULL){
		      printf("Unable to open file\n");
		      exit(1);
	         }
		 
	         fprintf(FH_User_Account_Balance2, "%f",file_contents4);
	         fclose(FH_User_Account_Balance2);
			 
			 
			 
	  
	   //Updating Transactions Database
            char *Date_and_Time1[30];
	        char temp2[30] = "";
	        {time_t current_time=time(NULL); struct tm*tm=localtime(&current_time); 
            //printf("       Transaction Date and Time : %s", asctime(tm)); 
	        Date_and_Time1[30] = strcat(temp2,asctime(tm));
	        } 
		
	
	        char s39[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	        char* s40 = strcat(s39, User_NIC);
	        char* folder22 = strcat(s40, "\\Transactions_Database");
       
	        char* path_to_database19;
	
	        path_to_database19 = strcat(folder22, "\\Transactions_Database.txt");
	        FILE *Transactions_Database1;
	        Transactions_Database1 = fopen (path_to_database19, "a"); // "a" defines "appending"
	 
	        if (Transactions_Database1 == NULL){
		       printf("Unable to open file\n");
		       exit(1);
	         }
		 
	        fprintf(Transactions_Database1, "       %s       Deposited    --------------------->       %.2f\n       Balance      --------------------->       %.2f\n\n\n",temp2,input6,file_contents4);
	        fclose(Transactions_Database1);
	  
			 
			 
			 
			 
		     printf("\n\n\n\n\n\n\n\n                         ~~~ Press Enter key to continue ~~~");
		     getch();
			 system("cls");
			 goto lable10;
		


		
	  }else{
				printf("       ~~~ You should deposit more than LKR 0 | Press Enter key to go to the previous page ~~~");
				getch();
				system("cls");
			    goto lable10;
	  }
	  
	  
	  
	  
	//Money Withdraw portal
	  }else if(input5==2){
		  system("cls");
		  
		  printf("       -------------------------------------------------------------------------       \n");
	      printf("                              Money Withdraw Portal\n");
	      printf("       -------------------------------------------------------------------------       \n");
   
          printf("\n\n                                                 Account Number  : %s", file_contents3);
          printf("\n                                                 Account Holder  : %s", file_contents2);
          printf("                                                 Account Balance : LKR %.2f", file_contents4);
		  
		  printf("\n\n\n\n       How much do you want to Withdraw: LKR ");
	 
	     float input6;
	     scanf("%f", &input6);
		 
		       if((file_contents4 - 5.000000 - input6) >= 1000){
		 
				                  if (input6 > 0.999999){
					                  file_contents4 = file_contents4 - input6 - 5.000000;
					                  system("cls");
					                  printf("       -------------------------------------------------------------------------       \n");
	       		                      printf("                            Money Withdrawal Receipt\n");
	        		                  printf("       -------------------------------------------------------------------------       \n");
   		                 
           		                      printf("\n\n                                                 Account Number  : %s", file_contents3);
           		                      printf("\n                                                 Account Holder  : %s\n", file_contents2);
					                  printf("                                                 Account Balance : LKR %.2f\n\n\n", file_contents4);
            		                  {time_t current_time=time(NULL); struct tm*tm=localtime(&current_time); 
           		                      printf("       Transaction Date and Time : %s", asctime(tm)); } 
   					                  printf("       Customer Name             : %s\n\n", file_contents1);
					                  printf("       Withdrawal Amount : LKR %.2f\n", input6);
					                  printf("       Terminal Fee      : LKR 5.00\n\n");
					                  printf("       Total Amount      : LKR %.2f\n", input6 + 5.000000);
				                 	  printf("\n\n\n\n");
			 
			 
			 
			 
					                  printf("                LKR %.2f Withdrawn from your account Successfully\n", input6);
	      		                      printf("       -------------------------------------------------------------------------       \n");
					                  printf("                     Your new account balance: LKR %.2f\n", file_contents4);
					                  printf("\n                                 ~~~ Thank You ~~~");
			 
				                 //Updating Account Balance
					                  
	       		                      FILE *FH_User_Account_Balance2;
	      		                      FH_User_Account_Balance2 = fopen (path_to_database13, "w"); // "w" defines "writing
	 
	       		                      if (FH_User_Account_Balance2 == NULL){
		   		                      printf("Unable to open file\n");
		   		                      exit(1);
	      		                      }
		 
	     		                      fprintf(FH_User_Account_Balance2, "%f",file_contents4);
	     		                      fclose(FH_User_Account_Balance2);
			 
			 
	   		                  //Updating Transactions Database
           		                     char *Date_and_Time2[30];
	      		                     char temp3[30] = "";
	      		                     {time_t current_time=time(NULL); struct tm*tm=localtime(&current_time); 
         		                    //printf("       Transaction Date and Time : %s", asctime(tm)); 
	    		                     Date_and_Time2[30] = strcat(temp3,asctime(tm));
	     		                     } 
		
	
	     		                    char s41[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	     		                    char* s42 = strcat(s41, User_NIC);
	     		                    char* folder23 = strcat(s42, "\\Transactions_Database");
       
	     		                    char* path_to_database20;
	
	     		                    path_to_database20 = strcat(folder23, "\\Transactions_Database.txt");
	     		                    FILE *Transactions_Database2;
	     		                    Transactions_Database2 = fopen (path_to_database20, "a"); // "a" defines "appending"
	 
	      		                       if (Transactions_Database2 == NULL){
		  		                        printf("Unable to open file\n");
		 		                        exit(1);
	      		                       }
		 
	      		                   fprintf(Transactions_Database2, "       %s       Withdrawn    --------------------->       %.2f\n       Terminal Fee --------------------->       5.00\n       Balance      --------------------->       %.2f\n\n\n",temp3,input6,file_contents4);
	      		                   fclose(Transactions_Database2);                  
			 
			 
			 
			 
			 
			 
				                     printf("\n\n\n\n\n\n\n\n                      ~~~ Press Enter key to continue ~~~");
				                     getch();
				                 	 system("cls");
				                 	 goto lable10;
				
			                   }else{
				                     printf("     ~~~ You should Withdraw more than LKR 0.999999 | Press Enter key to go to the previous page ~~~");
			                 		 getch();
			                 	     system("cls");
			                 		 goto lable10;
			                   }
		  
			   }else{
				    
				   printf("\n\n                                Transaction Declined!\n\n\n");
				   printf("           There is No enough money in your Bank Account to make this Withdrawal\n");
				   printf("             Minimum Balance of LKR 1000.00 needed to keep your account active\n\n\n");
				   printf("         >>> Withdrawal of LKR %.2f Declined  <<<", input6);
				   printf("\n\n       -------------------------------------------------------------------------       \n");
				   printf("\n\n\n\n\n\n                    ~~~ Press Enter key to go to the previous page ~~~");
			       getch();
			       system("cls");
			       goto lable10;
				   
				   
				   
				   
			   }
		  
		                 
		  
		  
 //View Recent Transactions
    //Getting Recent Transactions
	
	  }else if(input5==3){
		  
		  char s45[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	      char* s46 = strcat(s45, User_NIC);
	      char* folder25 = strcat(s46, "\\Transactions_Database");
          char* path_to_database22;
	      path_to_database22 = strcat(folder25, "\\Transactions_Database.txt");
	  
	
	      FILE* ptr;
	      char ch;

	// Opening Recent Transactions file in reading mode
	      ptr = fopen(path_to_database22, "r");

	      if (NULL == ptr) {
		    printf("file can't be opened \n");
	      }

	  

	
		  
		  
		  system("cls");
		  printf("       -------------------------------------------------------------------------       \n");
	      printf("                                Recent Transactions\n");
	      printf("       -------------------------------------------------------------------------       \n");
		  
   
          printf("\n\n                                                 Account Number  : %s", file_contents3);
          printf("\n                                                 Account Holder  : %s", file_contents2);
          printf("                                                 Account Balance : LKR %.2f\n\n\n\n\n", file_contents4);
		 
	// Printing what is written in file
	// character by character using loop.
	     do {
		 ch = fgetc(ptr);
		 printf("%c", ch);

		// Checking if character is not EOF.
		// If it is EOF stop reading.
	     } while (ch != EOF);

	// Closing the file
	     fclose(ptr);
  
  
		  printf("\n\n\n                         ~~~~ End of Recent Transactions ~~~~\n");
		  printf("       -------------------------------------------------------------------------       \n");

		  printf("\n\n\n\n\n\n\n\n                  ~~~ Press Enter key to go to the previous page ~~~");
		  getch();                                                             
	      system("cls");
		  goto lable10;
		  
		  
		  
		  
		  
 //More Options Page
	  }else if(input5==4){
lable11:
		  system("cls");
		  printf("       -------------------------------------------------------------------------       \n");
	      printf("                                  More Options\n");
	      printf("       -------------------------------------------------------------------------       \n");
   
          printf("\n\n                                                 Account Number  : %s", file_contents3);
          printf("\n                                                 Account Holder  : %s", file_contents2);
          printf("                                                 Account Balance : LKR %.2f", file_contents4);
		  
		  
		  
		 printf("\n\n\n\n       1) View your account details\n");
	     printf("       2) Update your account details\n");
	     printf("       3) Delete your account\n");
		 printf("       4) Goto the previous page\n\n");
	     printf("       Enter your selection here: ");
         scanf("%d", &input5);
		

lable17: //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++		
	    //Viewing account details 
		 if(input5==1){
		    system("cls");
		    printf("       -------------------------------------------------------------------------       \n");
	        printf("                                  Account Details\n");
	        printf("       -------------------------------------------------------------------------       \n");
   
            printf("\n\n                                                 Account Number  : %s", file_contents3);
            printf("\n                                                 Account Holder  : %s", file_contents2);
            printf("                                                 Account Balance : LKR %.2f", file_contents4);
            
			
			printf("\n\n\n\n        Name with initials : %s\n", file_contents2);
	        printf("        Full Name          : %s\n", file_contents1);
	        printf("        Contact number     : %s\n", file_contents8);
	        printf("        Email address      : %s\n", file_contents6);
            printf("        Home address       : %s\n", file_contents7);
			printf("        Date of Birth      : %s\n\n\n", file_contents5);
			printf("       -------------------------------------------------------------------------       \n");
			printf("\n\n\n\n\n\n\n\n                  ~~~ Press Enter key to go to the previous page ~~~");
		    getch();                                                             
			system("cls");
			goto lable11;
			
			
			
   //Update account page 		
   
   

	 }else if(input5==2){
	


	//Creating a database folder for the user
	     char* UPD_folder2;
	     char UPD_s2[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
         UPD_folder2 = strcat(UPD_s2, User_NIC);
         //_mkdir(folder2);
		       
        
		
		
		
		//Creating a common path	 
	    char* UPD_path_to_database;
lable18:
			 
			 
			 
			 system("cls");
		   printf("       -------------------------------------------------------------------------       \n");
	       printf("                                Account Updation Page\n");
	       printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                You are about to Update Your Sampath Bank Account Details!\n");
		   printf("                      Followings Are The Currunt Account Details\n\n\n");
		   
		    printf("\n\n\n\n        Name with initials : %s\n", file_contents2);
	        printf("        Full Name          : %s\n", file_contents1);
	        printf("        Contact number     : %s\n", file_contents8);
	        printf("        Email address      : %s\n", file_contents6);
            printf("        Home address       : %s\n", file_contents7);
			printf("        Date of Birth      : %s\n", file_contents5);
	       printf("\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
           
		   
	   
		   printf("\n\n\n\n       1) I want to Update Account Details\n");
	       printf("       2) I don't want to Update My Account Details\n\n");
	       
	       printf("       Enter your selection here: ");
           scanf("%d", &UPD_input5);
		
		
		
		
		
		if (UPD_input5==1){
lable16:
			
			system("cls");
		   printf("       -------------------------------------------------------------------------       \n");
	       printf("                                Account Updation Page\n");
	       printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                You are about to Update Your Sampath Bank Account Details!\n");
		   printf("                      Followings Are The Currunt Account Details\n\n\n");
		   
		    printf("\n\n\n\n        Name with initials : %s\n", file_contents2);
	        printf("        Full Name          : %s\n", file_contents1);
	        printf("        Contact number     : %s\n", file_contents8);
	        printf("        Email address      : %s\n", file_contents6);
            printf("        Home address       : %s\n", file_contents7);
			printf("        Date of Birth      : %s\n", file_contents5);
	       printf("\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
           
		   
	   
		   printf("       1) I want to Update My Name with initials\n");
		   printf("       2) I want to Update My Full Name\n");
		   printf("       3) I want to Update My Contact number\n");
		   printf("       4) I want to Update My Email address\n");
		   printf("       5) I want to Update My Home address\n");
	       printf("       6) I want to Update My Date of Birth\n");
		   printf("       7) Exit\n\n");
	       
	       printf("       Enter your selection here: ");
           scanf("%d", &UPD1_input5);
			
			
			
			
        
//Taking Data from user and updating each om demand database
			
			
		if(UPD1_input5==1){
					printf("       Enter your name with initials: ");
	    		    scanf("%c",&temp); // temp statement to clear buffer
	                fgets(UserName_Initials,1024,stdin);
			
			
			
			//*************************************************************
			
			
			//Creating a database folder for the user
	     char* UPD_folder2;
	     char UPD_s2[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
         UPD_folder2 = strcat(UPD_s2, User_NIC);
         //_mkdir(folder2);
		       
        
		 //Creating a common path	 
	     char* UPD_path_to_database;
			
			
		
			//************************************************************
			
			
					//Saving User name with initials
     		   char* UPD_folder3 = strcat(UPD_s2, "\\UserName_Initials");
    
	   		 //_mkdir(UPD_folder3);
		
      		  UPD_path_to_database = strcat(UPD_folder3, "\\UserName_Initials.txt");
	  		  FILE *UPD_FH_UserName_Initials;
	  		  UPD_FH_UserName_Initials = fopen (UPD_path_to_database, "w"); // "w" defines "writing
	  		  // write to file
	  		  fprintf(UPD_FH_UserName_Initials, UserName_Initials);
	   		 fclose(UPD_FH_UserName_Initials);		
			 
			     ByPass1 = 1;
			     goto lable15;
	
	
	
		}else if(UPD1_input5==2){
					printf("       Enter your full name: ");
	 		   scanf("%c",&temp); // temp statement to clear buffer
	 		     fgets(UserName_Full,1024,stdin);
				 
				 
				 //Saving full User name
			    char UPD_s3[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
     		   char* UPD_s4 = strcat(UPD_s3, User_NIC);
			    char* UPD_folder4 = strcat(UPD_s4, "\\UserName_Full");
    		    //_mkdir(UPD_folder4);
		
			    char* UPD_path_to_database1;
			
			   UPD_path_to_database1 = strcat(UPD_folder4, "\\UserName_Full.txt");
			   FILE *UPD_FH_UserName_Full;
			   UPD_FH_UserName_Full = fopen (UPD_path_to_database1, "w"); // "w" defines "writing
			   // write to file 
			   fprintf(UPD_FH_UserName_Full, UserName_Full);
			   fclose(UPD_FH_UserName_Full);
	   
			     ByPass1 = 1;
			     goto lable15;
	
	
	
	   
		}else if(UPD1_input5==3){
					 printf("       Enter your phone number: ");
	 		   scanf("%c",&temp); // temp statement to clear buffer
	 		     fgets(User_Phone_Number,30,stdin);
				 
				 
				 //Saving user phone number  
			   char UPD_s9[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
			   char* UPD_s10 = strcat(UPD_s9, User_NIC);
			   char* UPD_folder7 = strcat(UPD_s10, "\\User_Phone_Number");
     		  //_mkdir(UPD_folder7);
		
	 		  char* UPD_path_to_database4;
	
	 		  UPD_path_to_database4 = strcat(UPD_folder7, "\\User_Phone_Number.txt");
			   FILE *UPD_FH_User_Phone_Number;
			   UPD_FH_User_Phone_Number = fopen (UPD_path_to_database4, "w"); // "w" defines "writing
			   // write to file 
			   fprintf(UPD_FH_User_Phone_Number, User_Phone_Number);
			   fclose(UPD_FH_User_Phone_Number);
	   
	   
			     ByPass1 = 1;
			     goto lable15;
	
	
	
		}else if(UPD1_input5==4){
					printf("       Enter your email address: ");
	 		  scanf("%c",&temp); // temp statement to clear buffer
	  		    fgets(User_Email,1024,stdin);
				
				
				
     		  //Saving user email address	 
			   char UPD_s6[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	 		  char* UPD_s5 = strcat(UPD_s6, User_NIC);
	 		  char* UPD_folder5 = strcat(UPD_s5, "\\User_Email");
    		   //_mkdir(UPD_folder5);
		
			   char* UPD_path_to_database2;
	
			   UPD_path_to_database2 = strcat(UPD_folder5, "\\User_Email.txt");
			   FILE *UPD_FH_User_Email;
			   UPD_FH_User_Email = fopen (UPD_path_to_database2, "w"); // "w" defines "writing
	 		  // write to file 
			   fprintf(UPD_FH_User_Email, User_Email);
	 		  fclose(UPD_FH_User_Email);
	              
			     ByPass1 = 1;
			     goto lable15;
	
	
	
	   
		}else if(UPD1_input5==5){
					 printf("       Enter your home address: ");
			    scanf("%c",&temp); // temp statement to clear buffer
	 		     fgets(User_Home_Address,1024,stdin);
				 
				 
				 //Saving user home address	
			   char UPD_s7[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
			   char* UPD_s8 = strcat(UPD_s7, User_NIC);
			   char* UPD_folder6 = strcat(UPD_s8, "\\User_Home_Address");
    		   //_mkdir(UPD_folder6);
		
	  		 char* UPD_path_to_database3;
			
			   UPD_path_to_database3 = strcat(UPD_folder6, "\\User_Home_Address.txt");
			   FILE *UPD_FH_User_Home_Address;
			   UPD_FH_User_Home_Address = fopen (UPD_path_to_database3, "w"); // "w" defines "writing
					   // write to file 
			   fprintf(UPD_FH_User_Home_Address, User_Home_Address);
			   fclose(UPD_FH_User_Home_Address);
	                      
			     ByPass1 = 1;
			     goto lable15;
	
	
	
	   
		}else if(UPD1_input5==6){
					   printf("       Enter your Date of Birth: ");
	  		  scanf("%c",&temp); // temp statement to clear buffer
	  		    fgets(User_Age,30,stdin);
				
				
				   
    		   //Saving user Date of Birth	   
	    
	 		  char UPD_s11[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	 		  char* UPD_s12 = strcat(UPD_s11, User_NIC);
	 		  char* UPD_folder8 = strcat(UPD_s12, "\\User_Age");
     		  //_mkdir(UPD_folder8);
		
			   char* UPD_path_to_database5;
	
			   UPD_path_to_database5 = strcat(UPD_folder8, "\\User_Age.txt");
	 		  FILE *UPD_FH_User_Age;
	 		  UPD_FH_User_Age = fopen (UPD_path_to_database5, "w"); // "w" defines "writing
	 		  // write to file 
	 		  fprintf(UPD_FH_User_Age, User_Age);
	 		  fclose(UPD_FH_User_Age);
		                
			     ByPass1 = 1;
			     goto lable15;
	
	
		}else if(UPD1_input5==7){
		        system("cls");
		        printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Updation Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
				printf("\n                                     Saved and\n");
			    printf("\n                             Account Updation Terminated\n\n\n\n\n\n\n\n\n");
			    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                  ~~~ Press Enter key to go to the previous page ~~~");
			    getch();
				goto lable11;
		}else{
			    printf("\n       Wrong selection\n\n\n\n");
			    printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			    getch();
			    goto lable16;
	
	    }
		
		
		}else if(UPD_input5==2){
			
			
			system("cls");
		        printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Updation Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                             Account Updation Terminated\n\n\n\n\n\n\n\n\n");
			    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			    getch();
				goto lable11;
				
				
				
		}else{
			    printf("\n       Wrong selection\n\n\n\n");
			    printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			    getch();
			    goto lable18;
	    }
     
		 
		
       
		 


   //Delete user account page 		
		 }else if(input5==3){
lable13:				 
			 
		   system("cls");
		   printf("       -------------------------------------------------------------------------       \n");
	       printf("                                Account Deletion Page\n");
	       printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                  You are about to Delete Your Sampath Bank Account!\n");
		   printf("                    Following Account will be Deleted permanently!\n\n\n");
		   
		   printf("                               Account Number  : %s", file_contents3);
           printf("\n                               Account Holder  : %s", file_contents2);
           printf("                               Account Balance : LKR %.2f", file_contents4);
	       printf("\n\n\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
           
		   
	   
		   printf("\n\n\n\n       1) I want to Delete My account\n");
	       printf("       2) I don't want to Delete My account\n\n");
	       
	       printf("       Enter your selection here: ");
           scanf("%d", &input5);
       
		 
		 if (input5==1){
		   system("cls");
		   printf("       -------------------------------------------------------------------------       \n");
	       printf("                                Account Deletion Page\n");
	       printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                  You are about to Delete Your Sampath Bank Account!\n");
		   printf("                    Following Account will be Deleted permanently!\n\n\n");
		   
		   printf("                               Account Number  : %s", file_contents3);
           printf("\n                               Account Holder  : %s", file_contents2);
           printf("                               Account Balance : LKR %.2f", file_contents4);
	       printf("\n\n\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
lable14: 		 


		   printf("       Enter your account password to Delete Your account: ");
	       scanf("%s", &User_Account_Password);
		   
		   int c1= compare(User_Account_Password,Open_File1_line); // calling string compare function  
   
   
          //passwords match - Deleting the account
          if(c1==0){
          system("cls");
		  // Reading deleted_account_index as int
	        int deleted_account_index;
	        FILE *FH_deleted_account_index = fopen("C:\\Sampath Bank\\Main\\deleted_account_index.txt", "r");
	
	        if (FH_deleted_account_index == NULL){
		        printf("Unable to open file\n");
		
		
	       }else{
		       while (fscanf(FH_deleted_account_index, "%d", &deleted_account_index)==1){
			
		       }
		
	  //incrementing the deleted_account_index by one 
		   deleted_account_index++;
		
		
		
		   fclose(FH_deleted_account_index);
	     }
	
	//Updating new deleted_account_index
	      FH_deleted_account_index = fopen("C:\\Sampath Bank\\Main\\deleted_account_index.txt", "w");
	      if (FH_deleted_account_index == NULL){
		    printf("Unable to open file\n");
		    exit(1);
	      }
	
	      fprintf(FH_deleted_account_index, "%d",deleted_account_index);
	      fclose(FH_deleted_account_index);
	
	
	
	// Reading deleted_account_index as char
	    char file_contents9[100];
	    FILE *FH_deleted_account_index_char = fopen("C:\\Sampath Bank\\Main\\deleted_account_index.txt", "r");
	    if (FH_deleted_account_index_char == NULL){
		   printf("Unable to open file\n");
		}else{
		while (fscanf(FH_deleted_account_index_char, "%s", &file_contents9)==1){
		}
		 fclose(FH_deleted_account_index_char);
	    }  
	
	
	
	// Making path and new folder name to rename user account folder
        char FH_Userdata[100] = "C:\\Sampath Bank\\Database\\Userdata\\Deleted_Accounts\\";
        char s49[100] = "_DA_"; 
	    char* s50 = strcat(FH_Userdata, User_NIC);
	    char* s51 = strcat(s50, s49);
	    char* s52 = strcat(s51, file_contents9);
	
	
	//Path to user account folder
	    char s47[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	    char* s48 = strcat(s47, User_NIC);
	

   // printf("Enter directory name: ");
    //scanf("%s", dirName);

        int errch1 = rename(s47,s52);

        if (errch1 == 0){
			system("cls");
		        printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Deletion Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                       Account has been Deleted successfully\n\n\n\n\n\n\n\n\n");
			    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                  ~~~ Press Enter key to go to the previous page ~~~");
          
        }else{
			system("cls");
		        printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Deletion Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                           Unable to Delete the Account\n\n\n\n\n\n\n\n\n");
			    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                  ~~~ Press Enter key to go to the previous page ~~~");
          
        
        }
		
		
		
		
		  
		
		
		
		
		getch();
		system("cls");
		goto lable4;
		  
		  
		  
		   //passwords don't match
           }else{ 	  
	       system("cls");
	       int input7;

      
		   printf("       -------------------------------------------------------------------------       \n");
	       printf("                                Account Deletion Page\n");
	       printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                  You are about to Delete Your Sampath Bank Account!\n");
		   printf("                    Following Account will be Deleted permanently!\n\n\n");
		   
		   printf("                               Account Number  : %s", file_contents3);
           printf("\n                               Account Holder  : %s", file_contents2);
           printf("                               Account Balance : LKR %.2f", file_contents4);
		   printf("\n\n\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
	       printf("\n\n\n\n");
           printf("       Wrong Password\n\n");
           printf("\n");
	  
lable12:
      printf("       1) Re Enter the password\n");
      printf("       2) I don't want to Delete My account\n\n");
	  printf("          Enter your selection here : ");
	  scanf("%d", &input7);
	  
	  if(input7==1){
		        system("cls");
				printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Deletion Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		        printf("                  You are about to Delete Your Sampath Bank Account!\n");
		        printf("                    Following Account will be Deleted permanently!\n\n\n");
		   
		        printf("                               Account Number  : %s", file_contents3);
                printf("\n                               Account Holder  : %s", file_contents2);
                printf("                               Account Balance : LKR %.2f", file_contents4);
				printf("\n\n\n\n");
		        printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
	            printf("\n\n\n\n");
				goto lable14;
	  }else if(input7==2){
		        system("cls");
		        printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Deletion Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                             Account Deletion Terminated\n\n\n\n\n\n\n\n\n");
			    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			    printf("\n                  ~~~ Press Enter key to go to the previous page ~~~");
			    getch();
			   goto lable11;
	  }else{
		  system("cls");
				printf("       -------------------------------------------------------------------------       \n");
	            printf("                                Account Deletion Page\n");
	            printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		        printf("                  You are about to Delete Your Sampath Bank Account!\n");
		        printf("                    Following Account will be Deleted permanently!\n\n\n");
		   
		        printf("                               Account Number  : %s", file_contents3);
                printf("\n                               Account Holder  : %s", file_contents2);
                printf("                               Account Balance : LKR %.2f", file_contents4);
				printf("\n\n\n\n");
		        printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
	            //printf("\n\n\n\n");
				printf("\n       Wrong selection\n");
				
			    goto lable12;
	  }
    }
			   
			   
			   //=======================================================================================================================================================
		   }else if(input5==2){
			   system("cls");
		       printf("       -------------------------------------------------------------------------       \n");
	           printf("                                Account Deletion Page\n");
	           printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			   printf("\n                             Account Deletion Terminated\n\n\n\n\n\n\n\n\n");
			   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			   printf("\n                  ~~~ Press Enter key to go to the previous page ~~~");
			   getch();
			   goto lable11;
		   }else{
			   printf("\n       Wrong selection\n\n\n\n");
			   printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			   getch();
			   
			   goto lable13;
		   }
		   
		   
		   
		   

	 






       //Going to the previous page		
		 }else if(input5==4){
		 system("cls");
	     goto lable10;


       //Wrong Selection. Redirecting to the current page	   
		 }else{
			  printf("\n       Wrong selection\n\n\n\n");
			  printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			  getch();
			  goto lable11;
		 }
		  
		  
 //Log out from the account
	  }else if(input5==5){
		  system("cls");
		  goto lable4;
		  
 //Wrong Selection. Redirecting to the current page
	  }else{
		        printf("\n       Wrong selection\n\n\n\n");
			    printf("\n                        ~~~ Press Enter to ReLoad the Page ~~~");
			    getch();
				system("cls");
				goto lable10;
	  }
   
   
   
   
     
   
   
   
   
   
      //passwords don't match
      }else{ 	  
	  system("cls");
	  int input4;

      printf("       -------------------------------------------------------------------------       \n");
      printf("                              Welcome to Sampath Bank\n");
      printf("       -------------------------------------------------------------------------       \n\n\n\n");
      printf("       Wrong Password\n\n");
      printf("\n");
	  
lable9:
      printf("       1) Re Enter the password\n");
      printf("       2) Goto the main menu\n\n");
	  printf("          Enter your selection here : ");
	  scanf("%d", &input4);
	  
	  if(input4==1){
		        system("cls");
				goto lable6;
	  }else if(input4==2){
		        system("cls");
				goto lable4;
	  }else{
				printf("\nWrong selection\n");
				
			    goto lable9;
	  }
    }



   
   
   
   
   
   
   
   
   //if user don't have an account -> directing to the login, account creation page
       }else{
	     
		 system("cls");
		 printf("       -------------------------------------------------------------------------       \n");
         printf("                              Welcome to Sampath Bank\n");
         printf("       -------------------------------------------------------------------------       \n\n\n\n");
         printf("            You don't have an Sampath Bank account. Please create an account\n");
		 printf("\n\n\n\n");
		 printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 printf("                        ~~~ Press Enter key to continue ~~~");
		 getch();
		 system("cls");
	goto lable4;
	   
	   
	   
	   
	   }
	   
	   
	   
	   
	   
//User creating a new account
 //Getting basic User informations
   }else if(input1 == 2){
	   
       lable3:
	   system("cls");
	   printf("       -------------------------------------------------------------------------       \n");
	   printf("                             New Account Creation Page\n");
	   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
	   printf("       Enter your NIC number: ");
	   scanf("%s", &User_NIC);
	
 //checking whether this NIC already has an account or not 	
	   char* folder1;
       char s1[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
	
	
       folder1 = strcat(s1, User_NIC);
       struct stat sb;

 //if user already has an account -> directing to the login page 
       if (stat(folder1, &sb) == 0 && S_ISDIR(sb.st_mode)) {
		   system("cls");
		   printf("       -------------------------------------------------------------------------       \n");
           printf("                              Welcome to Sampath Bank\n");
           printf("       -------------------------------------------------------------------------       \n\n\n\n");
           printf("        You already have an Sampath Bank Account. Please Login to your Account\n");
		   printf("\n\n\n\n");
		   printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		   printf("                        ~~~ Press Enter key to continue ~~~");
		   getch();
		   system("cls");
		   
		   
		   input1 = 1;
		   goto lable4;
   
       }else{
		
	       printf("       Enter your name with initials: ");
	       scanf("%c",&temp); // temp statement to clear buffer
	       fgets(UserName_Initials,1024,stdin);
	   
	       printf("       Enter your full name: ");
	   // scanf("%c",&temp); // temp statement to clear buffer
	      fgets(UserName_Full,1024,stdin);
		
	      printf("       Enter your phone number: ");
	   // scanf("%c",&temp); // temp statement to clear buffer
	      fgets(User_Phone_Number,30,stdin);
	   
	      printf("       Enter your email address: ");
	  // scanf("%c",&temp); // temp statement to clear buffer
	      fgets(User_Email,1024,stdin);
	   
	      printf("       Enter your home address: ");
	   // scanf("%c",&temp); // temp statement to clear buffer
	      fgets(User_Home_Address,1024,stdin);
	   
	      printf("       Enter your Date of Birth: ");
	   // scanf("%c",&temp); // temp statement to clear buffer
	      fgets(User_Age,30,stdin);
		
	  
	 
	    /*Empty Space*/ printf("\n");
	
	   
	   

        lable2:
	
        //Creating a password for the new account
		system("cls");
		printf("       -------------------------------------------------------------------------       \n");
	    printf("                             New Account Creation Page\n");
	    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
	    printf("       Create a Password for your New Account: ");
	    scanf("%s", &User_Account_Password);
	
	    printf("       ReEnter the Password to confirm: ");
	    scanf("%s", &Confirming_User_Account_Password);
	
	
	
	/*
        //Determining whether user has entered the same passwords
        while(User_Account_Password[i]!='\0' || Confirming_User_Account_Password[i]!='\0')
        {
           if(User_Account_Password[i]!=Confirming_User_Account_Password[i])
           {
             chk = 1;
             break;
           }
         i++;
        }
		
		*/
		chk = compare(User_Account_Password,Confirming_User_Account_Password);
		
	
       //Passwords created successfully
       if(chk==0){
		 system("cls");
		 printf("       -------------------------------------------------------------------------       \n");
	     printf("                             New Account Creation Page\n");
	     printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 
    	 printf("                       Password has been created successfully\n");
		 printf("\n\n\n\n");
		 printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 printf("\n\n                        ~~~ Press Enter key to continue ~~~");
		 getch();
		 
		 
		 
	  //Making an Initial Deposit
		 system("cls");
	lable7:
		 printf("       -------------------------------------------------------------------------       \n");
	     printf("                             New Account Creation Page\n");
	     printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 printf("       Make an initial deposit that is more than or equal to LKR 3000/-\n");
		 printf("       How much are you going to deposit: LKR ");
		 scanf("%f", &Initial_deposit);
		 Initial_deposit = Initial_deposit*100;
		 Initial_deposit = round(Initial_deposit);
		 Initial_deposit = Initial_deposit / 100;
		 
		//Check whether Initial_deposit is greater than or equal to LKR 3000
		 if(Initial_deposit>=3000){
			printf("\n\n          Initial deposit of LKR %.2f has been Deposited to your Account\n\n\n\n\n", Initial_deposit); 
			printf("\n\n\n\n");
		    printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
			printf("                        ~~~ Press Enter key to continue ~~~");
		    getch();
		 }else{
			printf("\n       >>>  The initial deposit should be more than or equal to LKR 3000/-  <<<\n\n\n");
		    
		lable8:	
			printf("       1) Redo to initial deposit\n");
			printf("       2) Goto the main menu\n\n");
			printf("          Enter your selection here: ");
			int input3;
			scanf("%d", &input3);
			
			if(input3==1){
				system("cls");
				goto lable7;
			}else if(input3==2){
				system("cls");
				goto lable4;
			}else{
				printf("\n       Wrong selection\n");
			    goto lable8;
		 }
		 }
		 
		 

		
	     //Creating a database folder for the user
	     char* folder2;
	     char s2[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
         folder2 = strcat(s2, User_NIC);
         _mkdir(folder2);
		 
		 
		      
        //Creating a common path	 
	    char* path_to_database;
        
	
	   
        //Saving data to text files
        //Saving User name with initials
        char* folder3 = strcat(s2, "\\UserName_Initials");
    
	    _mkdir(folder3);
		
        path_to_database = strcat(folder3, "\\UserName_Initials.txt");
	    FILE *FH_UserName_Initials;
	    FH_UserName_Initials = fopen (path_to_database, "w"); // "w" defines "writing
	    // write to file
	    fprintf(FH_UserName_Initials, UserName_Initials);
	    fclose(FH_UserName_Initials);
	
	
        //Saving full User name
	    char s3[100] = "C:\\Sampath Bank\\Database\\Userdata\\";
        char* s4 = strcat(s3, User_NIC);
	    char* folder4 = strcat(s4, "\\UserName_Full");
        _mkdir(folder4);
		
	    char* path_to_database1;
	
	   path_to_database1 = strcat(folder4, "\\UserName_Full.txt");
	   FILE *FH_UserName_Full;
	   FH_UserName_Full = fopen (path_to_database1, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_UserName_Full, UserName_Full);
	   fclose(FH_UserName_Full);
	   
	   
       //Saving user phone number  
	   char s9[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s10 = strcat(s9, User_NIC);
	   char* folder7 = strcat(s10, "\\User_Phone_Number");
       _mkdir(folder7);
		
	   char* path_to_database4;
	
	   path_to_database4 = strcat(folder7, "\\User_Phone_Number.txt");
	   FILE *FH_User_Phone_Number;
	   FH_User_Phone_Number = fopen (path_to_database4, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_User_Phone_Number, User_Phone_Number);
	   fclose(FH_User_Phone_Number);
	   
	   
       //Saving user email address	 
	   char s6[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s5 = strcat(s6, User_NIC);
	   char* folder5 = strcat(s5, "\\User_Email");
       _mkdir(folder5);
		
	   char* path_to_database2;
	
	   path_to_database2 = strcat(folder5, "\\User_Email.txt");
	   FILE *FH_User_Email;
	   FH_User_Email = fopen (path_to_database2, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_User_Email, User_Email);
	   fclose(FH_User_Email);
	   
	   
       //Saving user home address	
	   char s7[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s8 = strcat(s7, User_NIC);
	   char* folder6 = strcat(s8, "\\User_Home_Address");
       _mkdir(folder6);
		
	   char* path_to_database3;
	
	   path_to_database3 = strcat(folder6, "\\User_Home_Address.txt");
	   FILE *FH_User_Home_Address;
	   FH_User_Home_Address = fopen (path_to_database3, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_User_Home_Address, User_Home_Address);
	   fclose(FH_User_Home_Address);
	   
	   
	   
       //Saving user Date of Birth	   
	    
	   char s11[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s12 = strcat(s11, User_NIC);
	   char* folder8 = strcat(s12, "\\User_Age");
       _mkdir(folder8);
		
	   char* path_to_database5;
	
	   path_to_database5 = strcat(folder8, "\\User_Age.txt");
	   FILE *FH_User_Age;
	   FH_User_Age = fopen (path_to_database5, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_User_Age, User_Age);
	   fclose(FH_User_Age);
		 
		 
       //Saving User_Account_Password 
	    
	   char s13[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s14 = strcat(s13, User_NIC);
	   char* folder9 = strcat(s14, "\\User_Account_Password");
       _mkdir(folder9);
		
	   char* path_to_database6;
	
	   path_to_database6 = strcat(folder9, "\\User_Account_Password.txt");
	   FILE *FH_User_Account_Password;
	   FH_User_Account_Password = fopen (path_to_database6, "w"); // "w" defines "writing
	   // write to file 
	   fprintf(FH_User_Account_Password, User_Account_Password);
	   fclose(FH_User_Account_Password);
		 
		 
		
 //Creating a Bank Account Number for the user 
     //Reading the current account number from the database as an integer	   
	   int current_account_number_int;
	   FILE *FH_current_account_number = fopen("C:\\Sampath Bank\\Main\\current_account_number.txt", "r");
	
	   if (FH_current_account_number == NULL){
		printf("Unable to open file\n");
		
		
	   }else{
		while (fscanf(FH_current_account_number, "%d", &current_account_number_int)==1){
			
		}
		
	  //incrementing the current account number by one to generate a new account number for the new user
		current_account_number_int++;
		//printf("%d \n",current_account_number_int);
		
		
		 fclose(FH_current_account_number);
	   }
	   
	   
	   //Saving User_Account_Number to new user's database
	   char s15[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s16 = strcat(s15, User_NIC);
	   char* folder10 = strcat(s16, "\\User_Account_Number");
       _mkdir(folder10);
		
	   char* path_to_database7;
	
	   path_to_database7 = strcat(folder10, "\\User_Account_Number.txt");
	   FILE *FH_User_Account_Number;
	   FH_User_Account_Number = fopen (path_to_database7, "w"); // "w" defines "writing
	 
	     if (FH_User_Account_Number == NULL){
		  printf("Unable to open file\n");
		  exit(1);
	     }
		 
	   fprintf(FH_User_Account_Number, "%d",current_account_number_int);
	   fclose(FH_User_Account_Number);
	   
	   
	   
	   
	   
	   //Saving Initial_deposit to new user's database
	   char s17[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s18 = strcat(s17, User_NIC);
	   char* folder11 = strcat(s18, "\\User_Initial_deposit");
       _mkdir(folder11);
		
	   char* path_to_database8;
	
	   path_to_database8 = strcat(folder11, "\\User_Initial_deposit.txt");
	   FILE *FH_User_Initial_deposit;
	   FH_User_Initial_deposit = fopen (path_to_database8, "w"); // "w" defines "writing
	 
	     if (FH_User_Initial_deposit == NULL){
		  printf("Unable to open file\n");
		  exit(1);
	     }
		 
	   fprintf(FH_User_Initial_deposit, "%f",Initial_deposit);
	   fclose(FH_User_Initial_deposit);
	   
	   
	   
	   
	   
	   //Saving deposit to new user's database 
	   char s17a[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s18a = strcat(s17a, User_NIC);
	   char* folder11a = strcat(s18a, "\\User_Account_Balance");
       _mkdir(folder11a);
		
	   char* path_to_database8a;
	
	   path_to_database8a = strcat(folder11a, "\\User_Account_Balance.txt");
	   FILE *FH_User_Initial_deposita;
	   FH_User_Initial_deposita = fopen (path_to_database8a, "w"); // "w" defines "writing
	 
	     if (FH_User_Initial_deposita == NULL){
		  printf("Unable to open file\n");
		  exit(1);
	     }
		 
	   fprintf(FH_User_Initial_deposita, "%f",Initial_deposit);
	   fclose(FH_User_Initial_deposita);
	   
	   
	   
	   
 //Saving Initial_deposit to the Transactions_Database
	   
	   char *Date_and_Time[30];
	   char temp1[30] = "";
	   {time_t current_time=time(NULL); struct tm*tm=localtime(&current_time); 
       //printf("       Transaction Date and Time : %s", asctime(tm)); 
	   Date_and_Time[30] = strcat(temp1,asctime(tm));
	   } 
		
		
	   char s37[100] = "C:\\Sampath Bank\\Database\\Userdata\\";   
	   char* s38 = strcat(s37, User_NIC);
	   char* folder21 = strcat(s38, "\\Transactions_Database");
       _mkdir(folder21);
		
	   char* path_to_database18;
	
	   path_to_database18 = strcat(folder21, "\\Transactions_Database.txt");
	   FILE *Transactions_Database;
	   Transactions_Database = fopen (path_to_database18, "w"); // "w" defines "writing
	 
	     if (Transactions_Database == NULL){
		  printf("Unable to open file\n");
		  exit(1);
	     }
		 
	   fprintf(Transactions_Database, "       %s       Deposited    --------------------->       %.2f\n       Balance      --------------------->       %.2f\n\n\n",temp1,Initial_deposit,Initial_deposit);
	   fclose(Transactions_Database);
	   
	   
	   
	   
	   
	    
//Updating ongoing account number database
	   FH_current_account_number = fopen("C:\\Sampath Bank\\Main\\current_account_number.txt", "w");
	
	     if (FH_current_account_number == NULL){
		  printf("Unable to open file\n");
		  exit(1);
	     }
	
	  fprintf(FH_current_account_number, "%d",current_account_number_int);
	  fclose(FH_current_account_number);
		 
		 system("cls");
		 printf("       -------------------------------------------------------------------------       \n");
	     printf("                             New Account creation page\n");
	     printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 printf("            Your New Sampath Bank Account has been created successfully!\n");
		 printf("               You can now log in to your account and do transactions\n");
		 printf("\n\n\n\n");
		 printf("       -------------------------------------------------------------------------       \n\n\n\n\n");
		 printf("                        ~~~ Press Enter key to continue ~~~");
		 getch();
		 system("cls");
		 
	     
		 
	goto lable4;
		 
		 

	 //Passwords do not match
	 }else{
	   
	   chk=0;
       printf("\n\n\n       Passwords do not match\n");
	   printf("       Select one of the below options\n\n");
       lable5:	
	   printf("       1 - ReCreate a Password\n");
	   printf("       2 - Go to the New Account Creation Page and start from the beginning\n");
	   printf("       3 - Go to the Main menu\n");
	   scanf("%d", &input2);
		
		 if(input2==1){
			system("cls");
			goto lable2;
			
		 }else if(input2==2){
			system("cls");
			printf("       Creating a New User Account again\n");
			goto lable3;
			
		 }else if(input2==3){
			system("cls");
			goto lable4;
		 }else{
			system("cls");
			printf("       Wrong input/n");
			printf("       Please select again\n");
			goto lable5;
		 }
	}
   }
	   


//User has entered a wrong number. Going to the selection page again
 }else{
   system("cls");
   printf("      You have entered a wrong number\n\n\n"); 
   goto lable1;
 }
   
  return 0;
  
}//End of the Main function









/* This Function Reads and stores the whole contents of the file with filename into a 
   dynamically allocated char array on the heap, returns a pointer to this char
   array (or NULL if there was an error reading the file contents)
*/
   
char *read_file(char *filename)
{
  // file pointer variable used to access the file
  FILE *file;
  
  // attempt to open the file in read mode
  file = fopen(filename, "r");
  
  // if the file fails to open, return NULL as an error return value
  if (file == NULL) return NULL;
  
  // move the file pointer to the end of the file
  fseek(file, 0, SEEK_END); 

  // fseek(file) will return the current value of the position indicator, 
  // which will give us the number of characters in the file
  int length = ftell(file);

  // move file pointer back to start of file so we can read each character
  fseek(file, 0, SEEK_SET);
  
  // dynamically allocate a char array to store the file contents, we add 1 to 
  // length for the null terminator we will need to add to terminate the string
  char *string = malloc(sizeof(char) * (length+1));
  
  // c will store each char we read from the string
  char c;

  // i will be an index into the char array string as we read each char
  int i = 0;

  // keep reading each char from the file until we reach the end of the file
  while ( (c = fgetc(file)) != EOF)
  {
    // store char into the char array string
    string[i] = c;

    // increment i so we store the next char in the next index in the char array
    i++;
  }

  // put a null terminator as the final char in the char array to properly 
  // terminate the string
  string[i] = '\0';
  
  // close the file as we are now done with it
  fclose(file);
  
  // return a pointer to the dynamically allocated string on the heap
  return string;
}





// This function Compare two strings.  
int compare(char a[],char b[])  
{  
    int flag=0,i=0,chk=0;  // integer variables declaration  
	
	
	  //Determining whether user has entered the same passwords
        while(a[i]!='\0' || b[i]!='\0')
        {
           if(a[i]!=b[i])
           {
             chk = 1;
             break;
           }
         i++;
        }
	
       //Strings match
       if(chk==0){
		

	  //Strings don't match
	   }else{
		   chk=0;
		   flag = 1;
	   }	
	
	
 //Returning to Main
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  