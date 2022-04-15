#include "../winhttp.h"

//----- (00000001408467F0) ----------------------------------------------------
__int64 __fastcall sub_1408467F0(__int64 a1, __int64 a2)
{
	unsigned __int8 i; // si
	unsigned int v5; // ebx
	__int64 v6; // rcx
	__int64* v7; // rdi
	__int64 result; // rax
	__int64 v9; // rcx

	for (i = 0; i < *(_BYTE*)(a1 + 137); ++i)
	{
		v5 = 0;
		v6 = *(_QWORD*)(a1 + 24 * (i + 1i64));
		v7 = (__int64*)(a1 + 24 * (i + 1i64));
		result = (v7[1] - v6) >> 4;
		if ((_DWORD)result)
		{
			do
			{
				v9 = *(_QWORD*)(v6 + 16i64 * v5 + 8);
				if (v9)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 136i64))(v9, a2);
				v6 = *v7;
				++v5;
				result = (v7[1] - *v7) >> 4;
			} while (v5 < (unsigned int)result);
		}
	}
	return result;
}

