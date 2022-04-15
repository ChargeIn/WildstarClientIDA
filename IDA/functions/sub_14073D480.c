#include "../winhttp.h"

//----- (000000014073D480) ----------------------------------------------------
__int64 __fastcall sub_14073D480(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rbp
	unsigned __int64 v5; // rcx
	_DWORD* v6; // rax
	unsigned int i; // edi
	unsigned __int64 v8; // r8
	__int64* v9; // rdx
	__int64 v10; // rax
	int v11; // ecx
	__int64* v12; // rax
	int v13; // esi
	int v14; // edi
	_DWORD* v15; // rax
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+58h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = a1[2];
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 < v5 && v6 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		if ((unsigned int)sub_1400585E0((__int64)a1, 2) > 4)
			return 0i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		for (i = 0; ; ++i)
		{
			while (1)
			{
				v8 = a1[2];
				v9 = (__int64*)dword_140A12138;
				if (a1[3] + 16i64 < v8)
					v9 = (__int64*)(a1[3] + 16i64);
				if (!(unsigned int)sub_14005BA70((__int64)a1, *v9, v8 - 16))
				{
					a1[2] -= 16i64;
					return 1i64;
				}
				a1[2] += 16i64;
				v10 = a1[2];
				v11 = *(_DWORD*)(v10 - 8);
				v12 = (__int64*)(v10 - 16);
				if (v11 != 3)
					break;
			LABEL_19:
				*(_DWORD*)(v3 + 4i64 * i + 8) = (int)*(double*)v12;
				a1[2] -= 16i64;
				++i;
			}
			if (v11 == 4 && sub_14005AC80((char*)(*v12 + 32), (unsigned __int64*)&v18))
			{
				v17 = 3;
				v12 = &v16;
				v16 = v18;
				goto LABEL_19;
			}
			*(_DWORD*)(v3 + 4i64 * i + 8) = 0;
			a1[2] -= 16i64;
		}
	}
	v13 = 0;
	if ((unsigned __int64)v6 >= v5 || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v14 = 0;
	else
		v14 = sub_140056D60(a1, 2u);
	v15 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v15 < a1[2] && v15 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v13 = sub_140056D60(a1, 3u);
	if (v14)
		*(_DWORD*)(v3 + 4i64 * (unsigned int)(v14 - 1) + 8) = v13;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

