#include "../winhttp.h"

//----- (000000014062D2F0) ----------------------------------------------------
__int64 __fastcall sub_14062D2F0(__int64* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rbx
	__int64 v4; // r14
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx

	v1 = a1[1];
	if (v1)
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			v5 = *(_QWORD*)(*a1 + v3 + 32);
			if (v5)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*(_QWORD*)(v4 + v3 + 32) = 0i64;
			}
			v3 += 40i64;
			--v1;
		} while (v1);
	}
	v7 = a1[4];
	if (v7)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[4] = 0i64;
	}
	v8 = a1[2];
	if (v8)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

