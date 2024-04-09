
#include<iostream> //Input Output
#include<fstream> // File Stream - creates file & write info
#include<string.h> // String & Memory Handling 
#include<windows.h> // Windows API - "Used in Sleep"
#include<stdlib.h> // Memory allocation, process control


using namespace std;


//LOGIN
void logmenu();
void login();
void registr();
void forgot();
void loading();
void userout();

//MULTIPROGRAM (COMPILATION OF PROGRAMS)
void multiprog();



void userout() //USER LOGOUT LOADING SCREEN
	{ //USER LOGOUT LOADING (BACKEND)
		cout << "Starting delay." << endl;
	
	
	system("cls");

cout << "\a";
cout << "\a";
cout << "\a";

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |                                  |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(500);
    
    
   	system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |||||||                            |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(100);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |||||||||                          |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(300);
      
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |||||||||||||                      |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(200);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |||||||||||||||||||                |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(150);
   
      
      
         system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            ||||||||||||||||||||||             |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(150);
         
      
      
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            |||||||||||||||||||||||||||        |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(150);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             ____________LOGGING OUT___________";
          cout<<"\n                            ||||||||||||||||||||||||||||||||||||";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(100);
   system("cls");

}


void loading() //LOADING SCREEN
	{ //LOADING (BACKEND)
		cout << "Starting delay." << endl;
	
	
	system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |                                  |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(100);
    
    
   	system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |||||||                            |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(100);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |||||||||                          |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(200);
      
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |||||||||||||                      |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(100);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |||||||||||||||||||                |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(150);
   
      
      
         system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            ||||||||||||||||||||||             |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";


	Sleep(100);
         
      
      
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            |||||||||||||||||||||||||||        |";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(150);
   
   
   system("cls");

cout<<"\n\n\n\n\n\n                              ______   _______    __       __      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU      ";
          cout<<"\n                            UUU    UUU UU     UU  UUU     UUU      ";
          cout<<"\n                            UU         UU     UU  UUUUU_UUUUU      ";
          cout<<"\n                            UU      _  UU     UU  UU  UUU  UU      ";
          cout<<"\n                            UUU____UUU UU_____UU  UU       UU      ";
          cout<<"\n                             UUUUUUUU  UUUUUUUU   UU       UU    \n";
          cout<<"\n                          C O L E G I O   D E   M O N T A L B A N \n";
          cout<<"\n                             _____________LOADING______________";
          cout<<"\n                            ||||||||||||||||||||||||||||||||||||";
          cout<<"\n                             `````````````````````````````````` \n";
          cout<<"\n                             (c) Copyright 2023 | JLNQ Visuals";
          

	Sleep(100);
   system("cls");

}


main() //WELCOME SCREEN
{ //(WELCOME (BACKEND)

loading();
system("cls");
	
  cout<<"\n\n\n\n                           ======== COLEGIO DE MONTALBAN ========\n";
  cout<<"                 ============ INSTITUTE OF COMPUTER STUDIES ============\n";
cout<<"\n             ________     ______      _____     _     _     _____        ____    ";
cout<<"\n            [[[[[[[[[    [[[[[[[[    [[[[[[[   [[[   [[[   [[[[[[[     {{{{{{{   ";
cout<<"\n           [[[          ]]]    ]]]  ]]]   ]]]  ]]]   ]]]  ]]]   ]]]   {{{   {{{  ";
cout<<"\n           ]]]   ____   [[[____[[[  [[[   [[[  [[[   [[[  [[[___]]]        }}}}  ";
cout<<"\n           [[[   ]]]]   ]]]]]]]]]   ]]]   ]]]  ]]]   ]]]  ]]][[[[[       {{{{{   ";
cout<<"\n           ]]]_____[[[  [[[   [[[   [[[___[[[  [[[___[[[  [[[           }}}}__   ";
cout<<"\n            [[[[[[[[[   ]]]    ]]]   ]]]]]]]    ]]]]]]]   ]]]         {{{{{{{{{  ";   

cout<<"\n\n             --  M U L T I P R O G R A M  C + +       V e r s i o n . 1 . 1  --\n ";

cout<<"\n                        _____________________________________________";
cout<<"\n                       |         - PRESS ENTER TO CONTINUE -         |";
cout<<"\n                        `````````````````````````````````````````````";
cout<<"\n\n                              (c) Copyright 2023 | JLNQ Visuals\n";
  cout<<"\n                           * QUILINO , JOHN LLOYD N. | BSCPE STUDENT *";
cout<<"\n            for more questions, dont hesitate to contact : quilino.jlnq@gmail.com";




	cin.get();
	logmenu();
	
}


