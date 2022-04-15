#include "../winhttp.h"

//----- (00000001408C4D80) ----------------------------------------------------
__int64 __fastcall sub_1408C4D80(__int64 a1, __int64 a2)
{
	unsigned int i; // esi
	__int64 v5; // rdi
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 304))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 288); ++i)
		{
			v5 = 168i64 * i;
			sub_1408CAE50(v5 + *(_QWORD*)(a1 + 304), a2);
			sub_1408CAAD0(v5 + *(_QWORD*)(a1 + 304) + 144i64, a2);
		}
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 16i64))(a2, *(_QWORD*)(a1 + 304));
		*(_QWORD*)(a1 + 304) = 0i64;
	}
	return result;
}

