#include "../winhttp.h"

//----- (00000001404C7160) ----------------------------------------------------
__int64 __fastcall sub_1404C7160(__int64 a1, __int64 a2, _DWORD* a3)
{
	int v3; // r10d
	_QWORD* v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rax
	_QWORD* v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rax
	_QWORD* v14; // [rsp+38h] [rbp+10h]

	v3 = *(_DWORD*)(a2 + 48);
	if (((v3 - 5) & 0xFFFFFFFA) == 0)
	{
		v7 = *(_QWORD**)(a1 + 56);
		v8 = *(_QWORD*)(a2 + 8);
		v9 = (_QWORD*)v7[1];
		v10 = v7;
		while (v9)
		{
			if (v9[4] < v8)
			{
				v9 = (_QWORD*)v9[3];
			}
			else
			{
				v10 = v9;
				v9 = (_QWORD*)v9[2];
			}
		}
		if (v10 == v7 || (v14 = v10, v8 < v10[4]))
			v14 = v7;
		if (v14 != v7)
		{
			v11 = v14[5];
			if (v11)
			{
				if (*(_QWORD*)(v11 + 88) == v8
					&& *(_DWORD*)(v11 + 112) == *(_DWORD*)(a2 + 32)
					&& *(_DWORD*)(v11 + 108) == *(_DWORD*)(a2 + 28)
					&& *(_DWORD*)(v11 + 116) == *(_DWORD*)(a2 + 36)
					&& *(_DWORD*)(v11 + 120) == *(_DWORD*)(a2 + 40)
					&& *(_DWORD*)(v11 + 128) == v3)
				{
					sub_1404C78E0(a1, v11);
				}
			}
		}
	}
	v12 = sub_1404C7AC0(a1, a2);
	if (v12)
	{
		if (!*(_DWORD*)(v12 + 304)
			&& *(_QWORD*)(v12 + 88) == *(_QWORD*)(a2 + 8)
			&& *(_DWORD*)(v12 + 112) == *(_DWORD*)(a2 + 32)
			&& *(_DWORD*)(v12 + 108) == *(_DWORD*)(a2 + 28)
			&& *(_DWORD*)(v12 + 116) == *(_DWORD*)(a2 + 36)
			&& *(_DWORD*)(v12 + 120) == *(_DWORD*)(a2 + 40)
			&& *(_DWORD*)(v12 + 128) == *(_DWORD*)(a2 + 48))
		{
			*a3 = *(_DWORD*)(v12 + 496);
			return 0i64;
		}
		sub_1404C78E0(a1, v12);
	}
	return 1i64;
}

