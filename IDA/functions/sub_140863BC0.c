#include "../winhttp.h"

//----- (0000000140863BC0) ----------------------------------------------------
__int64 __fastcall sub_140863BC0(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // r10d
	int v4; // edx
	__int64 v5; // r8
	unsigned int i; // edi
	__int64 v7; // rdx
	_DWORD* v8; // rdi
	__int64 v9; // rcx

	result = *(unsigned __int16*)(a1 + 18);
	v3 = *(unsigned __int16*)(a1 + 16) - (_DWORD)result;
	if (v3)
	{
		v4 = *(_DWORD*)(a1 + 8);
		v5 = 0i64;
		for (i = 0; v4; v4 &= result)
		{
			result = (unsigned int)(v4 - 1);
			++i;
		}
		if (i)
		{
			v7 = i;
			do
			{
				v8 = (_DWORD*)(*(_QWORD*)a1 + 4 * (*(unsigned __int16*)(a1 + 18) + v5 * *(unsigned __int16*)(a1 + 16)));
				v9 = v3;
				result = 0i64;
				while (v9)
				{
					*v8++ = 0;
					--v9;
				}
				++v5;
				--v7;
			} while (v7);
		}
	}
	return result;
}
// 140863C1B: conditional instruction was optimized away because r10d.4!=0

