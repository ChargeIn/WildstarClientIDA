#include "../winhttp.h"

//----- (00000001403D86E0) ----------------------------------------------------
__int64* __fastcall sub_1403D86E0(__int64* a1, __int64 a2)
{
	__int64 v2; // rdi
	int* v5; // rbx
	__int64 v6; // rbx

	v2 = *(_QWORD*)(a2 + 8);
	if (v2)
	{
		v5 = sub_14018B280(8 * v2 + 16, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v2;
			v6 = (__int64)(v5 + 4);
			*(_QWORD*)(v6 - 16) = off_140B55060;
		}
		else
		{
			v6 = 16i64;
		}
	}
	else
	{
		v6 = 0i64;
	}
	sub_1407DB590((int*)v6, *(int**)a2, 8 * v2);
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	a1[1] = v2;
	*a1 = v6;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

