#include "../winhttp.h"

//----- (0000000140047C00) ----------------------------------------------------
__int64 __fastcall sub_140047C00(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rbp
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			v5 = *(_QWORD*)(*a1 + v3 + 96);
			if (v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			v7 = *(_QWORD*)(v4 + v3 + 88);
			if (v7)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			++v1;
			v3 += 104i64;
		} while (v1 < a1[1]);
		a1[1] = 0i64;
	}
	else
	{
		a1[1] = 0i64;
	}
	return result;
}

