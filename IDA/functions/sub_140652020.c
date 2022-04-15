#include "../winhttp.h"

//----- (0000000140652020) ----------------------------------------------------
__int64 __fastcall sub_140652020(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebp
	_QWORD* v7; // rax
	__int64 v8; // rcx
	unsigned __int64 v9; // rbx
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v12; // rax
	__int64* v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // r11
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	_QWORD* v20; // rax
	__int64 v21; // r11
	unsigned __int64* v22; // rdx
	__int64 v23; // rax
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	__int128 v29; // [rsp+20h] [rbp-38h]
	__int64 v30; // [rsp+30h] [rbp-28h] BYREF
	__int64 v31; // [rsp+38h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v29 = *(_OWORD*)(v3 + 4416);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v4 = *(_QWORD*)(a1 + 16);
		v5 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		*(_QWORD*)(a1 + 16) += 16i64;
		v6 = sub_1400578C0(a1);
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		v8 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v8 = *v7;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v9 = -1i64;
		v10 = (unsigned __int64*)sub_14018F0E0(&v30, (unsigned __int16*)"x")[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710(a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v31)
			sub_14018B900(v31, 0);
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v12 + 8) = 3;
		*(double*)v12 = *(float*)&v29;
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v16 = (unsigned __int64*)sub_14018F0E0(&v30, (unsigned __int16*)"y")[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			sub_140058710(a1, v16, v17);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v31)
			sub_14018B900(v31, 0);
		v18 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v18 + 8) = 3;
		*(double*)v18 = *((float*)&v29 + 1);
		*(_QWORD*)(a1 + 16) += 16i64;
		v19 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v22 = (unsigned __int64*)sub_14018F0E0(&v30, (unsigned __int16*)"z")[1];
		if (v22)
		{
			do
				++v9;
			while (*((_BYTE*)v22 + v9));
			sub_140058710(a1, v22, v9);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v31)
			sub_14018B900(v31, 0);
		v23 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v23 + 8) = 3;
		*(double*)v23 = *((float*)&v29 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v24, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v27, v6);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140652194: variable 'v15' is possibly undefined
// 140652254: variable 'v21' is possibly undefined
// 14065230C: variable 'v26' is possibly undefined
// 14065231E: variable 'v27' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