void logmenu() //LOGIN DASHBORD
{ //LOGIN DASHBORD (FRONTEND)

		loading();
        int choice;
		system("cls");
	
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";
  cout<<"\n                                       W E L C O M E !                                   ";
  cout<<"\n                              PLEASE SELECT OPTIONS DOWN BELOW!                          ";
cout<<"\n           ____                                  ____   ";
cout<<"\n          | #1 |____________________________    | #2 |____________________________         ";
cout<<"\n          |    LOGIN                        |   |    REGISTER USER ACCOUNT        |        ";
cout<<"\n           ``````````````````````````````````    ``````````````````````````````````        ";
cout<<"\n           ____                                  ____   ";
cout<<"\n          | #3 |____________________________    | #4 |____________________________         ";
cout<<"\n          |    FORGET USERNAME/ PASSWORD    |   |    EXIT THIS PROGRAM            |        ";
cout<<"\n           ``````````````````````````````````    ``````````````````````````````````        ";
cout<<"\n         ______________________________________________________________________________  \n";
cout<<"\n            PLEASE ENTER YOUR CHOICE HERE: ";
        
        
		//BACKEND
		
		cin>>choice;
		cout<<endl;
        switch(choice)
        
        
    
        { //CASE STATEMENT - CONTAINS EXIT & MENU ERROR PROMPT
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        
						system("cls");
						loading();
						
cout<<"\n\n\n           (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n             _     _       ___     __      ___     __           ___                         ";
cout<<"\n            {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n            }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n            {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n            }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n            {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";

cout<<"\n            M U L T I P R O G R A M   C + +   | V E R S I O N   1 . 1                       ";
cout<<"\n         ______________________________________________________________________________   \n";

cout<<"\n                             C O L E G I O   D E   M O N T A L B A N                        ";
cout<<"\n                    I N S T I T U T E   O F   C O M P U T E R   S T U D I E S             \n";

cout<<"\n                  THIS PROGRAM IS DEVELOPED BY:                 A.Y. 2022- 2023             ";
cout<<"\n                  QUILINO, JOHN LLOYD N.                             SECTION 1F             ";
cout<<"\n                                                                                            ";
cout<<"\n                  Bachelor of Science                       Thank you for using             ";
cout<<"\n                  In Computer Engineering                         this program!             ";
cout<<"\n                                                                                            ";
cout<<"\n         ______________________________________________________________________________   \n";

cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
cout<<"\n                                      quilino.jlnq@gmail.com                                ";

                        Sleep(5000);
						break;
                        
                        
                        
                default:
                        system("cls");
                        
                        loading();
                    
				
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             ERROR!";
cout<<"\n             INVALID INPUT, PLEASE TRY AGAIN\n";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";

					
						Sleep(1000);
						
						logmenu();
        }

}


void login() 
{ //USER INPUT (LOGIN)
        int count;
        string user,pass,u,p;
        
		
		loading();
		
system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                                 L O G I N   T O   A C C O U N T                               ";
cout<<"\n                          ENTER YOUR CREDENTIALS TO ACCESS YOUR ACCOUNT                     ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             USERNAME: ";
cin>>user;

cout<<"\n             PASSWORD: ";
 cin>>pass;
		
		
		
		//USER LOGIN (BACKEND)

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        
		
		if(count==1)
        {
                loading();
				
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             HELLO, " <<user<< "!";
cout<<"\n             YOU HAVE SUCCESSFULLY LOGGED IN TO MULTIPROG C++!";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";
				

				
				Sleep(3000);
                multiprog();
        }
        else
        {
                system("cls");
				
				
				
				loading();
				
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             LOGIN ERROR!";
cout<<"\n             PLEASE CHECK IF YOUR CREDENTIALS IS CORRECT\n";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";

                
								
				
				
				Sleep(2000);
                logmenu();
  
                
        }
}


