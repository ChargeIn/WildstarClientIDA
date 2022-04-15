#include "../winhttp.h"

//----- (00000001406EDAA0) ----------------------------------------------------
__int64 __fastcall sub_1406EDAA0(__int64 a1)
{
	_QWORD* v1; // rbp
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebx
	__int64 v6; // r8
	_DWORD* v7; // rax
	int v8; // ecx
	int v9; // eax
	_QWORD* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // rdi
	__int64 v15; // r9
	unsigned int v16; // edx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rsi
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v28; // rax
	__int64 k; // rax
	__int64 m; // rax
	_QWORD* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // r8
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-38h] BYREF
	int v36; // [rsp+28h] [rbp-30h]
	_QWORD* v37; // [rsp+30h] [rbp-28h]
	int v38; // [rsp+38h] [rbp-20h]
	__int64 v39; // [rsp+60h] [rbp+8h] BYREF
	__int64 v40; // [rsp+68h] [rbp+10h] BYREF

	v1 = (_QWORD*)a1;
	v37 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v35 = off_140B569F0;
	v38 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v36 = v5;
	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120) || (v6 = qword_140C65970) == 0)
	{
		v32 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v33 = v1[2];
		*(_QWORD*)v33 = *v32;
		v11 = *((unsigned int*)v32 + 2);
		*(_DWORD*)(v33 + 8) = v11;
		goto LABEL_53;
	}
	v7 = (_DWORD*)v1[3];
	v8 = *(_DWORD*)(qword_140C65970 + 8);
	if ((unsigned __int64)v7 < v1[2] && v7 != dword_140A12138 && (int)v7[2] > 0)
	{
		v9 = sub_140056D60(v1, 1u);
		v6 = qword_140C65970;
		v8 = v9;
	}
	if (v8 >= 4)
	{
		v10 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v11 = v1[2];
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		goto LABEL_53;
	}
	v12 = *(_QWORD*)(qword_140C65968 + 16) + 32i64 * v8;
	v13 = *(_QWORD*)(v12 + 8);
	v14 = *(_QWORD*)(v13 + 16);
	if (v14 == v13)
		goto LABEL_51;
	do
	{
		v15 = *(_QWORD*)(v6 + 64);
		v16 = *(_DWORD*)(v14 + 32);
		v17 = *(_QWORD*)(v15 + 8);
		v18 = v15;
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < v16)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v18 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v18 == v15 || v16 < *(_DWORD*)(v18 + 32))
		{
			v40 = *(_QWORD*)(v6 + 64);
			v19 = &v40;
		}
		else
		{
			v39 = v18;
			v19 = &v39;
		}
		v20 = *v19;
		if (v20 != v15)
		{
			v21 = *(_QWORD*)(v20 + 40);
			if (v21)
			{
				v22 = *(_QWORD*)(v6 + 88);
				if (!v22 || ***(_DWORD***)(v22 + 72) != v16)
				{
					v23 = *(_QWORD*)(v21 + 16);
					v24 = *(_QWORD*)(v23 + 16);
					if (v24 == v23)
						goto LABEL_41;
					while ((*(int(__fastcall**)(_QWORD))(**(_QWORD**)(v24 + 40) + 208i64))(*(_QWORD*)(v24 + 40)) < 2)
					{
						v25 = *(_QWORD*)(v24 + 24);
						if (v25)
						{
							v24 = *(_QWORD*)(v24 + 24);
							for (i = *(_QWORD*)(v25 + 16); i; i = *(_QWORD*)(i + 16))
								v24 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v24 + 8); v24 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v24 = j;
							if (*(_QWORD*)(v24 + 24) != j)
								v24 = j;
						}
						if (v24 == *(_QWORD*)(v21 + 16))
							goto LABEL_40;
					}
				}
				if ((unsigned int)sub_140432BA0(v1, *(_QWORD*)(v21 + 72)))
				{
					sub_1400FB470((__int64)&v35);
					v1 = v37;
					v37[2] -= 16i64;
				}
			LABEL_40:
				v6 = qword_140C65970;
			}
		}
	LABEL_41:
		v28 = *(_QWORD*)(v14 + 24);
		if (v28)
		{
			v14 = *(_QWORD*)(v14 + 24);
			for (k = *(_QWORD*)(v28 + 16); k; k = *(_QWORD*)(k + 16))
				v14 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v14 = m;
			if (*(_QWORD*)(v14 + 24) != m)
				v14 = m;
		}
	} while (v14 != *(_QWORD*)(v12 + 8));
	v5 = v36;
LABEL_51:
	v31 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
	v11 = v1[2];
	*(_QWORD*)v11 = *v31;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v31 + 2);
LABEL_53:
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v11, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

