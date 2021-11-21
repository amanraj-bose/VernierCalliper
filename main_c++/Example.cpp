/* -*- utf-8 -*-
Author : AMAN RAJ
PROGRAM : PHYSIC'S
*/

#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<windows.h>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

/* --------------------------------------------------------------
    For Colouring Function 
   --------------------------------------------------------------*/

char RED() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 12);
}
char GREEN() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_GREEN);
}
char BLUE() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE);
}
char PINK() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13);
}
char CYAN(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 3); 
}
char YELLOW(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
}
char GREY() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 8);
}
char LIGHT_GREEN() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
}
/*----------------------------------------------------------------
                        Voice's
  ----------------------------------------------------------------*/
string Voice(string Text) {
    string phrase = Text;
    string command = "espeak -v +f3 \" "+phrase+"\"";
    const char* charCommand = command.c_str();
    system(charCommand);
}
/*----------------------------------------------------------------
                Varnier Calliper
  ----------------------------------------------------------------*/
  
float VarnierCalliperError(float n, float m, float Multiply, float Division, float MSR, float Zero_Error){
    /*
                // INTRODUCTION
    
    To measure length of an object we use normal scale which is amrked in cm/mm
    Smallest Measurement which can be made = 0.1cm  --> Least Count (L.C)
    It Cannot give Precision Upto Second Descimal Place...

    In 1631, Pierre Varnier deviced .........!!

    (1). To Measure length,Breadth and Height of Small regular size Object's. 
    (2). To measure Diameter (or Radius) of Small Spherical or cylindric Body.
    (3). To measure depth of Beaker,Glass etc....
    (4). To measure internal Diameter of hollow Cylinder.

    Generally, each of the division of vernier scale smaller than main scale (M.S). 
    * Smallest measurement which can be made --> Least Count (L.C)
    * Generally in cm. --> M.S.D
    * No, Any MEasurement.


    * L.C = 1 M.S.D (Main Scale Division) - 1 V.S.D (Varnier Scale Division) 

     let, 'n' V.S.D are equal to 'm' M.S.D ...

    * m = number of M.S.D which are equal to ;
      n = number of V.S.D.

    * 1 V.S.D = m/n M.S.D

    * L.C = 1 M.S.D - 1 V.S.D = 1 M.S.D - m/n M.S.D

    * Formula:-    
                L.C = MSD(1-m/n) --> Number of MSD which are equal to Number of VSD

    Ordinary Varnier Calliper :-

        1 M.S.D = 1cm/10 = 0.1cm
        10 V.S.D = 9 M.S.D --> Remember Main
    
    Example :-

                V.S.D = M.S.D
                10 V.S.D = 9 M.S.D

                = 0.1cm(1-9/10)
                = 0.1 × 1 / 10
                = 0.01 cm


    #         // Reading of Varnier Calliper

    * 1 cm of M.S.D is Divided in 10 divisions 
    10 V.S.D = 9 M.S.D
    L.C = 0.01cm
    Total Reading =  M.S.R (Main Scale Reading) + V.S.R (Varnier Scale Reading)
    
    * M.S.R = Reading on M.S just before Zero of V.S = 1cm.
    * V.S.R = L.C multiplied by Co-inciding division of V.S.
               
    =           1cm + 0.01cm × 5 = 1.05cm

    * 5 × L.C

    * Free From Zero Error

    *   V.S.D < M.S.D 


    #                // Zerro Error

    When Zero of V.S & zero of M.S don't Co-inside, the instrumentis said to have a zero error.

    *                       ZERO ERROR -----> (i) +ve Zero Error (ii) -ve Zero Error 

    * Correct Reading = Total Reading - Zero Error

    // Positive Zero Error :-

    * Positive Zero Error : Zero of V.S is on right of ZERO of M.S .
    * +VE Zero Error = Least Count × Coincidance div. of V.S .
    

    EXAMPLE : 0.01 × 5 = +0.05cm
              Total Reading - Zero Error  
 
    */
                        // main Scale Value
    

                        //Least Count (L.C)
    cout << LIGHT_GREEN() << endl;
    float step_1, Step_2, Result, VSR, Final, Reading;

    step_1 = n - m;
    Step_2 = Multiply * step_1;
    Result = Step_2 / n;
    VSR = Result * Division;
    Reading = MSR + VSR;
    Final = Reading - Zero_Error;
    return Final;
}
float VernierScale(float n, float m, float Multiply,float Division, float MSR){
    float step_1, Step_2, Result, VSR, Reading_Final;

    step_1 = n - m;
    Step_2 = Multiply * step_1;
    Result = Step_2 / n;
    VSR = Result * Division;
    Reading_Final = MSR + VSR;  
    return Reading_Final;
}
float OrdinaryVernierCalliper(float n, float m, float Division, float MSR){
    float step_1, Step_2, Result, VSR, Reading_Final;

    step_1 = n - m;
    Step_2 = 0.1 * step_1;
    Result = Step_2 / n;
    VSR = Result * Division;
    Reading_Final = MSR + VSR;
    return Reading_Final;
}
float OrdinaryVernierCalliperError(float n, float m, float Division, float MSR, float Zero_Error){
    float step_1, Step_2, Result, VSR, Reading_Final, Error_Final;

    step_1 = n - m;
    Step_2 = 0.1 * step_1;
    Result = Step_2 / n;
    VSR = Result * Division;
    Reading_Final = MSR + VSR;
    Error_Final = Reading_Final - Zero_Error;
    return Error_Final;
}

