#include "../winhttp.h"

//----- (00000001401786B0) ----------------------------------------------------
__int64 __fastcall sub_1401786B0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	int v4; // ecx
	BOOL v5; // esi
	__int64 v6; // rdx
	int v7; // ebp
	__int64 v8; // rbx
	void* v9; // rax

	v2 = sub_140177AC0(a1);
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v3[2];
	v5 = v4 && (v4 != 1 || *v3);
	v6 = *(_QWORD*)(v2 + 1040);
	v7 = *(_DWORD*)(v6 + 1032);
	*(_DWORD*)(v6 + 1032) = -1;
	*(_DWORD*)(v6 + 1040) = -1;
	v8 = *(_QWORD*)v2;
	v9 = sub_1401774A0(v2, *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1032i64));
	(*(void(__fastcall**)(__int64, void*))(v8 + 80))(v2, v9);
	if (v5 && v7 != *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1032i64))
		sub_1400D4070(v2, 0x31u, (char*)v2, byte_1409DE06C, *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1032i64), v7);
	return 0i64;
}
// 14017871F: conditional instruction was optimized away because ecx.4<0
// 1409DE06C: using guessed type _BYTE byte_1409DE06C[48];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