void registr()
{ //USER ACCOUNT REGISTRATION

        string reguser,regpass,ru,rp;
        system("cls");
        
		
		//USER INPUT (CREDENTIALS)
		
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                              C R E A T E   N E W   A C C O U N T                           ";
cout<<"\n                        ENTER YOUR CREDENTIALS TO REGISTER YOUR ACCOUNT                     ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             USERNAME: ";
cin>>reguser;
cout<<"\n             PASSWORD: ";
cin>>regpass;





		//BACKEND
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        
        
        
        //REGISTERED SUCCESSFULLY
        
		loading();


cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             CONGRATULATIONS!";
cout<<"\n             YOU HAVE SUCCESSFULLY REGISTERED TO MULTIPROG C++!";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";

		
		Sleep(2000);
        logmenu();


}


void forgot()
{ //USER FORGET PASSWORD
        int ch;
        
		system("cls");
		loading();
		
		
		
		
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                            F O R G O T  Y O U R  P A S S W O R D ?                       ";
cout<<"\n                           WE'LL HELP YOU REMEMBER YOUR CREDENTIALS BY                    ";
cout<<"\n           ____                                  ____                                     ";
cout<<"\n          | #1 |____________________________    | #2 |____________________________        ";
cout<<"\n          |    SEARCH BY USERNAME           |   |    SEARCH BY PASSWORD           |       ";
cout<<"\n           ``````````````````````````````````    ``````````````````````````````````       ";
cout<<"\n                               ____                                                       ";
cout<<"\n                              | #3 |____________________________                          ";
cout<<"\n                              |    BACK TO DASHBOARD            |                         ";
cout<<"\n                              ``````````````````````````````````                          ";
cout<<"\n         ______________________________________________________________________________ \n";

cout<<"\n            PLEASE ENTER YOUR CHOICE HERE: ";
cin>>ch;
        
        
        
        
        
        
		switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        system("cls");
						
						
						//USERNAME BASED
			
			
				loading();		
						
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                            F O R G O T  Y O U R  P A S S W O R D ?                       ";
cout<<"\n                           WE'LL HELP YOU REMEMBER YOUR CREDENTIALS BY                       ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             PLEASE ENTER USERNAME: ";
						
 			
						
						
						cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                system("cls");
								
								
				loading();		
						
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n            ACCOUNT FOUND IN DATABASE! ";								
cout<<"\n             YOUR PASSWORD IS: "<< sp ;	


cout<<"\n\n\n                              _____________________________________       ";
cout<<"\n                             |       PRESS ENTER TO PROCEED        |      ";
cout<<"\n                              ``````````````````````````````````````      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";								
								
								

							
								
								cin.get();
                                cin.get();
                                system("cls");
                                logmenu();
                        }
                        else
                        {
                                system("cls");
								
								
								
								
								
		loading();


cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n            ERROR!";
cout<<"\n             SORRY, YOUR CREDENTIALS IS NOT FOUND IN OUR DATABASE!";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";								

								
                                cin.get();
                                cin.get();
                                logmenu();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        system("cls");
						
						
						
						//PASSWORD BASED
						
                       
			loading();		
						
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                            F O R G O T  Y O U R  P A S S W O R D ?                       ";
cout<<"\n                           WE'LL HELP YOU REMEMBER YOUR CREDENTIALS                       ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             PLEASE ENTER PASSWORD: ";										
						cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                system("cls");
								
								
								
								
								
								
								
				loading();		
						
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n            ACCOUNT FOUND IN DATABASE! ";								
cout<<"\n             YOUR USERNAME IS: "<< su2 ;	


cout<<"\n\n\n                              _____________________________________       ";
cout<<"\n                             |       PRESS ENTER TO PROCEED        |      ";
cout<<"\n                              ``````````````````````````````````````      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";									


                                cin.get();
                                cin.get();
                                system("cls");
                                logmenu();
                        }
                        else
                        {
                                system("cls");
								
								
			loading();


cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n            ERROR!";
cout<<"\n              CREDENTIALS NOT FOUND IN DATABASE!";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";								
								

								
                                cin.get();
                                cin.get();
                                system("cls");
                                logmenu();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        system("cls");
                        logmenu();
                        return; //it fixes exit glitch
                
	
			
                default:
                        
                        system("cls");
						
						
						
						
                        loading();
                    
				
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             ERROR!";
cout<<"\n             INVALID INPUT, PLEASE TRY AGAIN\n";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";


						
						
						Sleep(100);
						forgot();
        }
}

}


