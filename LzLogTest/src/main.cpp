// LzLogTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <windows.h>
#include <iostream>
#include <time.h>
#include <bitset>


#include "LzLog/LzLog.h"
#include "LzUtils.h"

using namespace std;


int main()
{

	LzLog::Init(getCurDirW());
	clock_t c1 = clock(), c2, c3;
	int i = 123;
	float f = 345.6789;
	double d = 98.765432109876;
	unsigned long long ll = 0xFEDCBA9876;

	int count = 1000 * 1000;
	while (count-- > 0)
	{
		/*LzLogError << "LzLogTest A: count " << i--;
		LzLogFail << "LzLogTest B: count " << f--;
		LzLogInfo << "LzLogTest C: count " << d++;
		LzLogDebug << "LzLogTest D: count " << Log::NumbericBase::Hex << ll++;*/
		LzLogInfo << "LzLogTest. i: " << i-- << ", f: " << f-- << ", d: " << d-- << Log::NumbericBase::Hex << ", ll: " << ll << Log::NumbericBase::Dec << ", " << ll--;
	}

	c2 = clock();
	std::cout << "c2 - c1: " << c2 - c1 << std::endl;
	LzLog::Uninit();
	c3 = clock();
	std::cout << "c3 - c2: " << c3 - c2 << std::endl;
	Sleep(100 * 1000);

	return 0;
    
 }