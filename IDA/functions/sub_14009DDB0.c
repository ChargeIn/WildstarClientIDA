#include "../winhttp.h"

//----- (000000014009DDB0) ----------------------------------------------------
__int64 __fastcall sub_14009DDB0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 192i64;
	*a3 += 24i64;
	result = 6i64;
	do
	{
		*a2 += 700i64;
		--result;
	} while (result);
	return result;
}

