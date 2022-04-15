#include "../winhttp.h"

//----- (0000000140538480) ----------------------------------------------------
void __fastcall sub_140538480(_QWORD* a1)
{
	_QWORD* v2; // rbx
	int i; // edi
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1 + 46;
	for (i = 5; i >= 0; --i)
	{
		v4 = *(v2 - 6);
		v2 -= 6;
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*v2 = 0i64;
		}
		v5 = v2[3];
		if (v5)
			sub_14018B900(v5, 0);
	}
	v6 = a1[4];
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[4] = 0i64;
	}
	v7 = a1[7];
	if (v7)
		sub_14018B900(v7, 0);
}

