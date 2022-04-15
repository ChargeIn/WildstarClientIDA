#include "../winhttp.h"

//----- (0000000140735980) ----------------------------------------------------
__int64 __fastcall sub_140735980(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx
	unsigned __int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // ebx
	int* v9; // rbp
	unsigned int v10; // eax
	unsigned int v11; // r13d
	unsigned int v12; // r12d
	__int64 v13; // rax
	__int64 v14; // r14
	unsigned __int64 v15; // rcx
	int* v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rdi
	unsigned __int64 v19; // rdi
	char* v20; // rdi
	_QWORD* v21; // rax
	__int16* v22; // r8
	unsigned __int64 v23; // rcx
	char* v24; // rax
	__int64 v25; // rax
	bool v26; // di
	_QWORD* v27; // rax
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64(__fastcall * *v30)(); // [rsp+30h] [rbp-68h] BYREF
	int v31; // [rsp+38h] [rbp-60h]
	__int64 v32; // [rsp+40h] [rbp-58h]
	int v33; // [rsp+48h] [rbp-50h]
	__int64 v34; // [rsp+50h] [rbp-48h] BYREF
	__int64 v35; // [rsp+58h] [rbp-40h]
	__int64 v36; // [rsp+A8h] [rbp+10h]

	result = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v3 = result;
	v36 = result;
	if (!result)
		return result;
	v4 = *(_QWORD*)(a1 + 32);
	v5 = *(_QWORD*)(v4 + 112);
	v30 = off_140B569F0;
	v32 = a1;
	v33 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = sub_1400578C0(a1);
	v31 = v8;
	v9 = 0i64;
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6A788, qword_140C63858);
	}
	else
	{
		if (dword_140C64DB4)
		{
			v11 = 0;
			goto LABEL_12;
		}
		if ((int)sub_1402043C0() < 0)
		{
			v11 = 0;
			goto LABEL_12;
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63998 + 40i64))(qword_140C63998);
	}
	v11 = v10;
LABEL_12:
	v12 = 0;
	if (!v11)
		goto LABEL_44;
	do
	{
		if (qword_140C63848)
		{
			v13 = qword_140C63848(off_140A6A788, v12, qword_140C63858);
		}
		else
		{
			if (dword_140C64DB4 || (int)sub_1402043C0() < 0)
				goto LABEL_42;
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63998 + 32i64))(qword_140C63998, v12);
		}
		v14 = v13;
		if (v13)
		{
			if (v3 == qword_140C7DFE0)
			{
				v15 = *(_QWORD*)(v13 + 8);
				if (v15)
				{
					if (v15 <= qword_140C3FE70)
						v16 = (int*)(v15 + qword_140C3FE68);
					else
						v16 = 0i64;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = 0i64;
				if (*(_WORD*)v16)
				{
					do
						++v17;
					while (*((_WORD*)v16 + v17));
				}
				v18 = (2 * v17) >> 1;
				if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v9 = sub_14018B280(2 * (v18 + 1), 0);
				v19 = 2 * v18;
				sub_1407DB590(v9, v16, v19);
				v20 = (char*)v9 + v19;
				if (v20)
					*(_WORD*)v20 = 0;
				v21 = sub_14018EFA0(&v34, (__int64)L"WARPLOT -");
				v22 = (__int16*)v21[1];
				v23 = (__int64)(v21[2] - (_QWORD)v22) >> 1;
				if (v23 > (v20 - (char*)v9) >> 1 || (v24 = (char*)sub_14010A450(v9, v20, v22, &v22[v23]), v24 == v20))
					v25 = -1i64;
				else
					v25 = (v24 - (char*)v9) >> 1;
				v26 = v25 == 0;
				if (v35)
					sub_14018B900(v35, 0);
				if (v26)
					sub_140731D30(a1, v14, (__int64)&v30);
				if (v9)
					sub_14018B900((__int64)v9, 0);
				v3 = v36;
				v9 = 0i64;
			}
			else
			{
				sub_140731D30(a1, v13, (__int64)&v30);
			}
		}
	LABEL_42:
		++v12;
	} while (v12 < v11);
	a1 = v32;
	v8 = v31;
LABEL_44:
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	v28 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v28 = *v27;
	v29 = *((unsigned int*)v27 + 2);
	*(_DWORD*)(v28 + 8) = v29;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v29, v8);
	return 1i64;
}
// 140A6A788: using guessed type wchar_t *off_140A6A788[2];
// 140B47498: using guessed type wchar_t aWarplot_0[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63998: using guessed type __int64 qword_140C63998;
// 140C64DB4: using guessed type int dword_140C64DB4;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

