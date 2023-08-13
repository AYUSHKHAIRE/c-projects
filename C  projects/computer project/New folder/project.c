#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct PirTab
{
    int ano;
    char asym[50], aname[20];
    double amass;
    char astate[10], ablock;
} PT[] = {
    1, "H", "Hydrogen", 1.008, "Gas", 's',
    2, "He", "Helium", 4.003, "Gas", 'p',
    3, "Li", "Lithium", 6.941, "Solid", 's',
    4, "Be", "Beryllium", 9.012, "Solid", 's',
    5, "B", "Boron", 10.811, "Solid", 'p',
    6, "C", "Carbon", 12.011, "Solid", 'p',
    7, "N", "Nitrogen", 14.007, "Gas", 'p',
    8, "0", "Oxygen", 15.999, "Gas", 'p',
    9, "F", "Fluorine", 18.998, "Gas", 'p',
    10, "Ne", "Neon", 20.18, "Gas", 'p',
    11, "Na", "Sodium", 22.99, "Solid", 's',
    12, "Mg", "Magnesium", 24.305, "Solid", 's',
    13, "Al", "Aluminium", 26.982, "Solid", 'p',
    14, "Si", "Silicon", 28.086, "Solid", 'p',
    15, "P", "Phosphorus", 30.974, "Solid", 'p',
    16, "S", "Sulfur", 32.065, "Solid", 'p',
    17, "C1", "Chlorine", 35.453, "Gas", 'p',
    18, "Ar", "Argon", 39.948, "Gas", 'p',
    19, "K", "Potassium", 39.098, "Solid", 's',
    20, "Ca", "Calcium", 40.078, "Solid", 's',
    21, "Sc", "Scandium", 44.956, "Solid", 'd',
    22, "Ti", "Titanium", 47.867, "Solid", 'd',
    23, "V", "Vanadium", 50.942, "Solid", 'd',
    24, "Cr", "Chromium", 51.996, "Solid", 'd',
    25, "Mn", "Manganese", 54.938, "Solid", 'd',
    26, "Fe", "Iron", 55.845, "Solid", 'd',
    27, "Co", "Cobalt", 58.933, "Solid", 'd',
    28, "Ni", "Nickel", 58.693, "Solid", 'd',
    29, "Cu", "Copper", 63.546, "Solid", 'd',
    30, "Zn", "Zinc", 65.39, "Solid", 'd',
    31, "Ga", "Gallium", 69.723, "Solid", 'p',
    32, "Ge", "Germanium", 72.64, "Solid", 'p',
    33, "As", "Arsenic", 74.922, "Solid", 'p',
    34, "Se", "Selenium", 78.96, "Solid", 'p',
    35, "Br", "Bromine", 79.904, "Liquid", 'p',
    36, "Kr", "Krypton", 83.8, "Gas", 'p',
    37, "Rb", "Rubidium", 85.468, "Solid", 's',
    38, "Sr", "Strontium", 87.62, "Solid", 's',
    39, "Y", "Yttrium", 88.906, "Solid", 'd',
    40, "Zr", "Zirconium", 91.224, "Solid", 'd',
    41, "Nb", "Niobium", 92.906, "Solid", 'd',
    42, "Mo", "Molybdenum", 95.94, "Solid", 'd',
    43, "Tc", "Technetium", 96.906, "Solid", 'd',
    44, "Ru", "Ruthenium", 101.07, "Solid", 'd',
    45, "Rh", "Rhodium", 102.906, "Solid", 'd',
    46, "Pd", "Palladium", 106.42, "Solid", 'd',
    47, "Ag", "Silver", 107.868, "Solid", 'd',
    48, "Cd", "Cadmium", 112.411, "Solid", 'd',
    49, "In", " Indium ", 114.818, " Solid ", 'p',
    50, "Sn", "Tin", 118.71, "Solid", 'p',
    51, "Sb", "Antimony", 121.76, "Solid", 'p',
    52, "Te", "Tellurium", 127.6, "Solid", 'p',
    53, "I", "Iodine", 126.905, "Solid", 'p',
    54, "Xe", "Xenon", 131.293, "Gas", 'p',
    55, "CS", "Cesium", 132.906, "Solid", 's',
    56, "Ba", "Barium", 137.327, "Solid", 's',
    57, "La", "Lanthanum", 138.906, "Solid", 'f',
    58, "Ce", "Cerium", 140.116, "Solid", 'f',
    59, "Pr", "Praseodymium", 140.908, "Solid", 'f',
    60, "Nd", "Neodymium", 144.24, "Solid", 'f',
    61, "Pm", "Promethium", 144.912, "Solid", 'f',
    62, "Sm", "Samarium", 150.36, "Solid", 'f',
    63, "Eu", "Europium", 151.964, "Solid", 'f',
    64, "Gd", "Gadolinium", 157.25, "Solid", 'f',
    65, "Tb", "Terbium", 158.925, "Solid", 'f',
    66, "Dy", "Dysprosium", 162.5, "Solid", 'f',
    67, "Ho", "Holmium", 164.93, "Solid", 'f',
    68, "Er", "Erbium", 167.259, "Solid", 'f',
    69, "Tm", "Thulium", 168.934, "Solid", 'f',
    70, "Yb", "Ytterbium", 173.04, "Solid", 'f',
    71, "Lu", "Lutetium", 174.967, "Solid", 'd',
    72, "Hf", "Hafnium", 178.49, "Solid", 'd',
    73, "Ta", "Tantalum", 180.948, "Solid", 'd',
    74, "W", "Tungsten", 183.84, "Solid", 'd',
    75, "Re", " henium ", 186.207, " Solid ", 'd',
    76, "Os", "Osmium", 190.23, "Solid", 'd',
    77, "Ir", "Iridium", 192.217, "Solid", 'd',
    78, "Pt", "Platinum", 195.078, "Solid", 'd',
    79, "Au", "Gold", 196.967, "Solid", 'd',
    80, "Hg", "Mercury", 200.59, "Liquid", 'd',
    81, "TI", "Thallium", 204.383, "Solid", 'p',
    82, "Pb", "Lead", 207.2, "Solid", 'p',
    83, "Bi", "Bismuth", 208.98, "Solid", 'p',
    84, "Po", "Polonium", 208.982, "Solid", 'p',
    85, "At", "Astatine", 209.987, "Solid", 'p',
    86, "Rn", "Radon", 222.017, "Gas", 'p',
    87, "Fr", "Francium", 223.019, "Solid", 's',
    88, "Ra", "Radium", 226.025, "Solid", 's',
    89, "Ac", "Actinium", 227.027, "Solid", 'f',
    90, "Th", "Thorium", 232.038, "Solid", 'f',
    91, "Pa", "Protactinium", 231.036, "Solid", 'f',
    92, "U", "Uranium", 238.029, "Solid", 'f',
    93, "Np", "Neptunium", 237.048, "Solid", 'f',
    94, "Pu", "Plutonium", 244.064, "Solid", 'f',
    95, "Am", "Americium", 243.061, "Solid", 'f',
    96, "Cm", "Curium", 247.07, "Solid", 'f',
    97, "Bk", "Berkelium", 247.07, "Solid", 'f',
    98, "Cf", "Californium", 251.079, "Solid", 'f',
    99, "Es", "Einsteinium", 252.083, "Solid", 'f',
    100, "Fm", "Fermium", 257.095, "Solid", 'f',
    101, "Md", "Mendelevium", 258.098, "Solid", 'f',
    102, "No", "Nobelium", 259.101, "Solid", 'f',
    103, "Lr", "Lawrencium", 266.12, "Solid", 'd',
    104, "Rf", "Rutherfordium", 267.122, "Solid", 'd',
    105, "Db", "Dubnium", 268.126, "Solid", 'd',
    106, "Sg", "Seaborgium", 269.128, "Solid", 'd',
    107, "Bh", "Bohrium", 270.133, "Solid", 'd',
    108, "Hs", "Hassium", 269.133, "Solid", 'd',
    109, "Mt", "Meitnerium", 277.154, "Solid", 'd',
    110, "Ds", "Darmstadtium", 282.166, "Solid", 'd',
    111, "Rg", "Roentgenium", 282.169, "Solid", 'd',
    112, "Cn", "Copernicium", 286.179, "Solid", 'd',
    113, "Nh", "Nihonium", 286.182, "Solid", 'p',
    114, "Fl", "Flerovium", 290.192, "Solid", 'p',
    115, "Mc", "Moscovium", 290.196, "Solid", 'p',
    116, "Lv", "Livermorium", 293.205, "Solid", 'p',
    117, "Ts", "Tennessine", 294.211, "Solid", 'p',
    118, "Og", "Oganesson", 295.216, "Gas", 'p'};
