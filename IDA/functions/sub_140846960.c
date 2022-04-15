#include "../winhttp.h"

//----- (0000000140846960) ----------------------------------------------------
__int64 __fastcall sub_140846960(__int64 a1)
{
	unsigned __int8 i; // si
	unsigned int v3; // ebx
	__int64 v4; // rcx
	__int64* v5; // rdi
	__int64 result; // rax
	__int64 v7; // rcx

	for (i = 0; i < *(_BYTE*)(a1 + 137); ++i)
	{
		v3 = 0;
		v4 = *(_QWORD*)(a1 + 24 * (i + 1i64));
		v5 = (__int64*)(a1 + 24 * (i + 1i64));
		result = (v5[1] - v4) >> 4;
		if ((_DWORD)result)
		{
			do
			{
				v7 = *(_QWORD*)(v4 + 16i64 * v3 + 8);
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 144i64))(v7);
				v4 = *v5;
				++v3;
				result = (v5[1] - *v5) >> 4;
			} while (v3 < (unsigned int)result);
		}
	}
	return result;
}

