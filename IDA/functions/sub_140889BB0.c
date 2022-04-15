#include "../winhttp.h"

//----- (0000000140889BB0) ----------------------------------------------------
__int64 __fastcall sub_140889BB0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // r9
	__int64 v5; // rax
	bool v7; // zf
	__int64 v8; // rcx

	v3 = *(_QWORD*)(a1 + 8);
	v4 = 0i64;
	v5 = v3;
	if (!v3)
		return 2i64;
	while (v5 != a2)
	{
		v4 = v5;
		v5 = *(_QWORD*)(v5 + 16);
		if (!v5)
			return 2i64;
	}
	if (!v5)
		return 2i64;
	v7 = v5 == v3;
	v8 = *(_QWORD*)(v5 + 16);
	if (v7)
		*(_QWORD*)(a1 + 8) = v8;
	else
		*(_QWORD*)(v4 + 16) = v8;
	if (v5 == *(_QWORD*)(a1 + 16))
		*(_QWORD*)(a1 + 16) = v4;
	--* (_DWORD*)a1;
	return 1i64;
}

