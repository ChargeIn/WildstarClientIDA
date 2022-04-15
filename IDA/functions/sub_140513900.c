#include "../winhttp.h"

//----- (0000000140513900) ----------------------------------------------------
__int64 __fastcall sub_140513900(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64* v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v2) = dword_140C7D620;
	sub_140058710(a1, (unsigned __int64*)"iPath", 5ui64);
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v5, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = xmmword_140C7D630;
	sub_140058710(a1, (unsigned __int64*)"nTotalDamageGiven", 0x11ui64);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v7, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = DWORD2(xmmword_140C7D630);
	sub_140058710(a1, (unsigned __int64*)"nTotalCriticalDamageGiven", 0x19ui64);
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v9, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = DWORD1(xmmword_140C7D630);
	sub_140058710(a1, (unsigned __int64*)"nTotalCriticalHits", 0x12ui64);
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v11, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = HIDWORD(xmmword_140C7D630);
	sub_140058710(a1, (unsigned __int64*)"nTotalVulnerableDamageGiven", 0x1Bui64);
	v12 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = dword_140C7D62C;
	sub_140058710(a1, (unsigned __int64*)"nTotalDamageTaken", 0x11ui64);
	v14 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = HIDWORD(qword_140C7D624);
	sub_140058710(a1, (unsigned __int64*)"nDeaths", 7ui64);
	v16 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	LODWORD(v2) = qword_140C7D624;
	sub_140058710(a1, (unsigned __int64*)"nKills", 6ui64);
	v18 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = (double)(int)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return 1i64;
}
// 140C7D620: using guessed type int dword_140C7D620;
// 140C7D624: using guessed type __int64 qword_140C7D624;
// 140C7D62C: using guessed type int dword_140C7D62C;
// 140C7D630: using guessed type __int128 xmmword_140C7D630;

