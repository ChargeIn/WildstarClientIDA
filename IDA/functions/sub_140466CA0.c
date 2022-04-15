#include "../winhttp.h"

//----- (0000000140466CA0) ----------------------------------------------------
__int64 __fastcall sub_140466CA0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 3264);
	if (v3)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 72i64))(v3);
		if ((int)result < 0)
			return result;
		*(_DWORD*)(a1 + 244) = 1;
		if (a2 == 20)
		{
			sub_1404718E0(a1, 0, 0, 1, 1);
			sub_140472D80(a1);
			return 0i64;
		}
		if (a2 == 1)
			sub_140472E10(a1);
	}
	return 0i64;
}

