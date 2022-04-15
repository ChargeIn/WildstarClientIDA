#include "../winhttp.h"

//----- (00000001404F1730) ----------------------------------------------------
__int64 __fastcall sub_1404F1730(__int64 a1)
{
	__int64 v1; // r9
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rdx
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // edi
	_QWORD* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx
	int v16; // r11d
	_QWORD* v17; // rax
	__int64 v18; // r11
	__int64 v19; // rdx
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v1 + 384, 1);
	v8 = sub_14044FAC0(qword_140C65908, v7);
	v9 = v8;
	if (!v8 || !*(_DWORD*)(v8 + 12) && !*(_DWORD*)(v8 + 24))
		return 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v10 = *(_QWORD*)(a1 + 16);
	v11 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	*(_QWORD*)(a1 + 16) += 16i64;
	v12 = sub_1400578C0(a1);
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v12);
	v14 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v15, L"nOfferGroupId", v16);
	*(_QWORD*)(a1 + 16) -= 16i64;
	LODWORD(v10) = *(_DWORD*)(v9 + 16);
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v12);
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v19, L"nVariantIndex", v10 + 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v12);
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v22, v12);
	return 1i64;
}
// 1404F1841: variable 'v15' is possibly undefined
// 1404F1841: variable 'v16' is possibly undefined
// 1404F1878: variable 'v18' is possibly undefined
// 1404F1888: variable 'v19' is possibly undefined
// 1404F18AE: variable 'v21' is possibly undefined
// 1404F18C0: variable 'v22' is possibly undefined
// 140B0DE50: using guessed type wchar_t aNvariantindex_0[14];
// 140B0DE88: using guessed type wchar_t aNoffergroupid_1[14];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

