#include "../winhttp.h"

//----- (00000001407BE030) ----------------------------------------------------
void __fastcall sub_1407BE030(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v2; // rbp
	unsigned __int64 v3; // rdx
	__int64 v5; // r8
	__int64 v6; // rbx
	__int64 v7; // rbx

	v2 = a2[1];
	*a2 = 0i64;
	v3 = *(_QWORD*)(a1 + 16) - 1i64;
	if (v2 >= v3)
	{
		sub_1407BE530((__int64*)(a1 + 8), v3);
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = 2 * v2;
		*(_QWORD*)(v5 + 8 * v6) = *(_QWORD*)(v5 + 16 * v3);
		*(_QWORD*)(v5 + 8 * v6 + 8) = *(_QWORD*)(v5 + 16 * v3 + 8);
		sub_1407BE530((__int64*)(a1 + 8), v3);
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16 * v2);
		*(_QWORD*)(v7 + 8) = v2;
		if (!(unsigned int)sub_1407BE330(a1, v7))
			sub_1407BE410(a1, v7);
	}
}

