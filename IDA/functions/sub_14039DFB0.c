#include "../winhttp.h"

//----- (000000014039DFB0) ----------------------------------------------------
__int64 sub_14039DFB0()
{
	__int64 result; // rax
	__int64 v1; // rax
	__int64 v2; // rbx

	result = *(_QWORD*)(qword_140C65898 + 120);
	if (result)
	{
		v1 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(result + 192));
		v2 = v1;
		if (!v1 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 32i64))(v1))
			return 0i64;
		return v2;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

