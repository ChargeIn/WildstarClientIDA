#include "../winhttp.h"

//----- (0000000140622DF0) ----------------------------------------------------
__int64 __fastcall sub_140622DF0(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 result; // rax

	if (a2)
	{
		v2 = *(_QWORD*)(a2 + 96);
		if (v2)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 648i64))(v2, 0i64, 0i64);
			if ((*(_DWORD*)(a2 + 612))-- == 1)
				*(_DWORD*)(a2 + 700) = 1;
		}
	}
	return result;
}

