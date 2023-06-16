#include <iostream>
#include "Type_1.h"
#include "Type_2.h"
#include "Type_3.h"
#include "Type_4.h"
#include "Type_5.h"
#include "Type__6.h"
#include "Type_7.h"
#include "Type_8.h"
#include "Type_4p.h"
#include "Type_5p.h"
#include "Type_6p.h"
#include "Type_8p.h"
int main()
{
    double A, B, C;
    std::cout << "Vvedite koeficienti 1-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type1 eq1;

    std::cout << "Vvedite koeficienti 2-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type2 eq2(A);

    std::cout << "Vvedite koeficienti 3-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type3 eq3(C);

    std::cout << "Vvedite koeficienti 4-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type4 eq4(A,C);

    std::cout << "Vvedite koeficienti 5-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type5 eq5(B,C);

    std::cout << "Vvedite koeficienti 6-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type6 eq6(A,B,C);

    std::cout << "Vvedite koeficienti 7-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type7 eq7(B);

    std::cout << "Vvedite koeficienti 8-go uravneniya A, B i C cherez probel: " << std::endl;
    std::cin >> A >> B >> C;
    type8 eq8(A, B);

    eq1.show();
    eq1.Get_answer();

    eq2.show();
    eq2.Get_answer();

    eq3.show();
    eq3.Get_answer();

    eq4.show();
    eq4.Get_answer();
    type4p eq4p(A,C);
    eq4p.Get_answer_podbor();

    eq5.show();
    eq5.Get_answer();
    type5p eq5p(B, C);
    eq5p.Get_answer_podbor();

    eq6.show();
    eq6.Get_answer();
    type6p eq6p(A, B, C);
    eq4p.Get_answer_podbor();

    eq7.show();
    eq7.Get_answer();
    
    eq8.show();
    eq8.Get_answer();
    type8p eq8p(A, B);
    eq8p.Get_answer_podbor();
    system("pause");
    return 0;
}