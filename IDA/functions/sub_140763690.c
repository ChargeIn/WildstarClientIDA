#include "../winhttp.h"

//----- (0000000140763690) ----------------------------------------------------
__int64 __fastcall sub_140763690(__int64 a1)
{
	int v1; // ebp
	unsigned int i; // edx
	unsigned int v4; // ecx
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	unsigned int v9; // r12d
	int v10; // r13d
	__int64 v11; // r9
	_DWORD* v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // r14
	unsigned __int64* v15; // r15
	unsigned __int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64* v21; // rax
	int v22; // eax
	__int64 v23; // rax
	int v24; // ecx
	int v25; // ebp
	__int64 v26; // r9
	_DWORD* v27; // rdx
	__int64 v28; // rcx
	unsigned __int64* v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rax
	__int64 v36; // r10
	__int64 v37; // r9
	_DWORD* v38; // rdx
	__int64 v40; // [rsp+20h] [rbp-58h] BYREF
	__int64 v41; // [rsp+28h] [rbp-50h]
	double v42; // [rsp+80h] [rbp+8h]
	double v43; // [rsp+80h] [rbp+8h]
	double v44; // [rsp+80h] [rbp+8h]

	v1 = 0;
	for (i = 0; i < 7; ++i)
	{
		if (i == 6)
			v4 = 6;
		else
			v4 = i;
		if ((unsigned __int64)v4 < *(_QWORD*)(qword_140C65898 + 1392))
		{
			v5 = *(_QWORD*)(qword_140C65898 + 1384) + 16i64 * v4;
			if (v5)
				v1 += *(_DWORD*)(v5 + 8);
		}
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = sub_1400578C0(a1);
	v9 = v8 - 1;
	v10 = v8;
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v11 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v12 = *(_DWORD**)(v11 + 32);
		}
		else
		{
			v42 = (double)v8;
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 32)
				+ 40 * ((unsigned int)(LODWORD(v42) + HIDWORD(v42)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
		}
		while (v12[6] != 3 || (double)v8 != *((double*)v12 + 2))
		{
			v12 = (_DWORD*)*((_QWORD*)v12 + 4);
			if (!v12)
			{
				v12 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v8 - 1));
	}
	v13 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v13 = *(_QWORD*)v12;
	*(_DWORD*)(v13 + 8) = v12[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = -1i64;
	v15 = (unsigned __int64*)sub_14018F0E0(&v40, L"nCurrent")[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v17 = *(_QWORD*)(a1 + 16);
		v18 = sub_140062650(a1, v15, v16);
		*(_DWORD*)(v17 + 8) = 4;
		*(_QWORD*)v17 = v18;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v19 = v41;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v19)
		sub_14018B900(v19, 0);
	v20 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v22 = dword_140DC4D78;
	*(_QWORD*)(a1 + 16) -= 48i64;
	if ((v22 & 1) == 0)
	{
		dword_140DC4D78 = v22 | 1;
		if (qword_140C63840)
		{
			v23 = qword_140C63840(off_140A6A408, 1203i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_38;
			v23 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 1203i64);
		}
		if (v23)
		{
			v24 = *(_DWORD*)(v23 + 4);
		LABEL_39:
			dword_140DC4D7C = v24;
			goto LABEL_40;
		}
	LABEL_38:
		v24 = 1000;
		goto LABEL_39;
	}
LABEL_40:
	v25 = sub_1403D2140(qword_140C65898, 0x24u) + dword_140DC4D7C;
	v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if (v9 >= *(_DWORD*)(v26 + 56))
	{
		if ((double)v10 == 0.0)
		{
			v27 = *(_DWORD**)(v26 + 32);
		}
		else
		{
			v43 = (double)v10;
			v27 = (_DWORD*)(*(_QWORD*)(v26 + 32)
				+ 40 * ((unsigned int)(LODWORD(v43) + HIDWORD(v43)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1)));
		}
		while (v27[6] != 3 || (double)v10 != *((double*)v27 + 2))
		{
			v27 = (_DWORD*)*((_QWORD*)v27 + 4);
			if (!v27)
			{
				v27 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v10 - 1));
	}
	v28 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v28 = *(_QWORD*)v27;
	*(_DWORD*)(v28 + 8) = v27[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v29 = (unsigned __int64*)sub_14018F0E0(&v40, L"nMax")[1];
	if (v29)
	{
		do
			++v14;
		while (*((_BYTE*)v29 + v14));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v30 = *(_QWORD*)(a1 + 16);
		v31 = sub_140062650(a1, v29, v14);
		*(_DWORD*)(v30 + 8) = 4;
		*(_QWORD*)v30 = v31;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v32 = v41;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v32)
		sub_14018B900(v32, 0);
	v33 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v33 + 8) = 3;
	*(double*)v33 = (double)v25;
	*(_QWORD*)(a1 + 16) += 16i64;
	v34 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v34, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v35 = *(_QWORD*)(a1 + 32);
	v36 = *(_QWORD*)(a1 + 16) - 48i64;
	*(_QWORD*)(a1 + 16) = v36;
	v37 = *(_QWORD*)(v35 + 160);
	if (v9 >= *(_DWORD*)(v37 + 56))
	{
		if ((double)v10 == 0.0)
		{
			v38 = *(_DWORD**)(v37 + 32);
		}
		else
		{
			v44 = (double)v10;
			v38 = (_DWORD*)(*(_QWORD*)(v37 + 32)
				+ 40 * ((unsigned int)(LODWORD(v44) + HIDWORD(v44)) % (((1i64 << *(_BYTE*)(v37 + 11)) - 1) | 1)));
		}
		while (v38[6] != 3 || (double)v10 != *((double*)v38 + 2))
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
		v38 = (_DWORD*)(*(_QWORD*)(v37 + 24) + 16i64 * (v10 - 1));
	}
	*(_QWORD*)v36 = *(_QWORD*)v38;
	*(_DWORD*)(v36 + 8) = v38[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, (__int64)v38, v10);
	return 1i64;
}
// 1407636CE: conditional instruction was optimized away because edx.4<6u
// 1407636D5: conditional instruction was optimized away because edx.4<6u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140B4DB20: using guessed type wchar_t aNmax_7[5];
// 140B4DB30: using guessed type wchar_t aNcurrent_4[9];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4D78: using guessed type int dword_140DC4D78;
// 140DC4D7C: using guessed type int dword_140DC4D7C;