void multiprog()
{ //PROGRAM COMPILATION
	
	
	void prog1(); //DISPLAY HELLO WORLD
	void prog2(); //DISPLAY HOUSE
	void prog3(); //LOWEST NUMBER IDENTIFIER
	void prog4(); //HIGHER NUMBER IDENTIFIER
	void prog5(); //AVERAGE CALCULATOR WITH EQUIVALENT GRADE
	void prog6(); //BASIC CALCULATOR
	void prog7(); //INCREMENT LOOPING (THE USER IS THE ONE WHO WILL INPUT THE LIMIT)
	void prog8(); //DECREMENT LOOPING (THE USER IS THE ONE WHO WILL INPUT THE STARTING POINT)
	void prog9(); //VOWEL & CONSONANT
	
	void logout(); //LOGOUT USER ACCOUNT

	
	int progchoice;
	
	system("cls");
	loading();
cout<<"\n          (c) Copyright 2023 | JLNQ Visuals                                             ";
  cout<<"\n            _     _       ___     __      ___     __           ___                    ";
  cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _       ";
  cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_     ";
  cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{    ";
  cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}      ";
  cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                 \n";

cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
  cout<<"\n         ------------------------------------------------------------------------------ ";
  cout<<"\n                                       W E L C O M E !                                    ";
  cout<<"\n                              PLEASE SELECT OPTIONS DOWN BELOW!                           ";
  cout<<"\n          ____________________________________ ____________________________________       ";
  cout<<"\n         | 1.) DISPLAY HELLO WORLD            | 5.) AVERAGE CALCULATOR             |      ";
  cout<<"\n          ``````````````````````````````````````````````````````````````````````````      ";
  cout<<"\n         | 2.) DISPLAY HOUSE                  | 6.) CALCULATOR                     |      ";
  cout<<"\n          ``````````````````````````````````````````````````````````````````````````      ";
  cout<<"\n         | 3.) LOWER NUMBER IDENTIFIER        | 7.) INCREMENT LOOPING              |      ";
  cout<<"\n          ``````````````````````````````````````````````````````````````````````````      ";
  cout<<"\n         | 4.) HIGHER NUMBER IDENTIFIER       | 8.) DECREMENT LOOPING              |      ";
  cout<<"\n          ``````````````````````````````````````````````````````````````````````````      ";
  cout<<"\n             | 0.) LOGOUT THIS ACCOUNT        | 9.) VOWEL & CONSONANT          |          ";
  cout<<"\n              ``````````````````````````````````````````````````````````````````           ";
  cout<<"\n         ______________________________________________________________________________ \n";

  cout<<"\n            PLEASE ENTER YOUR CHOICE HERE: ";
	
	cin>>progchoice;
	switch(progchoice)
	
	{ // PROGRAM COMPILATION (CASE STATEMENT)
	
	
	case 1: 
		
	    	prog1(); //
        	break;

	case 2: 
		
	   		prog2(); //
        	break;

	case 3: 
		
	    	prog3(); //
        	break;

	case 4: 
		
	    	prog4(); //
        	break;

	case 5: 
		
	    	prog5(); //
        	break;

	case 6: 
		
	    	prog6(); //
        	break;

	case 7: 
		
	    	prog7(); //
        	break;

	case 8: 
		
	    	prog8(); //
        	break;

	case 9: 
		
	    	prog9(); //
        	break;

	case 0: 
		
	    	logout(); //LOGS OUT USER ACCOUNT
        	break;


	default: // USER INPUT ERROR
					
		system("cls");	
		loading();
				
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n             ERROR!";
cout<<"\n             INVALID INPUT, PLEASE TRY AGAIN\n";
cout<<"\n         ______________________________________________________________________________\n";

cout<<"\n                                   FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:";
cout<<"\n                                                               quilino.jlnq@gmail.com";
		

		Sleep(2000);
		multiprog();
			
	}
}





