#include "../winhttp.h"

//----- (00000001405654A0) ----------------------------------------------------
__m128 __fastcall sub_1405654A0(__int64 a1, unsigned int a2, __int64 a3, float a4)
{
	__int128 v4; // xmm0
	__int64 v5; // rdi
	__int128 v9; // xmm6
	_DWORD* v10; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rsi
	unsigned __int64 v15; // rbp
	unsigned __int64 i; // rdi
	__int64 v17; // rax
	_DWORD* v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // [rsp+70h] [rbp+8h]

	v5 = qword_140C65B70;
	if (a3)
	{
		v9 = 0i64;
		v10 = (_DWORD*)sub_1403C2300(a1, *(_DWORD*)(a3 + 4));
		v11 = *(_QWORD*)(v5 + 1888);
		v12 = *(_QWORD*)(v11 + 8);
		v13 = v11;
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < a2)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v13 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v13 == v11 || (v21 = v13, a2 < *(_DWORD*)(v13 + 32)))
			v21 = *(_QWORD*)(v5 + 1888);
		if (v21 == v11 || (v14 = *(_QWORD*)(v21 + 40)) == 0)
		{
			*(float*)&v4 = sub_140565600(v12, v10, (__int64)v10, a3, a4);
			return (__m128)v4;
		}
		else
		{
			v15 = *(_QWORD*)(v14 + 72);
			for (i = 0i64; i < v15; ++i)
			{
				v17 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(v14 + 64) + 4 * i));
				if (v17)
				{
					v18 = (_DWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v17 + 340));
					v19 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v14 + 84));
					*(float*)&v9 = *(float*)&v9 + sub_140565600(v20, v18, v19, a3, a4);
				}
			}
		}
		return (__m128)v9;
	}
	else
	{
		return (__m128)0i64;
	}
}
// 1405655AB: variable 'v20' is possibly undefined
// 1405655D2: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

