#include "../winhttp.h"

//----- (0000000140134C00) ----------------------------------------------------
bool __fastcall sub_140134C00(__int64 a1, __int64 a2, int a3)
{
	_DWORD* v4; // rax
	__int64 v5; // r9
	__int64 v6; // r11
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rax
	_DWORD* v10; // rbx
	int v11; // eax

	v4 = sub_1400580E0(a2, a3);
	v5 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)v5 = *(_QWORD*)v4;
	*(_DWORD*)(v5 + 8) = v4[2];
	*(_QWORD*)(a2 + 16) += 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), *(_DWORD*)(v6 + 56));
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	v9 = *(_QWORD*)(a2 + 16);
	v10 = (_DWORD*)(v9 - 32);
	if ((_DWORD*)(v9 - 16) == dword_140A12138 || v10 == dword_140A12138)
		v11 = 0;
	else
		v11 = sub_14005AC20(v9 - 16, (__int64)v10);
	*(_QWORD*)(a2 + 16) = v10;
	return v11 != 0;
}
// 140134C35: variable 'v6' is possibly undefined
// 140134C4F: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

