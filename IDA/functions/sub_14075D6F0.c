#include "../winhttp.h"

//----- (000000014075D6F0) ----------------------------------------------------
__int64 __fastcall sub_14075D6F0(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rcx
	int v7; // r9d
	double* v8; // rbx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // edi
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int16* v16; // r10
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	unsigned __int16* v20; // r11
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	int v24; // r11d
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	int v28; // r11d
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	__int64 v33; // rdx
	__int64 v34; // rax
	double* i; // rax
	__int64 j; // rax
	__int64 v37; // r10
	_DWORD* v38; // rcx
	__int64 v39; // r8
	__int64 v40; // rdx
	__int64(__fastcall * *v42)(); // [rsp+20h] [rbp-48h] BYREF
	int v43; // [rsp+28h] [rbp-40h]
	_QWORD* v44; // [rsp+30h] [rbp-38h]
	int v45; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * *v46)(); // [rsp+40h] [rbp-28h] BYREF
	int v47; // [rsp+48h] [rbp-20h]
	_QWORD* v48; // [rsp+50h] [rbp-18h]
	int v49; // [rsp+58h] [rbp-10h]
	double v50; // [rsp+70h] [rbp+8h] BYREF

	v44 = (_QWORD*)a1;
	v1 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v42 = off_140B569F0;
	v45 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v6 = qword_140C7DE58;
	v7 = v5;
	v43 = v5;
	v8 = *(double**)(qword_140C7DE58 + 16);
	if (v8 != (double*)qword_140C7DE58)
	{
		do
		{
			if (*((_QWORD*)v8 + 5))
			{
				v9 = v1[4];
				v46 = off_140B569F0;
				v48 = v1;
				v10 = *(_QWORD*)(v9 + 112);
				v49 = 1;
				if (*(_QWORD*)(v9 + 120) >= v10)
					sub_14005E2C0((__int64)v1);
				v11 = v1[2];
				v12 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v11 + 8) = 5;
				*(_QWORD*)v11 = v12;
				v1[2] += 16i64;
				v13 = sub_1400578C0((__int64)v1);
				v50 = v8[4];
				v47 = v13;
				if ((unsigned int)sub_140433EB0(v1, &v50))
				{
					sub_1400FB540((__int64)&v46);
					v1[2] -= 16i64;
				}
				v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
				v15 = v1[2];
				*(_QWORD*)v15 = *v14;
				*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
				v1[2] += 16i64;
				sub_1400F0870((__int64)v1, v15, L"strGuildName", v16);
				v1[2] -= 16i64;
				v17 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				v1[2] += 16i64;
				sub_1400F0870((__int64)v1, v19, L"strGmName", v20);
				v1[2] -= 16i64;
				v21 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
				*(_QWORD*)v22 = *v21;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v23, L"nMemberCount", v24);
				v1[2] -= 16i64;
				v25 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v27, L"nPerkCount", v28);
				v1[2] -= 16i64;
				v29 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v31, L"eClassification", v32);
				v1[2] -= 16i64;
				sub_1400FB1D0((__int64)&v42);
				sub_1400579E0((__int64)v1, v33, v13);
				v6 = qword_140C7DE58;
			}
			v34 = *((_QWORD*)v8 + 3);
			if (v34)
			{
				v8 = (double*)*((_QWORD*)v8 + 3);
				for (i = *(double**)(v34 + 16); i; i = (double*)*((_QWORD*)i + 2))
					v8 = i;
			}
			else
			{
				for (j = *((_QWORD*)v8 + 1); v8 == *(double**)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = (double*)j;
				if (*((_QWORD*)v8 + 3) != j)
					v8 = (double*)j;
			}
		} while (v8 != (double*)v6);
		v1 = v44;
		v7 = v43;
	}
	v37 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v7 - 1) >= *(_DWORD*)(v37 + 56))
	{
		v50 = (double)v7;
		if ((double)v7 == 0.0)
			v38 = *(_DWORD**)(v37 + 32);
		else
			v38 = (_DWORD*)(*(_QWORD*)(v37 + 32)
				+ 40 * ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v37 + 11)) - 1) | 1)));
		while (v38[6] != 3 || (double)v7 != *((double*)v38 + 2))
		{
			v38 = (_DWORD*)*((_QWORD*)v38 + 4);
			if (!v38)
			{
				v38 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v38 = (_DWORD*)(*(_QWORD*)(v37 + 24) + 16i64 * (v7 - 1));
	}
	v39 = v1[2];
	*(_QWORD*)v39 = *(_QWORD*)v38;
	v40 = (unsigned int)v38[2];
	*(_DWORD*)(v39 + 8) = v40;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v40, v7);
	return 1i64;
}
// 14075D849: variable 'v16' is possibly undefined
// 14075D87A: variable 'v18' is possibly undefined
// 14075D88C: variable 'v19' is possibly undefined
// 14075D88C: variable 'v20' is possibly undefined
// 14075D8BE: variable 'v22' is possibly undefined
// 14075D8D0: variable 'v23' is possibly undefined
// 14075D8D0: variable 'v24' is possibly undefined
// 14075D902: variable 'v26' is possibly undefined
// 14075D914: variable 'v27' is possibly undefined
// 14075D914: variable 'v28' is possibly undefined
// 14075D945: variable 'v30' is possibly undefined
// 14075D957: variable 'v31' is possibly undefined
// 14075D957: variable 'v32' is possibly undefined
// 14075D973: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B75D38: using guessed type wchar_t aEclassificatio[16];
// 140B75D58: using guessed type wchar_t aNperkcount[11];
// 140B75D70: using guessed type wchar_t aNmembercount[13];
// 140B75D90: using guessed type wchar_t aStrgmname[10];
// 140B75DA8: using guessed type wchar_t aStrguildname[13];
// 140C7DE58: using guessed type __int64 qword_140C7DE58;

