#include "../winhttp.h"

//----- (00000001402CC570) ----------------------------------------------------
__int64 __fastcall sub_1402CC570(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rbx
	__int64 v5; // rdi
	__int64 result; // rax

	v2 = 0i64;
	if (*(_QWORD*)(a1 + 256))
	{
		v5 = 0i64;
		do
		{
			result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)(v5 + *(_QWORD*)(a1 + 248)) + 72i64))(
				v5 + *(_QWORD*)(a1 + 248),
				a2);
			++v2;
			v5 += 416i64;
		} while (v2 < *(_QWORD*)(a1 + 256));
	}
	return result;
}

