#include "../winhttp.h"

//----- (0000000140861F30) ----------------------------------------------------
__int64 __fastcall sub_140861F30(__int64* a1, unsigned int a2)
{
	__int64 v2; // r10
	__int64 v4; // r8
	int v5; // edi
	unsigned int i; // r9d
	__int64 result; // rax
	__int64 v8; // rdx
	_DWORD* v9; // rdi
	__int64 v10; // rcx

	v2 = a2;
	if (a2)
	{
		v4 = 0i64;
		v5 = *((_DWORD*)a1 + 2);
		for (i = 0; v5; v5 &= result)
		{
			result = (unsigned int)(v5 - 1);
			++i;
		}
		if (i)
		{
			v8 = i;
			do
			{
				result = *a1;
				v9 = (_DWORD*)(*a1 + 4 * v4 * *((unsigned __int16*)a1 + 8));
				if ((_DWORD)v2)
				{
					v10 = v2;
					result = 0i64;
					while (v10)
					{
						*v9++ = 0;
						--v10;
					}
				}
				++v4;
				--v8;
			} while (v8);
		}
	}
	return result;
}

