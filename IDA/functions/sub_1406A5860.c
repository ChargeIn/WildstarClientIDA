#include "../winhttp.h"

//----- (00000001406A5860) ----------------------------------------------------
__int64 __fastcall sub_1406A5860(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rdx
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // r9
	__int64 v8; // r8
	__int64 v9; // rdx
	int v10; // eax
	int v11; // edx
	_DWORD* v12; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
		v6 = 0;
		if (v5)
		{
			v7 = *(_QWORD*)(v5 + 232);
			v8 = **(unsigned int**)(v3 + 8);
			if (v7 && (unsigned int)v8 < *(_DWORD*)(v5 + 272))
				v9 = v7 + 192 * v8;
			else
				v9 = 0i64;
			v10 = *(_DWORD*)(v9 + 184);
			if ((v10 & 0xFFFFFFFA) != 0 || (v11 = 0, v10 == 4))
				v11 = 1;
			LOBYTE(v6) = v11 != 0;
		}
		v12 = (_DWORD*)a1[2];
		v12[2] = 1;
		*v12 = v6;
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

