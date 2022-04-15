#include "../winhttp.h"

//----- (00000001408E69E0) ----------------------------------------------------
__int64 __fastcall sub_1408E69E0(__int64 a1)
{
	int v2; // ebp
	int v3; // edx
	__int64 v4; // rbx
	unsigned int i; // edi
	__int64 result; // rax

	v2 = (int)(float)((float)(*(float*)(a1 + 160) * 0.001) * (float)*(int*)(a1 + 468));
	if (!v2)
		return 1i64;
	v3 = *(_DWORD*)(a1 + 464);
	v4 = 0i64;
	for (i = 0; v3; v3 &= v3 - 1)
		++i;
	if (!i)
		return 1i64;
	while (1)
	{
		result = sub_1408ADBD0(a1 + 8 * (v4 + 2 * (v4 + 16)), *(_QWORD*)(a1 + 488), v2);
		if ((_DWORD)result != 1)
			break;
		v4 = (unsigned int)(v4 + 1);
		if ((unsigned int)v4 >= i)
			return 1i64;
	}
	return result;
}

