#include "../winhttp.h"

//----- (000000014052FC40) ----------------------------------------------------
__int64 __fastcall sub_14052FC40(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rcx
	_DWORD* v4; // rax
	unsigned __int64 v5; // rsi
	int v6; // eax
	int v7; // ebp
	unsigned int(__fastcall * **v8)(_QWORD); // r14
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // edi
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned __int16* v17; // r10
	int v18; // r14d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // rdx
	_DWORD* v22; // rax
	__int64* v23; // rax
	_QWORD* v24; // rax
	__int64 v25; // rdx
	__int64 v26; // [rsp+20h] [rbp-28h] BYREF
	__int64 v27; // [rsp+28h] [rbp-20h]

	result = sub_14052E9B0(a1);
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = -1i64;
		if ((unsigned __int64)v4 >= a1[2] || (v3 = dword_140A12138, v4 == dword_140A12138) || *(int*)(a1[3] + 24i64) <= 0)
			v6 = -1;
		else
			v6 = sub_140056D60(a1, 2u);
		v7 = 0;
		if (qword_140C658F8)
			v8 = sub_1404484F0((__int64)v3, v6);
		else
			v8 = 0i64;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		if (v8)
		{
			(**v8)(v8);
			v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v13 = a1[2];
			*(_QWORD*)v13 = *v12;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v13, L"id", v14);
			a1[2] -= 16i64;
			(*v8)[1](v8);
			v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v16 = a1[2];
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v16, L"strName", v17);
			a1[2] -= 16i64;
			v18 = ((__int64(__fastcall*)(_QWORD))(*v8)[6])(v8) & 4;
			v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v20 = a1[2];
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			a1[2] += 16i64;
			v21 = (unsigned __int64*)sub_14018F0E0(&v26, L"bCanDisplay")[1];
			if (v21)
			{
				do
					++v5;
				while (*((_BYTE*)v21 + v5));
				sub_140058710((__int64)a1, v21, v5);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v27)
				sub_14018B900(v27, 0);
			v22 = (_DWORD*)a1[2];
			LOBYTE(v7) = v18 != 0;
			v22[2] = 1;
			*v22 = v7;
			a1[2] += 16i64;
			v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
		}
		v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v25 = a1[2];
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v25, v11);
		return 1i64;
	}
	return result;
}
// 14052FCAD: variable 'v3' is possibly undefined
// 14052FD42: variable 'v14' is possibly undefined
// 14052FD8C: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13268: using guessed type wchar_t aStrname_30[8];
// 140B13278: using guessed type wchar_t aId_17[3];
// 140B13400: using guessed type wchar_t aBcandisplay[12];
// 140C658F8: using guessed type __int64 qword_140C658F8;

