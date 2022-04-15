#include "../winhttp.h"

//----- (00000001404A5BC0) ----------------------------------------------------
__int64 __fastcall sub_1404A5BC0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // r15d
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // esi
	__int64 v7; // rbx
	unsigned int v8; // ebp
	__int64 v9; // rax
	int v10; // edx
	__int16* v11; // rax
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v15; // eax
	unsigned int v16; // ebx
	int* v17; // rax
	int v18; // ebp
	int* v19; // rax
	__int64 v20; // rbp
	__int64 v21; // rax
	int* v22; // rax
	__int64 v23; // r8
	__int64 v24; // rcx
	unsigned int v25; // eax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rdx
	_QWORD v29[2]; // [rsp+20h] [rbp-38h] BYREF
	char v30[16]; // [rsp+30h] [rbp-28h] BYREF

	result = sub_1404A5620((__int64)a1);
	v3 = result;
	if ((int)result >= 0)
	{
		sub_140008410((__int64)(a1 + 12));
		v5 = a1[2];
		v6 = 0;
		v7 = *(_QWORD*)(v5 + 16);
		if (v7 != v5)
		{
			do
			{
				v8 = *(_DWORD*)(v7 + 32);
				if (qword_140C63840)
				{
					v9 = qword_140C63840(off_140A6A670, v8, qword_140C63858);
				}
				else if (dword_140C63B5C)
				{
					v9 = 0i64;
				}
				else if ((int)sub_140202E80() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65030 + 24i64))(qword_140C65030, v8);
				}
				else
				{
					v9 = 0i64;
				}
				v10 = *(_DWORD*)(v9 + 4);
				if (v10)
				{
					v11 = sub_14034BDD0(v4, v10);
					LODWORD(v29[0]) = *(_DWORD*)(v7 + 32);
					v29[1] = v11;
					sub_140055F80((__int64)(a1 + 12), (__int64)v30, v29);
				}
				v12 = *(_QWORD*)(v7 + 24);
				if (v12)
				{
					v7 = *(_QWORD*)(v7 + 24);
					for (i = *(_QWORD*)(v12 + 16); i; i = *(_QWORD*)(i + 16))
						v7 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v7 = j;
					if (*(_QWORD*)(v7 + 24) != j)
						v7 = j;
				}
			} while (v7 != a1[2]);
		}
		if (qword_140C63838)
		{
			v15 = qword_140C63838(off_140A6A670, qword_140C63858);
		}
		else if (dword_140C63B5C)
		{
			v15 = 0;
		}
		else if ((int)sub_140202E80() >= 0)
		{
			v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65030 + 40i64))(qword_140C65030);
		}
		else
		{
			v15 = 0;
		}
		v16 = v15 - 1;
		if (qword_140C63848)
		{
			v17 = (int*)qword_140C63848(off_140A6A670, v16, qword_140C63858);
		}
		else if (dword_140C63B5C)
		{
			v17 = 0i64;
		}
		else if ((int)sub_140202E80() >= 0)
		{
			v17 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65030 + 32i64))(
				qword_140C65030,
				v16);
		}
		else
		{
			v17 = 0i64;
		}
		v18 = *v17;
		v19 = sub_14018B280(60i64, 0);
		a1[16] = v19;
		sub_1407E4830(v19, 0i64, 0x3Cui64);
		v20 = (unsigned int)(v18 + 1);
		*(_DWORD*)a1[16] = 1065353216;
		*(_DWORD*)(a1[16] + 12i64) = 1065353216;
		*(_DWORD*)(a1[16] + 24i64) = 1065353216;
		*(_DWORD*)(a1[16] + 36i64) = 1065353216;
		*(_DWORD*)(a1[16] + 48i64) = 1065353216;
		v21 = 12i64 * (unsigned int)v20;
		if (!is_mul_ok((unsigned int)v20, 0xCui64))
			v21 = -1i64;
		v22 = sub_14018B280(v21, 0);
		a1[17] = v22;
		sub_1407E4830(v22, 0i64, 12 * v20);
		v23 = 0i64;
		if ((int)v20 >= 4)
		{
			v24 = 0i64;
			v25 = ((unsigned int)(v20 - 4) >> 2) + 1;
			v26 = v25;
			v6 = 4 * v25;
			v23 = 4i64 * v25;
			do
			{
				v24 += 48i64;
				*(_DWORD*)(v24 + a1[17] - 48) = 1065353216;
				*(_DWORD*)(v24 + a1[17] - 36) = 1065353216;
				*(_DWORD*)(v24 + a1[17] - 24) = 1065353216;
				*(_DWORD*)(v24 + a1[17] - 12) = 1065353216;
				--v26;
			} while (v26);
		}
		if (v6 < (unsigned int)v20)
		{
			v27 = 12 * v23;
			v28 = (unsigned int)v20 - v6;
			do
			{
				v27 += 12i64;
				*(_DWORD*)(v27 + a1[17] - 12) = 1065353216;
				--v28;
			} while (v28);
		}
		return v3;
	}
	return result;
}
// 1404A5C64: variable 'v4' is possibly undefined
// 140A6A670: using guessed type wchar_t *off_140A6A670[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B5C: using guessed type int dword_140C63B5C;
// 140C65030: using guessed type __int64 qword_140C65030;
// 1404A5BC0: using guessed type char var_28[16];

