#include "../winhttp.h"

//----- (000000014047D4F0) ----------------------------------------------------
__int64 __fastcall sub_14047D4F0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	__int64 v4; // rax

	while (1)
	{
		v1 = a1;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1))
			break;
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 192));
		if (!v2)
			return 0i64;
		a1 = v2;
	}
	v4 = *(_QWORD*)(v1 + 184);
	if (!v4)
		return 0i64;
	return *(unsigned int*)(v4 + 120);
}
// 140C65898: using guessed type __int64 qword_140C65898;

