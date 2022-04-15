#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0C90) ----------------------------------------------------
__int64 __fastcall sub_1400A0C90(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400A0CE7[*a3])(a1, a2, a3 + 1);
		if ((int)result >= 0)
			return sub_14006C090(a1, a3 + 3, 0x20ui64);
	}
	return result;
}
// 140C1E858: using guessed type __int64 (__fastcall *funcs_1400A0CE7[110])();

