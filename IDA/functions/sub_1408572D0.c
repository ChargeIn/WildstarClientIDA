#include "../winhttp.h"

//----- (00000001408572D0) ----------------------------------------------------
__int64 __fastcall sub_1408572D0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
	__int64 v5; // rdx
	__int64 result; // rax

	v5 = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 224) = a4;
	if (v5 && a4)
		sub_14083B060(qword_140C61B70, v5, a4);
	*(_BYTE*)(a1 + 88) &= ~2u;
	*(_QWORD*)(a1 + 80) = 0i64;
	if (!a2 || (result = sub_14083AB00(qword_140C61B70, a2, *(_QWORD*)(a1 + 224)), (_DWORD)result == 1))
	{
		*(_BYTE*)(a1 + 88) &= ~2u;
		*(_QWORD*)(a1 + 80) = a2;
		result = 1i64;
		*(_BYTE*)(a1 + 88) |= 2 * (a3 & 1);
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

