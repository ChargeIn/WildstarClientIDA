#include "../winhttp.h"

//----- (0000000140701530) ----------------------------------------------------
__int64 __fastcall sub_140701530(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	_DWORD* v5; // rcx
	__int64* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64* v9; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v4 = qword_140C65898;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v2) = *(_DWORD*)(v4 + 25644);
	sub_140058710(a1, (unsigned __int64*)"bWorldForcesLevelScaling", 0x18ui64);
	v5 = *(_DWORD**)(a1 + 16);
	v5[2] = 1;
	*v5 = v2 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v6, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v7 = qword_140C65898;
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = *(_DWORD*)(v7 + 25636);
	sub_140058710(a1, (unsigned __int64*)"eWorldDifficulty", 0x10ui64);
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v9, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

