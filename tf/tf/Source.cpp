#include"TwentyFourClass.h"
//
TwentyFourAlgorithm *tfAlgorithm;


//判断是否可以组成24点
void JudgeIsTwentyFour()
{
	if (tfAlgorithm->IsTwentyFour(4))
	{
		cout << "可以组成24点" << endl;
		tfAlgorithm->printCurrentFormula();
	}
	else
	{
		cout << "不可以组成24点" << endl;
	}
}


void main()
{
	double demo[] = {1,1,1,4};
	tfAlgorithm = new TwentyFourAlgorithm(demo);
	JudgeIsTwentyFour();
}