//COMPILED PROGRAM (SOURCE CODES)

void prog1() //DISPLAY HELLO WORLD (DONE)
{
	loading();
	
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";
	
	cout<<"\n\n\n";
	cout<<"\n                --------------------------------------------------------------";
	cout<<"\n                | helloworld.exe - Dev C++                            | ? | x |";
	cout<<"\n                --------------------------------------------------------------";
	cout<<"\n                |                                                             |";
	cout<<"\n                |   HELLO WORLD!                                              |";	
	cout<<"\n                |   -------------------                                       |";
	cout<<"\n                |   Process exited after 0.1144 seconds with return value 0   |";
	cout<<"\n                |   Press any key to continue . . .                           |";
	cout<<"\n                |                                                             |";
	cout<<"\n                |                                                             |";
	cout<<"\n                |                                                             |";
	cout<<"\n                --------------------------------------------------------------";
    cout<<"\n                                _________________________________ ";
    cout<<"\n                               |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	

	
	cin.get();
	cin.get();
	multiprog();
	
}

void prog2() //DISPLAY HOUSE (DONE)
{
	loading();
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";
	
	cout<<"\n\n\n";
	cout<<"\n                -----------------------------------------------------------------";
	cout<<"\n                | display house.exe - Dev C++                            | ? | x |";
	cout<<"\n                -----------------------------------------------------------------";
    cout<<"\n                |                                                                |";
    cout<<"\n                |                         000000000000000                        |";
 	cout<<"\n                |                        0===============0                       |";
 	cout<<"\n                |                       0---___________---0                      |";
 	cout<<"\n                |                      0----||   |   ||----0                     |";
 	cout<<"\n                |                     0-----||===|===||-----0                    |";
 	cout<<"\n                |                    0------||___|___||------0                   |";
 	cout<<"\n                |                   0-------------------------0                  |";
 	cout<<"\n                |                  0------- BAHAY  KUBO -------0                 |";
 	cout<<"\n                |                 0 ||=======================|| 0                |";
 	cout<<"\n                |                   ||+++++++++++++++++++++++||                  |";
 	cout<<"\n                |                   ||                       ||                  |";
 	cout<<"\n                |                   ||                       ||                  |";
 	cout<<"\n                |                   ||========      =========||                  |";
 	cout<<"\n                |                   ||#######||    ||########||                  |";
 	cout<<"\n                |                   ||#######||    ||########||                  |";
 	cout<<"\n                |                   ||=======================||                  |";
 	cout<<"\n                |                   ||       ||____||        ||                  |";
 	cout<<"\n                |                   ||       ||____||        ||                  |";
 	cout<<"\n                |         __________||_______||____||________||_________         |";
	cout<<"\n                |                                                                |";
	cout<<"\n                |                                                                |";
	cout<<"\n                ------------------------------------------------------------------";
    cout<<"\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	

	cin.get();
	cin.get();
	multiprog();
	
}

