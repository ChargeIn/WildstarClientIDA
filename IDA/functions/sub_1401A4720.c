#include "../winhttp.h"

//----- (00000001401A4720) ----------------------------------------------------
__int64 __fastcall sub_1401A4720(__int64 a1, unsigned __int16* a2, unsigned int a3)
{
	__int64 v3; // r13
	int v4; // esi
	__int64 v7; // rbx
	_QWORD* v8; // r15
	_QWORD* i; // rdi
	int v10; // ecx

	v3 = *(int*)(a1 + 8);
	v4 = 0;
	v7 = 0i64;
	if ((int)v3 > 0)
	{
		v8 = *(_QWORD**)a1;
		for (i = *(_QWORD**)a1; ; ++i)
		{
			v10 = *(unsigned __int16*)*i;
			if ((((v10 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v10 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*i + 2i64, a2))
			{
				break;
			}
			++v7;
			++v4;
			if (v7 >= v3)
				return a3;
		}
		if (v4 + 1 < (int)v3)
			return (unsigned int)sub_14018E820((WCHAR*)v8[v4 + 1]);
	}
	return a3;
}

