#include "../winhttp.h"

//----- (000000014054E340) ----------------------------------------------------
__int64 __fastcall sub_14054E340(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v7; // r11
	unsigned int* v8; // rax
	_DWORD* v9; // rax

	v3 = qword_140C65B70;
	if (!a2)
		return 0i64;
	v7 = sub_1403ACD90(qword_140C65B70, a2, a3);
	if (!v7)
		return 0i64;
	if (!a3)
		return *(unsigned int*)(*(_QWORD*)(v7 + 112) + 28i64);
	v8 = *(unsigned int**)(a3 + 24);
	if (!v8)
		return *(unsigned int*)(*(_QWORD*)(v7 + 112) + 28i64);
	v9 = (_DWORD*)sub_1407A1680(v3, *v8, a2);
	if (!v9)
		return *(unsigned int*)(*(_QWORD*)(v7 + 112) + 28i64);
	if (!*v9)
		return *(unsigned int*)(*(_QWORD*)(v7 + 112) + 28i64);
	result = (unsigned int)v9[5];
	if (!(_DWORD)result)
		return *(unsigned int*)(*(_QWORD*)(v7 + 112) + 28i64);
	return result;
}
// 14054E3AD: variable 'v7' is possibly undefined
// 140C65B70: using guessed type __int64 qword_140C65B70;

