#include "../winhttp.h"

//----- (000000014087C760) ----------------------------------------------------
_DWORD* __fastcall sub_14087C760(__int64 a1, int a2)
{
	_DWORD* v2; // rdi
	_DWORD* result; // rax
	_DWORD* v5; // rsi
	unsigned __int64 i; // rcx

	v2 = *(_DWORD**)(a1 + 8);
	result = *(_DWORD**)(a1 + 16);
	if (v2 != result)
	{
		do
		{
			if (*v2 == a2)
				break;
			++v2;
		} while (v2 != result);
		if (v2 != result)
		{
			if (v2 < result - 1)
			{
				v5 = v2 + 1;
				for (i = ((unsigned __int64)((char*)(result - 1) - (char*)v2 - 1) >> 2) + 1; i; --i)
					*v2++ = *v5++;
			}
			*(_QWORD*)(a1 + 16) -= 4i64;
		}
	}
	return result;
}

