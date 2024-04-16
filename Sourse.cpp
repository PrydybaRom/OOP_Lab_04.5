#include <iostream>
#include "Integer.h"
#include "Real.h"

using namespace std;

int main()
{
    Number* num1 = new Integer();
    Number* num2 = new Integer();

    Number* num3 = new Real();
    Number* num4 = new Real();

    // INPUT OUTPUT
    num1->Input();
    num2->Input();

    num1->Output();
    num2->Output();
    cout << "Integer type: " << typeid(*num1).name() << endl;

    num3->Input();
    num4->Input();
    cout << "Real type: " << typeid(*num3).name() << endl;


    // ADD
    cout << endl << "ADD Integer num1 + num2: " << endl;
    Number* resultAdd = num1->add(num2);
    if (resultAdd)
    {
        resultAdd->Output();
        delete resultAdd;
    }
    // SUB
    cout << endl << "SUB Integer num1 - num2: " << endl;
    Number* resultSub = num1->sub(num2);
    if (resultSub)
    {
        resultSub->Output();
        delete resultSub;
    }


    // MUL
    cout << endl << "MUL Real num3 * num4: " << endl;
    Number* resultMul = num3->mul(num4);
    if (resultMul)
    {
        resultMul->Output();
        delete resultMul;
    }
    // DIV 
    cout << endl << "DIV Real num3 / num4: " << endl;
    Number* resultDiv = num3->div(num4);
    if (resultDiv)
    {
        resultDiv->Output();
        delete resultDiv;
    }

    return 0;
}
