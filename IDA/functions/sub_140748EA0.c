#include "../winhttp.h"

//----- (0000000140748EA0) ----------------------------------------------------
__int64 __fastcall sub_140748EA0(__int64 a1)
{
	unsigned __int8 v1; // dl
	unsigned __int8 v2; // r8
	__int64 v4; // rcx
	__int64 result; // rax

	v1 = 0;
	v2 = 0;
	do
	{
		if ((*(_BYTE*)(qword_140C65898 + 4i64 * v1 + 5192) & 1) != 0)
			++v2;
		++v1;
	} while (v1 < 4u);
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v4 + 8) = 3;
	result = 1i64;
	*(double*)v4 = (double)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

