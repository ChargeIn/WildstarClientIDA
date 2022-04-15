#include "../winhttp.h"

//----- (0000000140060AB0) ----------------------------------------------------
_QWORD* __fastcall sub_140060AB0(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rsi
	char v6; // bp
	__int64 v7; // rdi
	_QWORD* v8; // rax
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	char v11; // al
	_QWORD* result; // rax

	v3 = *(_QWORD*)(a1 + 32);
	v6 = a2;
	v7 = 16 * a2 + 40;
	v8 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 16))(
		*(_QWORD*)(v3 + 24),
		0i64,
		0i64,
		v7);
	v9 = v8;
	if (!v8 && v7)
		sub_140061040(a1, 4);
	*(_QWORD*)(v3 + 120) += v7;
	v10 = *(_QWORD*)(a1 + 32);
	*v8 = *(_QWORD*)(v10 + 40);
	v11 = *(_BYTE*)(v10 + 32);
	*(_QWORD*)(v10 + 40) = v9;
	*((_BYTE*)v9 + 11) = v6;
	*((_BYTE*)v9 + 9) = v11 & 3;
	*((_BYTE*)v9 + 8) = 6;
	*((_BYTE*)v9 + 10) = 1;
	result = v9;
	v9[3] = a3;
	return result;
}