void prog3() //LOWER NUMBER IDENTIFIER (DONE)
{
	loading();
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n           L O W E R   N U M B E R   A M O N G   F O U R  ( 4 )  U S E R   I N P U T \n\n";
        
    
    //preparation
    int U1;
    int U2;
    int U3;
    int U4;
    
    //User Input
    cout << "             * Enter the First Number (A): ";
    cin >> U1;
    
    cout << "             * Enter the Second Number (B): ";
    cin >> U2;
    
    cout << "             * Enter the Third Number (C): ";
    cin >> U3;
    
    cout << "             * Enter the Fourth Number (D): ";
    cin >> U4;
    
    
    loading();
    cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n           L O W E R   N U M B E R   A M O N G   F O U R  ( 4 )  U S E R   I N P U T \n\n";
    //decision
    if (U1<U2 && U1<U3 && U1<U4) {
        cout << "\n             RESULT: A IS THE LOWEST NUMBER! \n\n";    }
    
    else if (U2<U1 && U2<U3 && U2<U4) {
        cout << "\n             RESULT: B IS THE LOWEST NUMBER! \n\n";    }
    
    else if (U3<U1 && U3<U2 && U3<U4) {
        cout << "\n             RESULT: C IS THE LOWEST NUMBER! \n\n";    }
    
    else {
        cout << "\n             RESULT: D IS THE LOWEST NUMBER! \n\n";    }
 
	
	
	cout<<"\n                                _________________________________ ";
    cout<<"\n                               |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
	
	
	
	
	
	
	cin.get();
	cin.get();
	multiprog();
		
}

void prog4() //HIGHER NUMBER IDENTIFIER (DONE)
{
	
	loading();
	system("cls");
	int num1, num2, higherNum;
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n           H I G H E R   N U M B E R   A M O N G   T W O  ( 2 )  U S E R   I N P U T \n\n";



	cout << "             * Enter the First Number: ";
	cin >> num1;
    
    cout << "             * Enter the Second Number: ";
	cin >> num2;



	if (num1 > num2) {
    higherNum = num1;
	}
	else {
    higherNum = num2;
	}
	loading();
	cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout<<"\n           H I G H E R   N U M B E R   A M O N G   T W O  ( 2 )  U S E R   I N P U T \n\n";
	cout << "\n             RESULT: THE HIGHER NUMBER IS "<<higherNum;
	cout << "\n";

	Sleep(10);
	
	cout<<"\n                                _________________________________ ";
    cout<<"\n                               |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	



    cin.get();
	cin.get();
	multiprog();

	
	
	
	
	
	
	
		
}

void prog5() //AVERAGE CALCULATOR (DONE)
{
	loading();
	int input;
    float sgrade, sum=0, avg;
	
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n          A V E R A G E   C A L C U L A T O R   V   1 . 0 ";
cout << "\n          Instruction: Type your Grades from 1st to 6th Down bellow:\n\n";
    cout << "\n";

    

    for(input=0; input<6; input++)

   
        {
        cin>>sgrade;
        sum = sum+sgrade;
    }
    avg = sum/6;
    
    loading();
    
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n          A V E R A G E   C A L C U L A T O R   V   1 . 0 ";
  
    cout << "\n           GRADE COMPUTATION COMPLETE!\n";
  	
	  cout<<"\n             * BASED ON YOUR INPUT, YOUR AVERAGE IS: ";
    


    
     //GRADE CALCULATIONS
    
   if(avg>=96 && avg<=100)
                                cout<<" PASSED (1.00)";
    else if(avg>=91 && avg<95)
                                cout<<" PASSED (1.25)";
    else if(avg>=87 && avg<91)
                                cout<<" PASSED (1.50)";
    else if(avg>=82 && avg<86)
                                cout<<" PASSED (1.75)";
    else if(avg>=78 && avg<82)
                                cout<<" PASSED (2.00)";
    else if(avg>=73 && avg<77)
                                cout<<" PASSED (2.25)";
    else if(avg>=69 && avg<73)
                                cout<<" PASSED (2.50)";
    else if(avg>=64 && avg<68)
                                cout<<" PASSED (2.75)";
    else if(avg>=60 && avg<64)
                                cout<<" PASSING GRADE (3.00)";
    else
                                cout<<" FAILED (5.0)";
    
    Sleep(10);
                       
       cout<<"\n\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
   
   
    cout<<endl;
	
	cin.get();
	cin.get();
	multiprog();
	
}

