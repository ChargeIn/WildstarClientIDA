#include "../winhttp.h"

//----- (00000001404356B0) ----------------------------------------------------
void __fastcall sub_1404356B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v6; // rdi
	__int64 v8; // rbx
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	__int64 v17; // rdx
	int v18; // [rsp+28h] [rbp-20h]

	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 400i64);
	if (*(_QWORD*)(*(_QWORD*)(v6 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v6 + 32) + 112i64))
		sub_14005E2C0(v6);
	v8 = *(_QWORD*)(v6 + 16);
	v9 = sub_14005C1B0(v6, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v6 + 16) += 16i64;
	LODWORD(v8) = sub_1400578C0(v6);
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v6 + 32) + 160i64), v8);
	v11 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	sub_1400F06F0(v6, v11, L"nEntitlementId", v12);
	*(_QWORD*)(v6 + 16) -= 16i64;
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v6 + 32) + 160i64), v8);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	sub_1400F06F0(v6, v15, L"nCount", v16);
	*(_QWORD*)(v6 + 16) -= 16i64;
	v18 = a4;
	Apollo_LUAEvent(*(_QWORD*)(a1 + 96), "AccountEntitlementUpdate", byte_1409EFCEC, (unsigned int)v8, a3, v18);
	sub_1400579E0(v6, v17, v8);
}
// 140435757: variable 'v12' is possibly undefined
// 140435788: variable 'v14' is possibly undefined
// 14043579A: variable 'v15' is possibly undefined
// 14043579A: variable 'v16' is possibly undefined
// 1404357E6: variable 'v17' is possibly undefined
// 1409EFCEC: using guessed type _BYTE byte_1409EFCEC[16];
// 140B01B88: using guessed type wchar_t aNcount_14[7];
// 140B01BB8: using guessed type wchar_t aNentitlementid_3[15];

