#include "../winhttp.h"

//----- (0000000140706CE0) ----------------------------------------------------
__int64 __fastcall sub_140706CE0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // eax
	unsigned int* v10; // rdx
	__int64 v11; // r8
	_QWORD* v12; // rcx
	__int64 v13; // r9
	_QWORD* v14; // rbx
	unsigned int** v15; // r14
	__int64 v16; // rcx
	unsigned int v17; // eax
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rdx
	__int64 v23; // r10
	_DWORD* v24; // rcx
	__int64 v25; // r8
	__int64 v26; // rdx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-68h] BYREF
	unsigned int v29; // [rsp+28h] [rbp-60h]
	__int64 v30; // [rsp+30h] [rbp-58h]
	int v31; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v32)(); // [rsp+40h] [rbp-48h] BYREF
	int v33; // [rsp+48h] [rbp-40h]
	__int64 v34; // [rsp+50h] [rbp-38h]
	int v35; // [rsp+58h] [rbp-30h]
	double v36; // [rsp+90h] [rbp+8h]

	v30 = a1;
	v3 = a1;
	v4 = *(_QWORD*)(a1 + 32);
	v31 = 1;
	v28 = off_140B569F0;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(v3);
	v7 = *(_QWORD*)(v3 + 16);
	v8 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v3 + 16) += 16i64;
	v9 = sub_1400578C0(v3);
	v12 = *(_QWORD**)(a2 + 8);
	v13 = v9;
	v29 = v9;
	v14 = (_QWORD*)*v12;
	if ((_QWORD*)*v12 != v12)
	{
		do
		{
			v15 = (unsigned int**)v14[2];
			if (v15 && (~((*v15)[3] >> 1) & 1) != 0)
			{
				v16 = *(_QWORD*)(qword_140C65898 + 7152);
				if (v16)
					LODWORD(v16) = (*(__int64(__fastcall**)(__int64, unsigned int*, __int64, __int64, __int64(__fastcall**)()))(*(_QWORD*)v16 + 24i64))(
						v16,
						v10,
						v11,
						v13,
						v28);
				v10 = *v15;
				v17 = (*v15)[5];
				if ((!v17 || v17 == 1 && (_DWORD)v16 == 167 || v17 == 2 && (_DWORD)v16 == 166)
					&& (v10[3] & 4) == 0
					&& sub_14024B980(v10[6]))
				{
					v18 = *(_QWORD*)(v3 + 32);
					v32 = off_140B569F0;
					v34 = v3;
					v19 = *(_QWORD*)(v18 + 112);
					v35 = 1;
					if (*(_QWORD*)(v18 + 120) >= v19)
						sub_14005E2C0(v3);
					v20 = *(_QWORD*)(v3 + 16);
					v21 = sub_14005C1B0(v3, 0, 0);
					*(_DWORD*)(v20 + 8) = 5;
					*(_QWORD*)v20 = v21;
					*(_QWORD*)(v3 + 16) += 16i64;
					LODWORD(v20) = sub_1400578C0(v3);
					v33 = v20;
					sub_140706140(v3, (__int64)&v32, v15, a3);
					sub_1400FB1D0((__int64)&v28);
					sub_1400579E0(v3, v22, v20);
				}
			}
			v14 = (_QWORD*)*v14;
		} while (v14 != *(_QWORD**)(a2 + 8));
		v3 = v30;
		LODWORD(v13) = v29;
	}
	v23 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v23 + 56))
	{
		if ((double)(int)v13 == 0.0)
		{
			v24 = *(_DWORD**)(v23 + 32);
		}
		else
		{
			v36 = (double)(int)v13;
			v24 = (_DWORD*)(*(_QWORD*)(v23 + 32)
				+ 40 * ((unsigned int)(LODWORD(v36) + HIDWORD(v36)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
		}
		while (v24[6] != 3 || (double)(int)v13 != *((double*)v24 + 2))
		{
			v24 = (_DWORD*)*((_QWORD*)v24 + 4);
			if (!v24)
			{
				v24 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * ((int)v13 - 1));
	}
	v25 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v25 = *(_QWORD*)v24;
	v26 = (unsigned int)v24[2];
	*(_DWORD*)(v25 + 8) = v26;
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400579E0(v3, v26, v13);
	return 1i64;
}
// 140706DB6: variable 'v10' is possibly undefined
// 140706DB6: variable 'v11' is possibly undefined
// 140706DB6: variable 'v13' is possibly undefined
// 140706E7D: variable 'v22' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

