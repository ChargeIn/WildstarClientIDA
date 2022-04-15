#include "../winhttp.h"

//----- (0000000140763490) ----------------------------------------------------
__int64 __fastcall sub_140763490(_QWORD* a1)
{
	_QWORD* v1; // rdi
	int v2; // eax
	_DWORD* v3; // rcx
	int v4; // ebp
	unsigned __int64 v5; // rsi
	int v6; // eax
	BOOL v7; // r14d
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // r10d
	unsigned int v13; // eax
	_QWORD* v14; // rbx
	int* v15; // rax
	__int64 v16; // rcx
	int v17; // eax
	int* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // r8
	__int64 v21; // rdx
	int v22; // r10d
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-28h] BYREF
	int v25; // [rsp+28h] [rbp-20h]
	_QWORD* v26; // [rsp+30h] [rbp-18h]
	int v27; // [rsp+38h] [rbp-10h]

	v1 = a1;
	v2 = sub_140056D60(a1, 1u);
	v3 = dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(v1[3] + 16i64) < v1[2])
		v3 = (_DWORD*)(v1[3] + 16i64);
	v5 = 0i64;
	v6 = v3[2];
	v7 = v6 && (v6 != 1 || *v3);
	v8 = v1[4];
	v26 = v1;
	v24 = off_140B569F0;
	v9 = *(_QWORD*)(v8 + 112);
	v27 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)v1);
	v10 = v1[2];
	v11 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	v1[2] += 16i64;
	v12 = sub_1400578C0((__int64)v1);
	v25 = v12;
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_29;
		v13 = 6;
	}
	else
	{
		v13 = v4 - 1;
		if ((unsigned int)(v4 - 1) >= 7)
			goto LABEL_29;
	}
	if ((unsigned __int64)v13 < *(_QWORD*)(qword_140C65898 + 1392))
	{
		v14 = (_QWORD*)(*(_QWORD*)(qword_140C65898 + 1384) + 16i64 * v13);
		if (v14)
		{
			if (v14[1])
			{
				do
				{
					v15 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*v14 + 4 * v5), 0i64);
					if (v15)
					{
						v17 = sub_14041F750(v16, v15);
						if (v17 != 6 && v17 != 31 && (v7 || v17 != 132 && v17 != 41 && v17 != 144))
						{
							v18 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*v14 + 4 * v5), 0i64);
							if ((unsigned int)sub_140415C70(v1, (__int64)v18))
							{
								sub_1400FB470((__int64)&v24);
								v1 = v26;
								v26[2] -= 16i64;
							}
						}
					}
					++v5;
				} while (v5 < v14[1]);
				v12 = v25;
			}
		}
	}
LABEL_29:
	v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v12);
	v20 = v1[2];
	*(_QWORD*)v20 = *v19;
	v21 = *((unsigned int*)v19 + 2);
	*(_DWORD*)(v20 + 8) = v21;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v21, v22);
	return 1i64;
}
// 1407635BD: variable 'v16' is possibly undefined
// 14076365D: variable 'v22' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

