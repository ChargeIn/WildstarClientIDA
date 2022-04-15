#include "../winhttp.h"

//----- (0000000140603450) ----------------------------------------------------
__int64 __fastcall sub_140603450(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	_DWORD* v4; // rdx
	__int64 v6; // rdi
	_DWORD* v7; // rdx
	unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), a2 + 8, &v8))
			v4 = *(_DWORD**)(*(_QWORD*)(v2 + 88) + 8 * v8);
		else
			v4 = 0i64;
		v4[52] = *(_DWORD*)(a2 + 32);
		v4[53] = *(_DWORD*)(a2 + 36);
		v4[54] = *(_DWORD*)(a2 + 40);
		v4[56] = *(_DWORD*)(a2 + 48);
		v4[58] = *(_DWORD*)(a2 + 56);
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4536i64);
		return 0i64;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 72);
		if (v6 && *(_QWORD*)(v6 + 72) == *(_QWORD*)a2)
		{
			if (sub_14079EE60(*(_QWORD*)(a1 + 72), a2 + 8, &v8))
				v7 = *(_DWORD**)(*(_QWORD*)(v6 + 88) + 8 * v8);
			else
				v7 = 0i64;
			v7[52] = *(_DWORD*)(a2 + 32);
			v7[53] = *(_DWORD*)(a2 + 36);
			v7[54] = *(_DWORD*)(a2 + 40);
			v7[56] = *(_DWORD*)(a2 + 48);
			v7[58] = *(_DWORD*)(a2 + 56);
		}
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

