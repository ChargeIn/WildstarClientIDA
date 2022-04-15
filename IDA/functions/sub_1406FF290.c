#include "../winhttp.h"

//----- (00000001406FF290) ----------------------------------------------------
__int64 __fastcall sub_1406FF290(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r9d
	__int64 v6; // rbp
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	unsigned int v14; // edx
	__int64 v15; // rdx
	__int64 v16; // rcx
	int v17; // r8d
	int v18; // edi
	__int64 v19; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v22; // r10
	_DWORD* v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-58h] BYREF
	int v28; // [rsp+28h] [rbp-50h]
	__int64 v29; // [rsp+30h] [rbp-48h]
	int v30; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v31)(); // [rsp+40h] [rbp-38h] BYREF
	int v32; // [rsp+48h] [rbp-30h]
	__int64 v33; // [rsp+50h] [rbp-28h]
	int v34; // [rsp+58h] [rbp-20h]
	double v35; // [rsp+80h] [rbp+8h]

	v33 = a1;
	v1 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v34 = 1;
	v31 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = sub_1400578C0(v1);
	v32 = v5;
	v6 = *(_QWORD*)(qword_140C65898 + 32144);
	v7 = *(_QWORD*)(v6 + 72);
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		while (1)
		{
			v9 = *(_QWORD*)(v1 + 32);
			v27 = off_140B569F0;
			v29 = v1;
			v10 = *(_QWORD*)(v9 + 112);
			v30 = 1;
			if (*(_QWORD*)(v9 + 120) >= v10)
				sub_14005E2C0(v1);
			v11 = *(_QWORD*)(v1 + 16);
			v12 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v1 + 16) += 16i64;
			v13 = sub_1400578C0(v1);
			v14 = *(_DWORD*)(v8 + 32);
			v28 = v13;
			if ((unsigned int)sub_1406FED70((__int64)&v27, v14, 1, 0i64))
			{
				v18 = v28;
				sub_1400FB1D0((__int64)&v31);
				v16 = v29;
				if (v29)
				{
					v17 = v18;
					goto LABEL_11;
				}
			}
			else
			{
				v16 = v29;
				if (v29)
				{
					v17 = v28;
				LABEL_11:
					sub_1400579E0(v16, v15, v17);
				}
			}
			v19 = *(_QWORD*)(v8 + 24);
			if (v19)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
					v8 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = j;
				if (*(_QWORD*)(v8 + 24) != j)
					v8 = j;
			}
			if (v8 == *(_QWORD*)(v6 + 72))
			{
				v1 = v33;
				v5 = v32;
				break;
			}
		}
	}
	v22 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v5 - 1) >= *(_DWORD*)(v22 + 56))
	{
		if ((double)v5 == 0.0)
		{
			v23 = *(_DWORD**)(v22 + 32);
		}
		else
		{
			v35 = (double)v5;
			v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
				+ 40 * ((unsigned int)(LODWORD(v35) + HIDWORD(v35)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
		}
		while (v23[6] != 3 || (double)v5 != *((double*)v23 + 2))
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
		v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v5 - 1));
	}
	v24 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v24 = *(_QWORD*)v23;
	v25 = (unsigned int)v23[2];
	*(_DWORD*)(v24 + 8) = v25;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v25, v5);
	return 1i64;
}
// 1406FF3CA: variable 'v15' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

