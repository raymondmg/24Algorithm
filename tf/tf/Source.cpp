#include"TwentyFourClass.h"
//
TwentyFourAlgorithm *tfAlgorithm;


//�ж��Ƿ�������24��
void JudgeIsTwentyFour()
{
	if (tfAlgorithm->IsTwentyFour(4))
	{
		cout << "�������24��" << endl;
		tfAlgorithm->printCurrentFormula();
	}
	else
	{
		cout << "���������24��" << endl;
	}
}


void main()
{
	double demo[] = {1,1,1,4};
	tfAlgorithm = new TwentyFourAlgorithm(demo);
	JudgeIsTwentyFour();
}