void showAll()
{
    int i;
    printf("==============================================================\n");
    printf("\n  No  Symbol      Name            Mass         State   Block\n");
    printf("\n============================================================\n");
    for (i = 0; i < 118; i++)
    {
        printf("\n\n%d ", PT[i].ano);
        printf("\t%-3s", PT[i].asym);
        printf("\t%-10s ", PT[i].aname);
        printf("\t%8.3lf ", PT[i].amass);
        printf("\t%-7s", PT[i].astate);
        printf("\t%c", PT[i].ablock);
        if (i % 10 == 9)
        {
            printf("\n\n==============================================================\n");
            printf("\n  No  Symbol      Name            Mass         State   Block\n");
            printf("\n==============================================================\n");
        }
    }
}
void showbyNo()
{
    int i, no;
    system("cls");
    printf("===========================================================\n");
    printf("            Enter Atomic number to search: \n");
    printf("===========================================================\n");
    printf("\n                       >>>");
    scanf("%d", &no);
    printf("===========================================================\n");
    system("cls");
    for (i = 0; i < 118; i++)
    {
        if (no == PT[i].ano)
        {
            printf("====================================================\n");
            printf("\n\t\t Atomic No: %d ", PT[i].ano);
            printf("\n\t\t Atomic Symbol: %s", PT[i].asym);
            printf("\n\t\t Atomic Name: %s", PT[i].aname);
            printf("\n\t\t Atomic Mass: %lf", PT[i].amass);
            printf("\n\t\t State: %s", PT[i].astate);
            printf("\n\t\t Block: %c\n\n", PT[i].ablock);
            printf("====================================================\n");
        }
    }
}
void showbyName()
{
    int i;
    char name[20];
    system("cls");
    printf("====================================================\n");
    printf("            Enter Atomic name to search:\n ");
    printf("====================================================\n\n");
    printf("                >>>");
    scanf("%s", &name);
    printf("====================================================\n");
    system("cls");
    for (i = 0; i < 118; i++)
    {
        if (strcmp(name, PT[i].aname) == 0)
        {
            printf("====================================================\n");
            printf("\n\t\t Atomic No: %d ", PT[i].ano);
            printf("\n\t\t Atomic Symbol: %s", PT[i].asym);
            printf("\n\t\t Atomic Name: %s", PT[i].aname);
            printf("\n\t\t Atomic Mass: %lf", PT[i].amass);
            printf("\n\t\t State: %s", PT[i].astate);
            printf("\n\t\t Block: %c\n\n", PT[i].ablock);
            printf("====================================================\n");
        }
    }
}
void showbySym()
{
    int i;
    char symbol[50];
    system("cls");
    printf("====================================================\n");
    printf("        Enter Atomic symbol to search: \n");
    printf("====================================================\n\n");
    printf("                >>>");
    scanf(" %s", &symbol);
    system("cls");
    for (i = 0; i < 118; i++)
    {
        if (strcmp(symbol, PT[i].asym) == 0)
        {
            printf("====================================================\n");
            printf("\n\t\t Atomic No: %d ", PT[i].ano);
            printf("\n\t\t Atomic Symbol: %s", PT[i].asym);
            printf("\n\t\t Atomic Name: %s", PT[i].aname);
            printf("\n\t\t Atomic Mass: %lf", PT[i].amass);
            printf("\n\t\t State: %s", PT[i].astate);
            printf("\n\t\t Block: %c\n\n", PT[i].ablock);
            printf("====================================================\n");
        }
    }
}
void showbyState()
{
    int i, count = 0;
    char state[8];
    system("cls");
    printf("====================================================\n");
    printf("            Enter state to search: \n");
    printf("====================================================\n\n");
    printf("                    >>>");
    scanf("%s", &state);
    system("cls");
    printf("=======================================================================================\n");
    printf("\n  No  Symbol      Name            Mass                                State     Block\n");
    printf("=======================================================================================\n");
    for (i = 0; i < 118; i++)
    {
        if (strcmp(state, PT[i].astate) == 0)
        {
            printf("\n\n%d ", PT[i].ano);
            printf("\t%-3s", PT[i].asym);
            printf("\t%-10s ", PT[i].aname);
            printf("\t%8.31f", PT[i].amass);
            printf("\t%-7s", PT[i].astate);
            printf("\t%c", PT[i].ablock);
            if (count % 10 == 9)
            {
                printf("\n  No  Symbol      Name            Mass         State   Block\n");
                printf("==============================================================\n");
            }
        }
    }
}
void showbyBlock()
{
    int i, count = 0;
    char block;
    system("cls");
    printf("====================================================\n");
    printf("            Enter block to search: \n");
    printf("====================================================\n");
    printf("                    >>>");
    scanf(" %c", &block);
    system("cls");
    printf("==========================================================================================\n");
    printf("\n  No  Symbol      Name            Mass                                   State     Block\n");
    printf("==========================================================================================\n");

    for (i = 0; i < 118; i++)
    {
        if (block == PT[i].ablock)
        {
            count++;
            printf("\n\n%d ", PT[i].ano);
            printf("\t%-3s", PT[i].asym);
            printf("\t%-10s ", PT[i].aname);
            printf("\t%8.31f", PT[i].amass);
            printf("\t%-7s ", PT[i].astate);
            printf("\t%c\n", PT[i].ablock);
        }
    }
}
void main()
{
    char ch;
    printf("| Modern Periodic Table| \n");
    printf("+----------------------+\n");
    printf("| A: Display All       |\n");
    printf("+----------------------+\n");
    printf("| B: Search by NO      |\n");
    printf("+----------------------+\n");
    printf("| C: Search by  Symbol |\n");
    printf("+----------------------+\n");
    printf("| D: Search by NAME    |\n");
    printf("+----------------------+\n");
    printf("| E: Search by State   |\n");
    printf("+----------------------+\n");
    printf("| F: Search by Block   |\n");
    printf("+----------------------+\n");
    printf("| G: Exit              |\n");
    printf("+----------------------+\n");
    printf(" Enter your choice: \n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'A':
    {
        system("cls");
        showAll();
    }
    break;
    case 'B':
    {
        system("cls");
        showbyNo();
    }
    break;
    case 'C':
    {
        system("cls");
        showbySym();
    }
    break;
    case 'D':
    {
        system("cls");
        showbyName();
    }
    break;
    case 'E':
    {
        system("cls");
        showbyState();
    }
    break;
    case 'F':
    {
        system("cls");
        showbyBlock();
    }
    break;
    case 'G':
    {
        system("cls");
        printf("=======================================================================================\n\n");
        printf("\t                      Thank you...Visit Again \n\n");
        printf("=======================================================================================\n\n");


        getch();
        exit(1);
    }
    break;
    default:
    {
        system("cls");
        printf("=======================================================================================\n\n");
        printf("\t                      INVALID CHOICE    \n\n");
        printf("=======================================================================================\n\n");}
        break;
    }
}
