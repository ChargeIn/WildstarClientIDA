#include "../winhttp.h"

//----- (00000001401A8540) ----------------------------------------------------
__int64 __fastcall sub_1401A8540(__int64 a1, int a2)
{
	__int64 v3; // rbx
	__int64 result; // rax

	if (a2 > 0)
	{
		v3 = (unsigned int)a2;
		do
		{
			result = sub_1401A8480(a1, (__int64)L"    ");
			--v3;
		} while (v3);
	}
	return result;
}
// 140A45390: using guessed type wchar_t asc_140A45390[5];

