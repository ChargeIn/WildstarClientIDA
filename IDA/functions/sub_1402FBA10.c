#include "../winhttp.h"

//----- (00000001402FBA10) ----------------------------------------------------
__int64 __fastcall sub_1402FBA10(__int64 a1, int a2)
{
	__int64 v2; // rcx
	__int64 v4; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 1232);
	if (v2)
	{
		do
		{
			v4 = *(_QWORD*)(v2 + 1248);
			if (*(_DWORD*)(v2 + 1200) == a2)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 936i64))(v2);
			v2 = v4;
		} while (v4);
	}
	return result;
}

