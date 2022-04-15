#include "../winhttp.h"

//----- (00000001400037C0) ----------------------------------------------------
__int64 __fastcall sub_1400037C0(__int64 a1, __int64 a2, int a3, __int64(__fastcall* a4)(__int64))
{
	int i; // edi
	__int64 result; // rax

	for (i = a3 - 1; i >= 0; --i)
	{
		result = a4(a1);
		a1 += a2;
	}
	return result;
}

