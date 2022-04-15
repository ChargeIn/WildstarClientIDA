#include "../winhttp.h"

//----- (00000001408C88D0) ----------------------------------------------------
__int64 __fastcall sub_1408C88D0(__int64 a1, __int64 a2, char a3)
{
	unsigned int v6; // esi
	__int64 result; // rax

	if (!*(_BYTE*)(a1 + 300))
		return 1i64;
	v6 = (int)(float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 104i64) * 0.001) * (float)*(int*)(a1 + 292));
	if (!v6)
		return 1i64;
	if ((a3 & 0x10) == 0 || (result = sub_1408CAA70(a1 + 224, a2, v6), (_DWORD)result == 1))
	{
		if ((a3 & 0x20) == 0)
			return 1i64;
		result = sub_1408CAA70(a1 + 248, a2, v6);
		if ((_DWORD)result == 1)
			return 1i64;
	}
	return result;
}

