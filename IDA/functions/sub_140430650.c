#include "../winhttp.h"

//----- (0000000140430650) ----------------------------------------------------
void __fastcall sub_140430650(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
	_QWORD* v5; // rdi
	__int64 v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // rax
	unsigned __int64 v12; // r14
	__int64 v13; // rcx
	unsigned __int64* v14; // rbp
	unsigned __int64 v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rdx
	__int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rdx
	_QWORD v27[4]; // [rsp+40h] [rbp-A8h] BYREF
	unsigned __int16 v28[32]; // [rsp+60h] [rbp-88h] BYREF

	if (a3)
	{
		v5 = *(_QWORD**)(a1 + 400);
		v9 = a2;
		if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
			sub_14005E2C0((__int64)v5);
		v10 = v5[2];
		v11 = sub_14005C1B0((__int64)v5, 0, 0);
		*(_DWORD*)(v10 + 8) = 5;
		v12 = 0i64;
		*(_QWORD*)v10 = v11;
		v5[2] += 16i64;
		do
		{
			sub_14001B370(v28, 30i64, L"%I64u", *(_QWORD*)(v9 + 8 * v12));
			v13 = v5[2];
			*(_DWORD*)(v13 + 8) = 3;
			*(double*)v13 = (double)((int)v12 + 1);
			v5[2] += 16i64;
			v14 = (unsigned __int64*)sub_14018F0E0(v27, v28)[1];
			if (v14)
			{
				v15 = -1i64;
				do
					++v15;
				while (*((_BYTE*)v14 + v15));
				if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
					sub_14005E2C0((__int64)v5);
				v16 = v5[2];
				v17 = sub_140062650((__int64)v5, v14, v15);
				v9 = a2;
				*(_DWORD*)(v16 + 8) = 4;
				*(_QWORD*)v16 = v17;
			}
			else
			{
				*(_DWORD*)(v5[2] + 8i64) = 0;
			}
			v18 = v27[1];
			v5[2] += 16i64;
			if (v18)
				sub_14018B900(v18, 0);
			sub_14005EA50((__int64)v5, (__int64*)(v5[2] - 48i64), (int*)(v5[2] - 32i64), (unsigned int*)(v5[2] - 16i64));
			v5[2] -= 32i64;
			++v12;
		} while (v12 < a3);
		v19 = (unsigned int)sub_1400578C0((__int64)v5);
		sub_1400EA3E0(a1, "AvailableMail", "Tb", v19, a4);
		sub_1400579E0((__int64)v5, v20, v19);
		if (a4)
		{
			v21 = sub_140629AF0(qword_140C65898 + 27592, a5);
			if (v21)
			{
				if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
					sub_14005E2C0((__int64)v5);
				v22 = v5[2];
				v23 = sub_14005C1B0((__int64)v5, 0, 0);
				*(_DWORD*)(v22 + 8) = 5;
				*(_QWORD*)v22 = v23;
				v5[2] += 16i64;
				sub_1406B33F0(v5, v21);
				v24 = (unsigned int)sub_1400578C0((__int64)v5);
				sub_1400EA3E0(a1, "AlertMailInfo", L"T", v24);
				sub_1400579E0((__int64)v5, v25, v24);
			}
		}
	}
}
// 1404306EA: conditional instruction was optimized away because r15.8!=0
// 140430802: variable 'v20' is possibly undefined
// 1404308A0: variable 'v25' is possibly undefined
// 1409EEC44: using guessed type wchar_t aT_3[2];
// 140B01468: using guessed type wchar_t aI64u_0[6];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140430650: using guessed type unsigned __int16 var_88[32];

