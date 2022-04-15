#include "../winhttp.h"

//----- (00000001408C3610) ----------------------------------------------------
__int64 __fastcall sub_1408C3610(__int64 a1, __int64 a2)
{
	unsigned int i; // ebp
	__int64 result; // rax
	unsigned int v6; // ebx
	__int64 v7; // rdi
	_QWORD* v8; // rsi

	for (i = 0; i < *(_DWORD*)(a1 + 172); *(_DWORD*)(v7 + 8) = 0)
	{
		result = i;
		v6 = 0;
		v7 = a1 + 24i64 * i;
		if (*(_DWORD*)(v7 + 16))
		{
			do
			{
				result = v6;
				v8 = (_QWORD*)(v7 + 8i64 * v6);
				if (*v8)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
					*v8 = 0i64;
				}
				++v6;
			} while (v6 < *(_DWORD*)(v7 + 16));
		}
		++i;
	}
	return result;
}

