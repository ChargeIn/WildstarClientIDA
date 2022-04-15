#include "../winhttp.h"

//----- (000000014088C940) ----------------------------------------------------
__int64 __fastcall sub_14088C940(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	int v4; // ecx
	int v5; // ebx
	_DWORD* v6; // rcx

	*a1 = &off_1409A8340;
	sub_14088DE00((__int64)a1);
	result = sub_14082B190(qword_140C61B78, (__int64)a1);
	v3 = a1[7];
	a1[8] = 0i64;
	if (v3)
	{
		result = *(unsigned int*)(v3 + 136);
		v4 = result ^ (result ^ (result - 1)) & 0x3FFFFFFF;
		*(_DWORD*)(v3 + 136) = v4;
		if ((v4 & 0x3FFFFFFF) == 0)
		{
			v5 = dword_140C10F20;
			sub_14084BD30(v3);
			result = sub_140881720(v5, v3);
		}
		a1[7] = 0i64;
	}
	v6 = (_DWORD*)a1[5];
	if (v6)
		return sub_140828460(v6);
	return result;
}
// 1409A8340: using guessed type __int64 (__fastcall *off_1409A8340)();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;

