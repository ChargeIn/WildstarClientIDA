#include "../winhttp.h"

//----- (000000014072E500) ----------------------------------------------------
__int64 __fastcall sub_14072E500(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rsi
	__int64* v4; // rcx
	int v5; // eax
	unsigned int v6; // ebx
	int v7; // r14d
	int v8; // r15d
	int* v9; // rcx
	int* i; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // r13d
	_QWORD* v17; // rax
	__int64 v18; // rcx
	unsigned __int64 v19; // rsi
	unsigned __int64* v20; // r12
	unsigned __int64 v21; // rbp
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r11
	unsigned __int64* v29; // rbp
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // r11
	__int64 v37; // rdx
	int* v38; // rax
	int* j; // rbx
	__int64 v40; // rcx
	char v41[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v42; // [rsp+28h] [rbp-50h]
	__int64 v43; // [rsp+30h] [rbp-48h] BYREF
	__int64 v44; // [rsp+38h] [rbp-40h]
	__int64 v45; // [rsp+88h] [rbp+10h] BYREF

	result = sub_140056AB0(a1, 1u);
	v3 = (_QWORD*)result;
	if (!result)
		return result;
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = *((_DWORD*)v4 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v45))
		{
			v6 = 0;
			goto LABEL_9;
		}
		LODWORD(v44) = 3;
		v4 = &v43;
		v43 = v45;
	}
	v6 = (int)*(double*)v4;
LABEL_9:
	v7 = 0;
	v8 = 0;
	v42 = sub_14018B280(40i64, 0);
	*(_QWORD*)v42 = v42;
	*((_QWORD*)v42 + 1) = v42;
	(*(void(__fastcall**)(_QWORD, _QWORD, char*))(*(_QWORD*)*v3 + 152i64))(*v3, v6, v41);
	v9 = v42;
	for (i = *(int**)v42; i != v9; i = *(int**)i)
	{
		v11 = *((_QWORD*)i + 2);
		if (!v11 || (*(_DWORD*)(v11 + 16) & 1) == 0)
		{
			v12 = *((_QWORD*)i + 2);
			if (!v12 || (*(_DWORD*)(v12 + 16) & 2) == 0)
			{
				v13 = *((_QWORD*)i + 3);
				if ((*(_DWORD*)(*(_QWORD*)(v13 + 8) + 12i64) & 0x80000) == 0)
				{
					if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v13 + 8)) == 3)
						++v8;
					v9 = v42;
					++v7;
				}
			}
		}
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	v18 = a1[2];
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	a1[2] += 16i64;
	v19 = -1i64;
	v20 = (unsigned __int64*)sub_14018F0E0(&v43, L"nTotal")[1];
	if (v20)
	{
		v21 = -1i64;
		do
			++v21;
		while (*((_BYTE*)v20 + v21));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v22 = a1[2];
		v23 = sub_140062650((__int64)a1, v20, v21);
		*(_DWORD*)(v22 + 8) = 4;
		*(_QWORD*)v22 = v23;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	v24 = v44;
	a1[2] += 16i64;
	if (v24)
		sub_14018B900(v24, 0);
	v25 = a1[2];
	*(_DWORD*)(v25 + 8) = 3;
	*(double*)v25 = (double)v7;
	a1[2] += 16i64;
	v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	a1[2] += 16i64;
	v29 = (unsigned __int64*)sub_14018F0E0(&v43, L"nCompleted")[1];
	if (v29)
	{
		do
			++v19;
		while (*((_BYTE*)v29 + v19));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v30 = a1[2];
		v31 = sub_140062650((__int64)a1, v29, v19);
		*(_DWORD*)(v30 + 8) = 4;
		*(_QWORD*)v30 = v31;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	v32 = v44;
	a1[2] += 16i64;
	if (v32)
		sub_14018B900(v32, 0);
	v33 = a1[2];
	*(_DWORD*)(v33 + 8) = 3;
	*(double*)v33 = (double)v8;
	a1[2] += 16i64;
	v34 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v34, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v35 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	*(_QWORD*)v36 = *v35;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v37, v16);
	v38 = v42;
	for (j = *(int**)v42; j != v42; v38 = v42)
	{
		v40 = (__int64)j;
		j = *(int**)j;
		sub_14018B900(v40, 0);
	}
	*(_QWORD*)v38 = v38;
	*((_QWORD*)v42 + 1) = v42;
	sub_14018B900((__int64)v42, 0);
	return 1i64;
}
// 14072E7BD: variable 'v28' is possibly undefined
// 14072E8B2: variable 'v36' is possibly undefined
// 14072E8C2: variable 'v37' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B46990: using guessed type wchar_t aNcompleted_6[11];
// 140B469A8: using guessed type wchar_t aNtotal[7];
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14072E500: using guessed type char var_58[8];

