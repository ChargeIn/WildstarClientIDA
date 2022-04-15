#include "../winhttp.h"

//----- (0000000140781300) ----------------------------------------------------
__int64 __fastcall sub_140781300(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int16* v3; // rdi
	__int64 v5; // r9
	__int64 v6; // r10
	int v7; // r11d
	__int64 result; // rax
	int v9; // eax
	_QWORD* v10; // r9
	__int64 v11; // rax
	float v12; // xmm0_4

	v3 = (unsigned __int16*)(a3 + 16);
	if (sub_1401C9770((unsigned __int16*)(a3 + 16)) < 0.0000099999997)
		return 2147500037i64;
	v9 = *(_DWORD*)(v6 + 32);
	*(_DWORD*)(a1 + 8) = v7;
	*(_QWORD*)(a1 + 16) = v5;
	*(_DWORD*)(a1 + 12) = v9;
	if (v5)
	{
		v10 = (_QWORD*)(v5 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v10;
			*(_QWORD*)(a1 + 32) = *v10;
			*v10 = a1;
			v11 = *(_QWORD*)(a1 + 32);
			if (v11)
				*(_QWORD*)(v11 + 24) = a1 + 32;
		}
	}
	result = sub_140783910(
		a1 + 56,
		*(_DWORD*)v6,
		0i64,
		*(int**)(v6 + 8),
		*(_DWORD*)(v6 + 20),
		*(_DWORD*)(v6 + 24),
		*(_DWORD*)(v6 + 28),
		0i64);
	if ((int)result >= 0)
	{
		v12 = sub_1401C9770(v3);
		result = 0i64;
		*(float*)(a1 + 112) = v12;
	}
	return result;
}
// 140781338: variable 'v6' is possibly undefined
// 14078133C: variable 'v7' is possibly undefined
// 140781340: variable 'v5' is possibly undefined

