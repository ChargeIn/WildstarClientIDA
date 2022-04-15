#include "../winhttp.h"

//----- (0000000140059C20) ----------------------------------------------------
signed __int64 __fastcall sub_140059C20(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rdx
	int* v6; // rsi
	int v7; // edi
	__int64 v8; // r14
	_DWORD* v9; // rax
	int v10; // r10d
	__int64 v11; // rax
	signed __int64 result; // rax
	int v13; // edx
	double v14; // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]

	if (!a2 || *(_BYTE*)(a2 + 10))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	else
	{
		v4 = sub_14005C1B0(a1, 0, 0);
		v5 = *(_QWORD*)(a2 + 32);
		v6 = *(int**)(v5 + 40);
		v7 = 0;
		v8 = v4;
		if (*(int*)(v5 + 84) > 0)
		{
			do
			{
				v9 = sub_14005C3C0(v8, *v6);
				if (v9 == dword_140A12138)
				{
					v15 = 3;
					v14 = (double)v10;
					v9 = sub_14005C260(a1, v8, (int*)&v14);
				}
				*v9 = 1;
				v9[2] = 1;
				++v7;
				++v6;
			} while (v7 < *(_DWORD*)(*(_QWORD*)(a2 + 32) + 84i64));
		}
		v11 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v11 = v8;
		*(_DWORD*)(v11 + 8) = 5;
	}
	result = *(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16);
	if (result <= 16)
	{
		v13 = *(_DWORD*)(a1 + 88);
		if (v13 >= 1)
		{
			result = sub_140061210(a1, 2 * v13);
			*(_QWORD*)(a1 + 16) += 16i64;
			return result;
		}
		result = sub_140061210(a1, v13 + 1);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140059CAF: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

