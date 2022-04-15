#include "../winhttp.h"

//----- (000000014059C9E0) ----------------------------------------------------
__int64 __fastcall sub_14059C9E0(_QWORD* a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r8
	_DWORD* v9; // rdx
	_DWORD* v10; // rcx
	int v11; // eax
	BOOL v12; // eax
	BOOL v13; // r14d
	int v14; // eax
	BOOL v15; // eax
	__int64 v16; // rcx
	bool v17; // zf
	unsigned __int64 v18; // rax
	BOOL v19; // r12d
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // ebp
	__int64 v23; // r15
	unsigned __int64 v24; // r14
	unsigned __int64 v25; // rbx
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rax
	unsigned __int64 v29; // r14
	unsigned __int64 v30; // rbx
	__int64 v31; // rdx
	__int64 v32; // rcx
	__int64 v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // rdx
	__int64 v37; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v38; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v39)(); // [rsp+30h] [rbp-38h] BYREF
	int v40; // [rsp+38h] [rbp-30h]
	_QWORD* v41; // [rsp+40h] [rbp-28h]
	int v42; // [rsp+48h] [rbp-20h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(v7 + 400);
	v9 = dword_140A12138;
	v10 = dword_140A12138;
	if (*(_QWORD*)(v8 + 24) < *(_QWORD*)(v8 + 16))
		v10 = *(_DWORD**)(v8 + 24);
	v11 = v10[2];
	v12 = v11 && (v11 != 1 || *v10);
	v13 = v12;
	if ((unsigned __int64)(*(_QWORD*)(v8 + 24) + 16i64) < *(_QWORD*)(v8 + 16))
		v9 = (_DWORD*)(*(_QWORD*)(v8 + 24) + 16i64);
	v14 = v9[2];
	v15 = v14 && (v14 != 1 || *v9);
	v16 = a1[4];
	v17 = !v15;
	v39 = off_140B569F0;
	v18 = *(_QWORD*)(v16 + 112);
	v19 = !v17;
	v41 = a1;
	v42 = 1;
	if (*(_QWORD*)(v16 + 120) >= v18)
		sub_14005E2C0((__int64)a1);
	v20 = a1[2];
	v21 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v20 + 8) = 5;
	*(_QWORD*)v20 = v21;
	a1[2] += 16i64;
	v22 = sub_1400578C0((__int64)a1);
	v40 = v22;
	v38 = 0i64;
	v23 = 0i64;
	v37 = 0i64;
	if (v13)
	{
		sub_1403D6710(qword_140C65898 + 160, &v37);
		v24 = v38;
		v23 = v37;
		v25 = 0i64;
		if (v38)
		{
			do
			{
				v26 = *(_QWORD*)(v23 + 8 * v25);
				v27 = *(_QWORD*)(v26 + 64);
				if (v27)
				{
					v28 = *(_QWORD*)(v26 + 72);
					if (v28 || (v28 = v27 + 8, v27 != -8))
					{
						if (*(_DWORD*)(v28 + 304) && (unsigned int)sub_140415D60(a1, (void(__fastcall***)(_QWORD))v26))
						{
							sub_1400FB470((__int64)&v39);
							a1 = v41;
							v41[2] -= 16i64;
						}
					}
				}
				++v25;
			} while (v25 < v24);
			v22 = v40;
		}
	}
	v38 = 0i64;
	v37 = 0i64;
	if (v19)
	{
		sub_1403D6710(qword_140C65898 + 184, &v37);
		v29 = v38;
		v30 = 0i64;
		v1 = v37;
		if (v38)
		{
			do
			{
				v31 = *(_QWORD*)(v1 + 8 * v30);
				v32 = *(_QWORD*)(v31 + 64);
				if (v32)
				{
					v33 = *(_QWORD*)(v31 + 72);
					if (v33 || (v33 = v32 + 8, v32 != -8))
					{
						if (*(_DWORD*)(v33 + 304) && (unsigned int)sub_140415D60(a1, (void(__fastcall***)(_QWORD))v31))
						{
							sub_1400FB470((__int64)&v39);
							a1 = v41;
							v41[2] -= 16i64;
						}
					}
				}
				++v30;
			} while (v30 < v29);
			v22 = v40;
		}
	}
	v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v22);
	v35 = a1[2];
	*(_QWORD*)v35 = *v34;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
	a1[2] += 16i64;
	if (v1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	sub_1400579E0((__int64)a1, v35, v22);
	return 1i64;
}
// 14059CC81: variable 'v35' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

