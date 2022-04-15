#include "../winhttp.h"

//----- (00000001406A5AD0) ----------------------------------------------------
__int64 __fastcall sub_1406A5AD0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rdx
	__int64 v5; // rax
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // ecx
	int v10; // edx
	_DWORD* v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
		if (v5
			&& (v6 = **(unsigned int**)(v3 + 8), v6 < (__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3)
			&& (v7 = *(_QWORD*)(*(_QWORD*)(v5 + 248) + 8 * v6)) != 0)
		{
			v8 = sub_140206C60(*(_DWORD*)(v7 + 4));
			v9 = 0;
			v10 = 0;
			if (v8)
				LOBYTE(v10) = *(_DWORD*)(v8 + 92) != 0;
			LOBYTE(v9) = v10 != 0;
		}
		else
		{
			v9 = 0;
		}
		v11 = (_DWORD*)a1[2];
		v11[2] = 1;
		*v11 = v9;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
		v4[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

