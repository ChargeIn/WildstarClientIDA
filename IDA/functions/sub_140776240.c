#include "../winhttp.h"

//----- (0000000140776240) ----------------------------------------------------
__int64* __fastcall sub_140776240(__int64* a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax

	v2 = *(_QWORD*)(a2 + 8);
	a1[1] = v2;
	if (v2)
	{
		v5 = sub_14018B280(12 * v2 + 16, 0);
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
	v7 = a1[1];
	*a1 = v6;
	sub_1407DB590((int*)v6, *(int**)a2, 12 * v7);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

