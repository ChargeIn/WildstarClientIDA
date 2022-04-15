#include "../winhttp.h"

//----- (00000001406CAA40) ----------------------------------------------------
__int64 __fastcall sub_1406CAA40(_QWORD* a1)
{
	_DWORD* v2; // rcx
	int v3; // eax
	__int64 result; // rax

	sub_1406CA0C0(a1);
	v2 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v2 = (_DWORD*)(a1[3] + 16i64);
	v3 = v2[2];
	if (v3 && (v3 != 1 || *v2))
	{
		byte_140C65C3C = 1;
		return 0i64;
	}
	else
	{
		result = 0i64;
		byte_140C65C3C = 0;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65C3C: using guessed type char byte_140C65C3C;