void prog6() //CALCULATOR (DONE) 
{
	loading();
	
		char op;
        float num1, num2;
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n           B A S I C   C A L C U L A T O R   P R O G R A M   C  + +\n";

cout << "\n           * INSTRUCTION: SELECT OPERATOR DOWN BELOW";
cout << "\n             _________________________________                            ";
cout << "\n            | + | Addition                    |                           "; 
cout << "\n             ``````````````````````````````````                           ";
cout << "\n             _________________________________                            ";
cout << "\n            | - | Subtraction                 |                           "; 
cout << "\n             ``````````````````````````````````                           ";
cout << "\n             _________________________________                            ";
cout << "\n            | * | Multiplication              |                           "; 
cout << "\n             ``````````````````````````````````                           ";
cout << "\n             _________________________________                            ";
cout << "\n            | / | Division                    |                           "; 
cout << "\n             ``````````````````````````````````                           ";
cout<<"\n         ______________________________________________________________________________  \n";
    
cout<<"\n            PLEASE ENTER YOUR CHOICE HERE: ";
 	
	cin >> op;
	loading();
	
	
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n           B A S I C   C A L C U L A T O R   P R O G R A M   C  + +\n";

	cout<<"\n            PLEASE ENTER (2) TWO NUMBERS: \n";       
	
	cout<<"\n               FIRST NUMBER: ";  
		cin >> num1;
        
	cout<<"\n               SECOND NUMBER: "; 		

		cin >> num2;
loading();
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n           B A S I C   C A L C U L A T O R   P R O G R A M   C  + +\n";

 cout <<"\n               THE ANSWER IS: ";
     Sleep(100);
       switch(op) {
    
    
   
      case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

      case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

      case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

      case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

      default:
      // If the operator is other than +, -, * or /, error message is shown
      
	  
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";

cout << "\n           B A S I C   C A L C U L A T O R   P R O G R A M   C  + +\n";
  
cout << "\n           ERROR! OPERATOR INVALID!";
cout<<"\n         ______________________________________________________________________________   \n";	  
	  

      break;

	

}
	
	Sleep(100);
	cout<<"\n\n\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
	
	
	cin.get();
	cin.get();
	multiprog();
		
}

void prog7() //INCREMENT LOOPING (DONE)
{
loading();

	
	{
    int start, end;
    
system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";
	
	cout<<"\n           I N C R E M E N T   L O O P I N G   C + +   P R O G R A M \n";
	
	cout<<"\n           INSTRUCTION: INPUT SMALLER NUMBER FIRST! \n\n"; 
	
	cout<<"\n               PLEASE ENTER THE STARTING VALUE: ";  
    cin >> start;
    cout<<"\n               PLEASE ENTER THE ENDING VALUE: ";  
    cin >> end;

    
    for (int i = start; i < end; i++) {
        cout << i << endl;
    }

	Sleep(100);
	cout<<"\n\n\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
	
	}
	
	cin.get();
	cin.get();
	multiprog();
		
	}
	
void prog8() //DECREMENT LOOPING (DONE)
{
	loading();

	{
    int start, end;
    
system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n";
	
	cout<<"\n           D E C R E M E N T   L O O P I N G   C + +   P R O G R A M \n";
	
	cout<<"\n           INSTRUCTION: INPUT LARGER NUMBER FIRST! \n\n"; 
	
	cout<<"\n               PLEASE ENTER THE STARTING VALUE: ";  
    cin >> start;
    cout<<"\n               PLEASE ENTER THE ENDING VALUE: ";  
    cin >> end;

    
    for (int i = start; i > end; i--) {
        cout << i << endl;
    }

	Sleep(100);
	cout<<"\n\n\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
	
	}
	
	cin.get();
	cin.get();
	multiprog();
		
}

