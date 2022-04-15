#include "../winhttp.h"

//----- (000000014018CCF0) ----------------------------------------------------
__int64 sub_14018CCF0()
{
	__int64 result; // rax

	QueryPerformanceFrequency(&Frequency);
	qword_140C88490 = Frequency.QuadPart;
	result = 0x624DD2F1A9FBE77i64 * (Frequency.QuadPart + 500);
	qword_140C636B0 = (Frequency.QuadPart + 500) / 0x3E8ui64;
	qword_140C88498 = (Frequency.QuadPart + 500) / 0x3E8ui64;
	return result;
}
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C88490: using guessed type __int64 qword_140C88490;
// 140C88498: using guessed type __int64 qword_140C88498;

