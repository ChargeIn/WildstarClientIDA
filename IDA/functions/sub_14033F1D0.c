#include "../winhttp.h"

//----- (000000014033F1D0) ----------------------------------------------------
__int64 __fastcall sub_14033F1D0(__int64 a1)
{
	unsigned int v1; // edi
	int* v3; // rsi
	__int64 v4; // rax
	__int64 v6; // r14
	__int64 v7; // rsi
	__int64 v8; // rbp
	__int64 v9; // rbx
	__int64 v10; // rdi
	__int64 v11; // rdi
	__int64 v12; // rdi
	__int64 i; // rdi
	__int64 j; // rbx
	__int64 v15; // rcx
	__int64 v17; // rbx
	__int64 v18; // r8
	__int64 v19; // rbx
	__int64 v20; // rdi
	__int64 v21; // rbx
	__int64 v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // r8
	char v25[8]; // [rsp+30h] [rbp-58h] BYREF
	int* v26; // [rsp+38h] [rbp-50h]
	__int64 v28; // [rsp+48h] [rbp-40h]
	char v29[8]; // [rsp+50h] [rbp-38h] BYREF
	__int64 v30; // [rsp+58h] [rbp-30h]
	__int64 v31; // [rsp+60h] [rbp-28h]

	v1 = 0;
	v3 = 0i64;
	v26 = 0i64;
	v28 = 0i64;
	v4 = 0i64;
	while (asc_140AE9774[++v4] != 0)
		;
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v26 = v3;
		v28 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t", 2 * v6);
	if ((int*)((char*)v3 + 2 * v6))
		*((_WORD*)v3 + v6) = 0;
	sub_14018F570((__int64)v29, a1, (__int64)v25, 34, 92);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v7 = v31;
	v8 = v30;
	if (((v31 - v30) & 0xFFFFFFFFFFFFFFE0ui64) == 0)
	{
		v9 = qword_140C63748;
		v10 = *(_QWORD*)(qword_140C63748 + 56);
		if (v10 != *(_QWORD*)(qword_140C63748 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v10 + 8))(*(_QWORD*)v10, L"usage: sound <cmd>");
				v10 += 16i64;
			} while (v10 != *(_QWORD*)(v9 + 64));
			v9 = qword_140C63748;
		}
		v11 = *(_QWORD*)(v9 + 56);
		if (v11 != *(_QWORD*)(v9 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v11 + 8))(*(_QWORD*)v11, L"       cmd = reset");
				v11 += 16i64;
			} while (v11 != *(_QWORD*)(v9 + 64));
			v9 = qword_140C63748;
		}
		v12 = *(_QWORD*)(v9 + 56);
		if (v12 != *(_QWORD*)(v9 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v12 + 8))(*(_QWORD*)v12, L"       cmd = on");
				v12 += 16i64;
			} while (v12 != *(_QWORD*)(v9 + 64));
			v9 = qword_140C63748;
		}
		for (i = *(_QWORD*)(v9 + 56); i != *(_QWORD*)(v9 + 64); i += 16i64)
			(*(void(__fastcall**)(_QWORD, const wchar_t*))(i + 8))(*(_QWORD*)i, L"       cmd = off");
		goto LABEL_21;
	}
	v17 = *(_QWORD*)(v30 + 8);
	if ((unsigned int)sub_14018E2C0(v17, L"on"))
	{
		if ((unsigned int)sub_14018E2C0(v17, L"off"))
		{
			if ((unsigned int)sub_14018E2C0(v17, L"reset"))
			{
			LABEL_21:
				v1 = -2147024809;
				goto LABEL_22;
			}
			v1 = sub_14033F5E0(v23, v22, v24);
		}
		else
		{
			v19 = qword_140C65850;
			if (*(_BYTE*)(qword_140C65850 + 72))
			{
				sub_14033F0A0(qword_140C65850, *(_QWORD*)(qword_140C65850 + 104), v18);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v19 + 96) + 408i64))(*(_QWORD*)(v19 + 96));
				*(_BYTE*)(v19 + 72) = 0;
			}
			else
			{
				v20 = qword_140C63748;
				v21 = *(_QWORD*)(qword_140C63748 + 56);
				if (v21 != *(_QWORD*)(qword_140C63748 + 64))
				{
					do
					{
						(*(void(__fastcall**)(_QWORD, const wchar_t*))(v21 + 8))(*(_QWORD*)v21, L"sound is already off.");
						v21 += 16i64;
					} while (v21 != *(_QWORD*)(v20 + 64));
				}
				v1 = -2147467259;
			}
		}
	}
	else
	{
		v1 = sub_14033F4E0();
	}
LABEL_22:
	for (j = v8; j != v7; j += 32i64)
	{
		v15 = *(_QWORD*)(j + 8);
		if (v15)
			sub_14018B900(v15, 0);
	}
	if (v8)
		sub_14018B900(v8, 0);
	return v1;
}
// 14033F448: variable 'v18' is possibly undefined
// 14033F47A: variable 'v23' is possibly undefined
// 14033F47A: variable 'v22' is possibly undefined
// 14033F47A: variable 'v24' is possibly undefined
// 140AE9774: using guessed type wchar_t asc_140AE9774[3];
// 140AEA5F4: using guessed type wchar_t aOn[3];
// 140AF3E58: using guessed type wchar_t aCmdReset[19];
// 140AF3F20: using guessed type wchar_t aUsageSoundCmd[19];
// 140AF3F70: using guessed type wchar_t aSoundIsAlready[22];
// 140AF40D8: using guessed type wchar_t aCmdOff[17];
// 140AF4160: using guessed type wchar_t aCmdOn[16];
// 140AF4180: using guessed type wchar_t aOff[4];
// 140AF41B8: using guessed type wchar_t aReset[6];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C65850: using guessed type __int64 qword_140C65850;
// 14033F1D0: using guessed type char var_58[8];
// 14033F1D0: using guessed type char var_38[8];

