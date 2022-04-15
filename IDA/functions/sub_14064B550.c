#include "../winhttp.h"

//----- (000000014064B550) ----------------------------------------------------
__int64 __fastcall sub_14064B550(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v3; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // ebx
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v12; // rax
	__int64* v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // [rsp+20h] [rbp-38h] BYREF
	__int64 v21; // [rsp+28h] [rbp-30h]

	v3 = sub_1406499E0(a1);
	if (v3)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v5 = *(_QWORD*)(a1 + 16);
		v6 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		v7 = sub_1400578C0(a1);
		sub_140462AF0(v3);
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = (unsigned __int64*)sub_14018F0E0(&v20, L"nAmount")[1];
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
		if (v21)
			sub_14018B900(v21, 0);
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v12 + 8) = 3;
		*(double*)v12 = (float)(v1 * 100.0);
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_140462CF0(v3);
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
		v15 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v15, L"eDRState", v16);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v19, v7);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 14064B5E6: variable 'v1' is possibly undefined
// 14064B6DA: variable 'v16' is possibly undefined
// 14064B700: variable 'v18' is possibly undefined
// 14064B712: variable 'v19' is possibly undefined
// 140B2BEE8: using guessed type wchar_t aNamount_10[8];
// 140B2BEF8: using guessed type wchar_t aEdrstate_3[9];

