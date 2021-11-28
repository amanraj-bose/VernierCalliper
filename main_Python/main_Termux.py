# utf 8
# Author : Aman Raj
# PROGRAM : PHYSIC'S

import math
from collections import Counter
import random
import os
import platform



#           pyttsx3 initiliaze

#   Introduction
def Intro():
    Name = """
     __     __              _              ____      _ _ _
     \ \   / /__ _ __ _ __ (_) ___ _ __   / ___|__ _| | (_)_ __   ___ _ __
      \ \ / / _ \ '__| '_ \| |/ _ \ '__| | |   / _` | | | | '_ \ / _ \ '__|
       \ V /  __/ |  | | | | |  __/ |    | |__| (_| | | | | |_) |  __/ |
        \_/ \___|_|  |_| |_|_|\___|_|     \____\__,_|_|_|_| .__/ \___|_|
                                                          |_|
"""
    print(Color.green + Name + "\t\t\t\t", "System Version")
    print(Color.cyan)
    print("\t\t\t\t\t","Operating System : \033[95m", platform.system(), "\n\n")
    print("[\033[92m\033[97m•\033[92m]", Color.cyan + "Tool Created by AmanRaj-Bose (Aman Raj)" + Color.red)
    print("[\033[91m\033[97m::\033[91m]" + Color.yellow + " For Calculating Vernier Scale Measurement "+ Color.red + "[\033[91m\033[97m::\033[91m]" + "\n")
    print("[\033[91m\033[97m01\033[91m]" + Color.blue + " Zero Error \t" + Color.red)
    print("[\033[91m\033[97m02\033[91m]" + Color.blue + " VC \t" + Color.red)
    print("[\033[91m\033[97m03\033[91m]" + Color.blue + " VernierCalliper \t" + Color.red)
    print("[\033[91m\033[97m04\033[91m]" + Color.blue + " Histogram \t" + Color.red)
    print("[\033[91m\033[97m00\033[91m]" + Color.blue + " Help \t" + Color.red)
    print("[\033[91m\033[97m999\033[91m]" + Color.blue + " Exit \t" + Color.red)
    print(Color.white)

class Color:

    """
    For Underline nay answer any your Method
    """

    yellow = '\033[93m'
    green = '\033[92m'
    red = '\033[91m'
    blue = '\033[94m'
    magenta = '\033[95m'
    cyan = '\033[96m'
    white = '\033[97m'


class Other:
    """
    For Other thing in A.K.A mathmetics
    pi,Lcm,Hcf, Etc...
    """
    print(Color.cyan)
    Pi = "The Pi value is : ", math.pi
    tan = "The Tau Value is : ", math.tau
def clean():
    os.system("clear")

    """
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
    * L.C = 1 M.S.D (Main Scale Division) - 1 V.S.D (Varnier Scale Division)
    let, 'n' V.S.D are equal to 'm' M.S.D ...
    * 1 V.S.D = m/n M.S.D
    * L.C = 1 M.S.D - 1 V.S.D = 1 M.S.D - m/n M.S.D
    * Formula:-
                L.C = MSD(1-m/n) --> Number of MSD which are equal to Number of VSD
    Ordinary Varnier Calliper :-
        1 M.S.D = 1cm/10 = 0.1cm
        10V.S.D = 9 M.S.D --> Remember Main
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
    """
    # M.S.D

    #code#

    # Least Count(L.C)


def VarnierCalliper(n, m, multi, Division, MSR, Zero_Error):
    Step_1 = float(n - m)
    Step_2 = float(multi * Step_1)
    Result = float(Step_2 / n)
    VSR = Result * Division
    Reading = MSR + VSR
    Error = Reading - Zero_Error 
    Final = Error   
    print(Color.red)

    return Final
