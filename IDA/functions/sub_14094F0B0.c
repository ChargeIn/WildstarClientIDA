#include "../winhttp.h"

//----- (000000014094F0B0) ----------------------------------------------------
__int64 sub_14094F0B0()
{
	__int64* v0; // rbx
	int i; // edi
	__int64 v2; // rcx
	__int64 result; // rax

	v0 = &qword_140C7AA50;
	for (i = 1; i >= 0; --i)
	{
		v2 = *(v0 - 2);
		v0 -= 2;
		if (v2)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	}
	return result;
}
// 140C7AA50: using guessed type __int64 qword_140C7AA50;

