#include "../winhttp.h"

//----- (0000000140368970) ----------------------------------------------------
__int64 __fastcall sub_140368970(__int64 a1, int a2, __int64 a3, _WORD* a4, int a5, int a6, __int64* a7)
{
	int* v11; // rax
	__int64 v12; // rbx
	int v13; // esi

	if (!a4 || !*a4 || !a7)
		return 2147942487i64;
	v11 = sub_14018B280(1200i64, 0);
	if (v11)
		v12 = sub_14038AA40((__int64)v11, a1);
	else
		v12 = 0i64;
	v13 = sub_14038B300(v12, a2, a3, (__int64)a4, a5, a6);
	if (v13 >= 0)
	{
		*a7 = v12;
		return 0i64;
	}
	else
	{
		if (v12)
		{
			sub_14038ACF0(v12);
			sub_14018B900(v12, 0);
		}
		return (unsigned int)v13;
	}
}

