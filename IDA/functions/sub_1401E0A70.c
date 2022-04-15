#include "../winhttp.h"

//----- (00000001401E0A70) ----------------------------------------------------
__int64 __fastcall sub_1401E0A70(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // rdx

	if (*(_DWORD*)(a1 + 2868) && *(_DWORD*)(a1 + 3144) != (_DWORD)a2)
	{
		*(_DWORD*)(a1 + 3144) = a2;
		v3 = *(_QWORD*)(a1 + 384);
		if (v3)
			result = sub_1401E7A30(v3, a2);
		v5 = *(_QWORD*)(a1 + 488);
		if (v5)
		{
			sub_1401E7C40(v5, a2);
			return sub_1401E7A30(v5, v6);
		}
	}
	return result;
}
// 1401E0AB0: variable 'a2' is possibly undefined
// 1401E0ABD: variable 'v6' is possibly undefined

