#include "../winhttp.h"

//----- (00000001408EB580) ----------------------------------------------------
__int64 __fastcall sub_1408EB580(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = *(unsigned int*)(a1 + 132);
	*(_DWORD*)(a2 + 56) = result;
	if ((_DWORD)result != 2)
	{
		result = sub_1408803E0(
			a1,
			*(_QWORD*)(a1 + 304),
			*(_WORD*)(a1 + 128),
			*(_DWORD*)(a1 + 368),
			*(_DWORD*)(a1 + 312),
			a2);
		if (*(_DWORD*)(a2 + 56) == 46)
		{
			if (*(_QWORD*)(a1 + 96))
			{
				result = 2i64;
				if (*(_DWORD*)(a1 + 140))
					result = 45i64;
				*(_DWORD*)(a2 + 56) = result;
			}
		}
	}
	return result;
}