void prog9() //VOWEL & CONSONANT (DONE)
{
	loading();
	char userinput;
    
	system("cls");
cout<<"\n\n          (c) Copyright 2023 | JLNQ Visuals ";
cout<<"\n            _     _       ___     __      ___     __           ___                         ";
cout<<"\n           {{{   {{{     {{{{    {{{{    {{{{{   {{{{         {{{{{    _      _            ";
cout<<"\n           }}}}_}}}}    }}___}} }}___}} }}   }} }}  _    _   }}   }}  _}}_   _}}_          ";
cout<<"\n           {{ {{{ {{    {{{{{{  {{{{{{  {{   {{ {{ {{{  {{{  {{      {{{{{{ {{{{{{         ";
cout<<"\n           }}     }}  _ }}      }}  }}  }}___}} }}__}}       }}___}}   }}     }}           ";
cout<<"\n           {{     {{ {{ {{      {{   {{  {{{{{   {{{{         {{{{{                      \n";
cout<<"\n           MULTIPROGRAM C++ - VERSION 1.1                        COLEGIO DE MONTALBAN      ";
cout<<"\n           BSCPE 1F                                                   A.Y. 2022- 2023      ";
cout<<"\n         ______________________________________________________________________________  \n\n";

cout<<"\n            V O W E L    A N D   C O N S O N A N T  I D E N T I F I E R   V   1 . 0 \n" ;    

cout<<"\n               * PLEASE ENTER ONE (1) ALPHABET: ";
    cin>>userinput;
    
    
    
    
    
    
    
    
    //LOWER CASE (CONSONANT)
    	if 
    	  (userinput=='b' || userinput=='c' || userinput=='d' || userinput=='f' 
    	|| userinput=='g' || userinput=='h' || userinput=='j' || userinput=='k' 
    	|| userinput=='l' || userinput=='m' || userinput=='n' || userinput=='p' 
    	|| userinput=='q' || userinput=='r' || userinput=='s' || userinput=='t' 
    	|| userinput=='v' || userinput=='w' || userinput=='x' || userinput=='y' 
    	|| userinput=='z' )
        
		
		
		
		
		cout<<"\n                   ANSWER : THE ALPHABET THAT YOU'VE TYPED IS CONSONANT! ";

		
	//UPPER CASE (CONSONANT)	
		else if 
		  (userinput=='B' || userinput=='C' || userinput=='D' 
		|| userinput=='F' || userinput=='G' || userinput=='H' 
		|| userinput=='J' || userinput=='K' || userinput=='L' 
		|| userinput=='M' || userinput=='N' || userinput=='P' 
		|| userinput=='Q' || userinput=='R' || userinput=='S' 
		|| userinput=='T' || userinput=='V' || userinput=='W' 
		|| userinput=='X' || userinput=='Y' || userinput=='Z' )
		cout<<"\n                   ANSWER : THE ALPHABET THAT YOU'VE TYPED IS CONSONANT! ";
            
    //LOWER CASE (VOWEL)
        else if
       (userinput=='a' ||
        userinput=='e' ||
        userinput=='i' ||
        userinput=='o' ||
        userinput=='u')
		cout<<"\n                   ANSWER : THE ALPHABET THAT YOU'VE TYPED IS VOWEL! ";
    
    //UPPER CASE (VOWEL)
        else if
       (userinput=='A' ||
        userinput=='E' ||
        userinput=='I' ||
        userinput=='O' ||
        userinput=='U')
		cout<<"\n                   ANSWER : THE ALPHABET THAT YOU'VE TYPED IS VOWEL! ";
   
   //INVALID
        else
        cout<<"\n                   ERROR : INVALID! ALPHABET IS ONLY ACCEPTED! ";
        cout<<endl;
	
	cout<<"\n                                  _________________________________ ";
    cout<<"\n                                 |     PRESS ENTER TO GO BACK      |";
    cout<<"\n                                  ``````````````````````````````````";
	cout<<"\n         ______________________________________________________________________________   \n";

    cout<<"\n                        FOR MORE INQUIRIES, DONT HESITATE TO CONTACT US AT:                 ";
    cout<<"\n                                      quilino.jlnq@gmail.com                                ";	
	
	
	
	
	
	cin.get();
	cin.get();
	multiprog();
		
}

void logout() //LOGOUT USER ACCOUNT (DONE)
{
	userout();
	logmenu();
		
}






//  FINISHED : 1:07 AM - JANUARY 22, 2023
//  quilino.jlnq@gmail.com
//  22-01691 | QUILINO, JOHN LLOYD N.
//  BACHELOR OF SCIENCE IN COMPUTER ENGINEERING






