#include "../winhttp.h"

//----- (00000001406860C0) ----------------------------------------------------
__int64 __fastcall sub_1406860C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rbx
	__int16* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int16* v16; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = a1[2];
		v6 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		a1[2] += 16i64;
		LODWORD(v5) = *(_DWORD*)(v4 + 28);
		sub_140058710((__int64)a1, (unsigned __int64*)"idSubZone", 9ui64);
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)(int)v5;
		a1[2] += 16i64;
		v8 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v8, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v9 = sub_14024DB80(*(_DWORD*)(v4 + 28));
		v11 = *(unsigned int*)(v4 + 80);
		v12 = v9;
		if ((_DWORD)v11)
			v13 = sub_14034BDD0(v10, v11);
		else
			v13 = (__int16*)&unk_1409F533C;
		sub_1400F0090((__int64)a1, v11, (unsigned __int64*)"strLocationName", (unsigned __int16*)v13);
		if (v12)
			v16 = sub_14034BDD0(v15, *(_DWORD*)(v12 + 4));
		else
			v16 = (__int16*)&unk_1409F59A4;
		sub_1400F0090((__int64)a1, v14, (unsigned __int64*)"strSubZoneName", (unsigned __int16*)v16);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406861BD: variable 'v10' is possibly undefined
// 1406861D8: variable 'v11' is possibly undefined
// 1406861E5: variable 'v15' is possibly undefined
// 140686200: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

