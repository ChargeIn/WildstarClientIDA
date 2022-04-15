#include "../winhttp.h"

//----- (00000001408C2C80) ----------------------------------------------------
__int64 __fastcall sub_1408C2C80(__int64 a1)
{
	int v2; // esi
	__int64 v3; // rbx
	__int64 result; // rax

	v2 = *(_DWORD*)(a1 + 576) >> 1;
	if (!*(_BYTE*)(a1 + 517))
		return 1i64;
	v3 = 0i64;
	if (!*(_DWORD*)(a1 + 568))
		return 1i64;
	while (1)
	{
		result = sub_1408ADBD0(a1 + 8 * ((unsigned int)v3 + 41i64 + 2 * v3), *(_QWORD*)(a1 + 16), v2);
		if ((_DWORD)result != 1)
			break;
		v3 = (unsigned int)(v3 + 1);
		if ((unsigned int)v3 >= *(_DWORD*)(a1 + 568))
			return 1i64;
	}
	return result;
}

