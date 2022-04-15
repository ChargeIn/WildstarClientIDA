#include "../winhttp.h"

//----- (00000001408724D0) ----------------------------------------------------
__int64 __fastcall sub_1408724D0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v7; // edx
	int v8; // ecx

	if (!*(_WORD*)(a2 + 18))
		return 17i64;
	do
	{
		v7 = ((__int64(__fastcall*)(__int64, __int64, int, __int64)) * (&funcs_140872529[8 * *(int*)(a1 + 56)]
			+ *(unsigned __int8*)(a1 + 68)))(
				a2,
				a3,
				*(_DWORD*)(a1 + 52),
				a1);
		if (*(_DWORD*)(a1 + 56) == 2 && *(_DWORD*)(a1 + 44) >= 0x400u)
		{
			v8 = *(_DWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 56) = 1;
			*(_DWORD*)(a1 + 36) = v8;
		}
	} while (*(_WORD*)(a2 + 18) && (unsigned int)*(unsigned __int16*)(a3 + 18) < *(_DWORD*)(a1 + 52));
	return v7;
}
// 140C11100: using guessed type __int64 (__fastcall *funcs_140872529[24])();

