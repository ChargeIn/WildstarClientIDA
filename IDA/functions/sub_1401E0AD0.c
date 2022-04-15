#include "../winhttp.h"

//----- (00000001401E0AD0) ----------------------------------------------------
__int64 __fastcall sub_1401E0AD0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 2868) && *(_DWORD*)(a1 + 3148) != (_DWORD)a2)
	{
		*(_DWORD*)(a1 + 3148) = a2;
		v2 = *(_QWORD*)(a1 + 488);
		if (v2)
		{
			sub_1401E7C40(*(_QWORD*)(a1 + 488), a2);
			return sub_1401E7A30(v2, v3);
		}
	}
	return result;
}
// 1401E0B10: variable 'v3' is possibly undefined

