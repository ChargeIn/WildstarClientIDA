#include "../winhttp.h"

//----- (00000001408E6940) ----------------------------------------------------
__int64 __fastcall sub_1408E6940(__int64 a1)
{
	unsigned int v2; // ecx
	int v3; // edi
	__int64 result; // rax

	v2 = 1;
	v3 = (int)(float)((float)(*(float*)(a1 + 164) * 0.001) * (float)*(int*)(a1 + 468));
	if (!v3)
		return v2;
	if ((*(_BYTE*)(a1 + 460) & 0x10) == 0
		|| (result = sub_1408ADBD0(a1 + 400, *(_QWORD*)(a1 + 488), v3), v2 = result, (_DWORD)result == 1))
	{
		if ((*(_BYTE*)(a1 + 460) & 0x20) != 0)
			return sub_1408ADBD0(a1 + 424, *(_QWORD*)(a1 + 488), v3);
		return v2;
	}
	return result;
}

