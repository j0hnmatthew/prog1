/*
   File: prog1_jmg388_jag619.cpp

   Author: John Garza & Jose Gonzalez
   C.S.1428.001
   Lab Section: L13, L22
   Program: #1
   Due Date: 09/20/17

   Prix fixe (pronounced "prefix") menus are common in Europe. A prix fixe
   menu typically includes a number of pre-determined items presented as a
   multi-course meal at a set price. For example, one evening, a restaurant
   may offer a four course prix fixe menu of escargot for the first course,
   beef bourguignon (boor-geen-yuhn) for the second, a cheese platter for
   the third, and creme brulee for dessert. The prix fixe menu for the
   evening, along with its cost, is typically posted on a message board
   outside the restaurant.

   =======================================================================

   This program prompts the user for the number of prix fixe meals ordered
   by the customer(s). The program calculates the total cost of the meal(s),
   the sales tax, the tip, and the total amount due. The program then prints
   in receipt form the individual price of a prix fixe meal, the number of
   prix fixe meals ordered, the total for all prix fixe meals ordered, the
   sales tax, the tip and the total amount due. Sample layout of a receipt
   is shown below.

   Input (keyboard): meals_ordered      (integer)
   Constants:
          Sample Values:
              PRIX_FIXE = 50.00         (double)
              SALES_TAX_RATE = .0825    (double)
              TIP_PERCENTAGE = .15      (double)
   Output (console):
          Sample Layout:

              Author's Name
              C.S.1428.?           // '?' represents author's lecture section #
              Lab Section: L?      // '?' represents student's lab section #
              --/--/--             // dashes represent due date, month/day/year
                   <blank line>
              Prix Fixe Price:    $   50.00
                                    x     8
              Total for 8 meals:     400.00
              Sales Tax @8.25%        33.00
              15% Tip                 64.95
              Total Due:          $  497.95

   =======================================================================

   <Output will vary based on actual input and values used for constants.>
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{

   const double PRIX_FIXE = 75.50;
   const double SALES_TAX_RATE = 0.085;
   const double TIP_PERCENTAGE = 0.15;

   int meals_ordered;

   double subtotal,
          tax,
          total_with_tax,
          tip_left,
          amount_owed;

   cout << "Enter the number of prix fixe meals ordered: ";
   cin >> meals_ordered;

   subtotal = meals_ordered * PRIX_FIXE;
   tax = subtotal * SALES_TAX_RATE;
   total_with_tax = tax + subtotal;
   tip_left = total_with_tax * TIP_PERCENTAGE;
   amount_owed = total_with_tax + tip_left;

   cout << endl << endl
        << "John Garza & Jose Gonzalez" << endl
        << "C.S.1428.001" << endl
        << "Lab Section: L13, L22" << endl
        << "09/20/17" << endl << endl

        << fixed << setprecision(2)
        << "Prix Fixe Price:    " << "$  " << setw(6) << PRIX_FIXE << endl
        << "                      x" << setw(6) << meals_ordered << endl
        << "Total for " << meals_ordered << " meals:     " << setw(6) <<
           subtotal << endl
        << fixed << setprecision(1)
        << "Sales Tax @" << SALES_TAX_RATE * 100 << "%        " << fixed <<
           setprecision(2) << setw(6) << tax << endl
        << "15% Tip                " << setw(6) << tip_left << endl
        << "Total Due:          " << "$  " << setw(6) << amount_owed << endl;

   system("PAUSE>NUL");

   return 0;
}