def VernierScale(n, m, Multiply, Division, MSR):
    

    step_1 = float(n - m)
    Step_2 = float(Multiply * step_1)
    Result = float(Step_2 / n)
    VSR = float(Result * Division)
    Reading_Final = float(MSR + VSR)
    
    return Reading_Final

def OrdinaryVernierScale(n, m, Division, MSR):
    step_1 = float(n - m)
    Step_2 = float(0.1 * step_1)
    Result = float(Step_2 / n)
    VSR = float(Result * Division)
    Reading_Final = float(MSR + VSR)
    
    return Reading_Final
def ZeroError(n, m, Division, MSR):
    
    step_1 = float(n - m)
    Step_2 = float(0.1 * step_1)
    Result = float(Step_2 / n)
    VSR = float(Result * Division)
    Reading_Final = float(MSR + VSR)
    Error_Final = float(Reading_Final - Zero_Error)
    return Error_Final
    
def count(seq) -> dict:
    hist = {}
    for i in seq:
        hist[i] = hist.get(i, 0) + 1
    return hist

def ascii_histogram(seq) -> None:
    counted = count(seq)
    for k in sorted(counted):
        print(f'{k} {"+" * counted[k]}')
        
clean()
Intro()
commands = str(input("[\033[91m\033[97m-\033[91m]" + Color.green + "Select an Option : " + Color.white))
print("\n")
if commands == "01": #Zero error
    N = float(input("Enter the Number of V.S.D => \033[92m"))
    M = float(input("Enter The M.S.D : \033[91m"))
    multiple = float(input("Enter The Difference Value of V.S.D and M.S.D : \033[94m"))
    divide = float(input("Enter the Division of your Main Scale : \033[95m"))
    msr = float(input("Enter the Main Scale Starter : \033[96m"))
    Zero_Error = float(input("Enter the After Zero Number : \033[98m"))
    Main = VarnierCalliper(N, M, multiple, divide, msr, Zero_Error)
    
    print(f"Your Result is {Main}")
elif commands == "00": #VC --help
    print("Generally, Normal Vernier Calliper is 0.1cm because 1cm/10")
elif commands == "02": #VC
    N = float(input("Enter the Number of V.S.D => \033[92m"))
    M = float(input("Enter The M.S.D : \033[91m"))
    multiple = float(input("Enter The Difference Value of V.S.D and M.S.D : \033[94m"))
    divide = float(input("Enter the Division of your Scale : \033[95m"))
    msr = float(input("Enter the Main Scale Starter : \033[96m"))
    Main = VernierScale(N, M, multiple, divide, msr)
    
    print(f"Your Result is {Main}")
elif commands == "03":
    N = float(input("Enter the Number of V.S.D => \033[92m"))
    M = float(input("Enter The M.S.D : \033[91m"))
    divide = float(input("Enter the Division of your Scale : \033[95m"))
    msr = float(input("Enter the Main Scale Starter : \033[96m"))
    Main = OrdinaryVernierScale(N, M, divide, msr)
    
    print(f"Your Result is {Main}")
elif commands == "04":
    random.seed(1)
    vals = list( map( float, input( "X => ").split( "," ) ) )
    freq = [random.randint(5, 50) for _ in vals]

    data = []

    for f, v in zip(freq, vals):
        data.extend([v] * f)
    print(Color.magenta)
    ascii_histogram(data)
elif commands == "05":
    print(Color.cyan)
    print("\nOperating System\033[95m :", platform.system())
    print("\033[96mMachine \033[95m :",platform.machine())
    print("\033[96mSystem Name \033[95m :",platform.node())
    print("\033[96mVersion \033[95m :", platform.version())
    print("\033[96mRelease \033[95m :", platform.release())
    print("\033[96mProcessor \033[95m :", platform.processor())
    Bite = platform.architecture()
    print("\033[96mSystem Bit \033[95m : ",Bite[0])
    
    print(Color.white)
elif commands == "999":
    print(Color.red + "Exit")
    exit()
else:
    print(Color.red + "ErrOr !")