string VernierCalliperIntroduction_help(){
    string Introduction;
    cout << CYAN() << endl;
    Introduction = R"("
                    // INTRODUCTION
    
    To measure length of an object we use normal scale which is amrked in cm/mm
    Smallest Measurement which can be made = 0.1cm  --> Least Count (L.C)
    It Cannot give Precision Upto Second Descimal Place...

    In 1631, Pierre Varnier deviced .........!!

    (1). To Measure length,Breadth and Height of Small regular size Object's. 
    (2). To measure Diameter (or Radius) of Small Spherical or cylindric Body.
    (3). To measure depth of Beaker,Glass etc....
    (4). To measure internal Diameter of hollow Cylinder.

    Generally, each of the division of vernier scale smaller than main scale (M.S). 
    * Smallest measurement which can be made --> Least Count (L.C)
    * Generally in cm. --> M.S.D
    * No, Any MEasurement.


    * L.C = 1 M.S.D (Main Scale Division) - 1 V.S.D (Varnier Scale Division) 

     let, 'n' V.S.D are equal to 'm' M.S.D ...

    * m = number of M.S.D which are equal to ;
      n = number of V.S.D.

    * 1 V.S.D = m/n M.S.D

    * L.C = 1 M.S.D - 1 V.S.D = 1 M.S.D - m/n M.S.D

    * Formula:-    
                L.C = MSD(1-m/n) --> Number of MSD which are equal to Number of VSD

    Ordinary Varnier Calliper :-

        1 M.S.D = 1cm/10 = 0.1cm
        10 V.S.D = 9 M.S.D --> Remember Main
    
    Example :-

                V.S.D = M.S.D
                10 V.S.D = 9 M.S.D

                = 0.1cm(1-9/10)
                = 0.1 × 1 / 10
                = 0.01 cm


    #         // Reading of Varnier Calliper

    * 1 cm of M.S.D is Divided in 10 divisions 
    10 V.S.D = 9 M.S.D
    L.C = 0.01cm
    Total Reading =  M.S.R (Main Scale Reading) + V.S.R (Varnier Scale Reading)
    
    * M.S.R = Reading on M.S just before Zero of V.S = 1cm.
    * V.S.R = L.C multiplied by Co-inciding division of V.S.
               
    =           1cm + 0.01cm × 5 = 1.05cm

    * 5 × L.C

    * Free From Zero Error

    *   V.S.D < M.S.D 


    #                // Zerro Error

    When Zero of V.S & zero of M.S don't Co-inside, the instrumentis said to have a zero error.

    *                       ZERO ERROR -----> (i) +ve Zero Error (ii) -ve Zero Error 

    * Correct Reading = Total Reading - Zero Error

    // Positive Zero Error :-

    * Positive Zero Error : Zero of V.S is on right of ZERO of M.S .
    * +VE Zero Error = Least Count × Coincidance div. of V.S .
    

    EXAMPLE : 0.01 * 5 = +0.05cm
              Total Reading - Zero Error  
    ")";

    return Introduction;
}
/* ----------------------------------------------------------------
                 ROUNDING Any Number
   ----------------------------------------------------------------*/

float ROUNDING(float x, float y) {
    cout << YELLOW() << endl;
    float Round;
    Round = x+y;
    return Round;
}
float pi(){
    cout << CYAN() << endl;
    float Pi;

    Pi = 3.141592653589793;
 
    return Pi;
}
float tau(){
    cout << RED() << endl;
    float Tau;
    Tau = 6.283185307179586;

    return Tau;
}
/*----------------------------------------------------------------
                    Main Function
  -----------------------------------------------------------------  */
int main(){

            string command;

            cout << "Enter The Command : " << endl;
            cin >> command;
            cout << "\n";
                    /* Main Code */
            
            if (command == "VC")
            {
                float N, M, Multiple, divide, msr, Zero_Error;
                cout << "Enter The Number of V.S.D : " << endl;
                cin >> N;
                cout << "Enter The M.S.D : " << endl;
                cin >> M;
                cout << "Enter The Difference Value of V.S.D and M.S.D : " << endl;
                cin >> Multiple;
                cout << "Enter the Division of your Scale : " << endl;
                cin >> divide;
                cout << "Enter the Main Scale Starter : " << endl;
                cin >> msr;
                cout << "Enter the After Zero Number : " << endl;
                cin >> Zero_Error;
                cout << "Your Varnier Scale count Error is = " << VarnierCalliperError(N, M, Multiple, divide, msr, Zero_Error)<< "cm" << endl;
            }
            else if (command == "VC --help")
            {
                cout <<setw(10)<< "Generally, Normal Vernier Calliper is 0.1cm because 1cm/10" << endl;
            }
            else if (command == "VernierCalliperHelp")
            {
                cout<<VernierCalliperIntroduction_help() << endl;
            }
            
            else if (command == " ")
            {
                cout<<"Error: " << endl;
            }
            
            else
            {
                cout << RED() << endl;
                cout <<setw(5) << "Error" << endl;
                cout << Voice("Error")<< endl;
            }

    return 0;
}
