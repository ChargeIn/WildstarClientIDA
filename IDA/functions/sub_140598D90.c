#include "../winhttp.h"

//----- (0000000140598D90) ----------------------------------------------------
__int64 __fastcall sub_140598D90(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rbx
	int v7; // esi
	unsigned __int64 v8; // rbp
	__int64 v9; // r14
	unsigned __int64 v10; // rbx
	__int64 v11; // r9
	unsigned int v12; // edx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rax
	__int64* v18; // rax
	unsigned __int64 v19; // r8
	unsigned __int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // r9
	_DWORD* v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64 v27; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v28; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v29)(); // [rsp+30h] [rbp-38h] BYREF
	int v30; // [rsp+38h] [rbp-30h]
	_QWORD* v31; // [rsp+40h] [rbp-28h]
	int v32; // [rsp+48h] [rbp-20h]
	double v33; // [rsp+70h] [rbp+8h] BYREF
	__int64 v34; // [rsp+78h] [rbp+10h] BYREF

	v1 = (_QWORD*)a1;
	v31 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v29 = off_140B569F0;
	v32 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v6 = qword_140C65898;
	v7 = v5;
	v30 = v5;
	v28 = 0i64;
	v27 = 0i64;
	sub_1403D6710(qword_140C65898 + 184, &v27);
	sub_1403D6710(v6 + 208, &v27);
	sub_1403D6710(v6 + 232, &v27);
	v8 = v28;
	v9 = v27;
	v10 = 0i64;
	if (v28)
	{
		do
		{
			v11 = *(_QWORD*)(v9 + 8 * v10);
			v12 = **(_DWORD**)(v11 + 64);
			v13 = *(_QWORD*)(qword_140C65B90 + 176);
			v14 = v13;
			v15 = *(_QWORD*)(v13 + 8);
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < v12)
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v14 = v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v14 == v13 || v12 < *(_DWORD*)(v14 + 32))
			{
				v34 = *(_QWORD*)(qword_140C65B90 + 176);
				v16 = &v34;
			}
			else
			{
				v33 = *(double*)&v14;
				v16 = (__int64*)&v33;
			}
			v17 = *v16;
			if (v17 != *(_QWORD*)(qword_140C65B90 + 176))
			{
				v18 = (__int64*)(v17 + 40);
				if (v18)
				{
					v19 = v18[1];
					v20 = 0i64;
					if (v19)
					{
						v21 = *v18;
						while (!*(_QWORD*)v21 || *(_DWORD*)(*(_QWORD*)v21 + 28i64))
						{
							++v20;
							v21 += 8i64;
							if (v20 >= v19)
								goto LABEL_23;
						}
						if ((unsigned int)sub_140415D60(v1, (void(__fastcall***)(_QWORD))v11))
						{
							sub_1400FB470((__int64)&v29);
							v1 = v31;
							v31[2] -= 16i64;
						}
					}
				}
			}
		LABEL_23:
			++v10;
		} while (v10 < v8);
		v7 = v30;
	}
	v22 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v7 - 1) >= *(_DWORD*)(v22 + 56))
	{
		v33 = (double)v7;
		if ((double)v7 == 0.0)
			v23 = *(_DWORD**)(v22 + 32);
		else
			v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
				+ 40 * ((unsigned int)(LODWORD(v33) + HIDWORD(v33)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
		while (v23[6] != 3 || (double)v7 != *((double*)v23 + 2))
		{
			v23 = (_DWORD*)*((_QWORD*)v23 + 4);
			if (!v23)
			{
				v23 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v7 - 1));
	}
	v24 = v1[2];
	*(_QWORD*)v24 = *(_QWORD*)v23;
	v25 = (unsigned int)v23[2];
	*(_DWORD*)(v24 + 8) = v25;
	v1[2] += 16i64;
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	sub_1400579E0((__int64)v1, v25, v7);
	return 1i64;
}
// 140598FEC: variable 'v25' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B90: using guessed type __int64 qword_140C65B90;

