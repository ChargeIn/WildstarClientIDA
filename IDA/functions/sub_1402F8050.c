#include "../winhttp.h"

//----- (00000001402F8050) ----------------------------------------------------
__int64 __fastcall sub_1402F8050(__int64 a1, unsigned int a2, _OWORD* a3)
{
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 result; // rax

	if (a2)
	{
		v3 = *(_QWORD*)(a1 + 64);
		if (a2 >= *(_DWORD*)(v3 + 400))
			a2 = -1;
		else
			a2 = *(unsigned __int16*)(*(_QWORD*)(v3 + 408) + 2i64 * (int)a2);
	}
	if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 64) + 384i64))
		return 0i64;
	v4 = *(_QWORD*)(352i64 * a2 + *(_QWORD*)(a1 + 840) + 8);
	if (!v4 || (*(_BYTE*)v4 & 4) == 0)
		return 0i64;
	result = 1i64;
	*a3 = *(_OWORD*)(v4 + 48);
	return result;
}

