#include "../winhttp.h"

//----- (000000014083EC40) ----------------------------------------------------
unsigned __int64 __fastcall sub_14083EC40(__int64 a1, _QWORD* a2, unsigned __int64* a3)
{
	unsigned __int64 result; // rax
	__int64 v6; // r10
	__int64 v7; // rcx
	unsigned int v8; // r8d
	__int64 v10; // rcx

	++* (_DWORD*)(a1 + 40);
	if (*(_QWORD*)a1)
	{
		*a2 = *(_QWORD*)a1;
		result = *(_QWORD*)(a1 + 8);
		a2[1] = result;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = *(_QWORD*)(a1 + 24) - v6;
		v8 = 0;
		result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
		if ((unsigned int)(v7 / 24))
		{
			while (1)
			{
				result = *(_QWORD*)(v6 + 24i64 * v8);
				if ((*(_BYTE*)(result + 120) & 8) == 0)
					break;
				if (++v8 >= (unsigned int)(v7 / 24))
					goto LABEL_6;
			}
			*a3 = *(_QWORD*)(v6 + 24i64 * v8);
			v10 = *(_QWORD*)(a1 + 16) + 24i64 * v8;
			*a2 = *(_QWORD*)(v10 + 8);
			a2[1] = *(_QWORD*)(v10 + 16);
			result = *a3;
			_InterlockedIncrement((volatile signed __int32*)(*a3 + 112));
		}
		else
		{
		LABEL_6:
			*a2 = 0i64;
			*((_DWORD*)a2 + 2) = 0;
			if ((*(_DWORD*)(a1 + 40))-- == 1)
			{
				if (*(_QWORD*)a1)
				{
					result = sub_140881720(SHIDWORD(qword_140C61B18), *(_QWORD*)a1);
					*(_QWORD*)a1 = 0i64;
					*(_DWORD*)(a1 + 8) = 0;
				}
			}
		}
	}
	return result;
}
// 140C61B18: using guessed type __int64 qword_140C61B18;

