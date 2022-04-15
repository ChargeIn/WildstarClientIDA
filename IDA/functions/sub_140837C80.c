#include "../winhttp.h"

//----- (0000000140837C80) ----------------------------------------------------
__int64 __fastcall sub_140837C80(__int64 a1, unsigned int a2, unsigned __int64 a3, int* a4)
{
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // rdi
	float v9; // xmm2_4

	result = a2 % 0xC1;
	v7 = *(_QWORD*)(a1 + 8 * result);
	if (v7)
	{
		while (*(_DWORD*)v7 != a2)
		{
			v7 = *(_QWORD*)(v7 + 8);
			if (!v7)
				return result;
		}
		result = sub_140834F40((__int64*)(v7 + 24), 0i64);
		v8 = result;
		if (a3)
		{
			result = sub_140834F40((__int64*)(v7 + 24), a3);
			if (!result)
				return result;
			if (v8)
			{
				v9 = *(float*)(v8 + 8);
				return sub_140837F20(v7, result, v9, a3, a4, 1);
			}
		}
		else if (!result)
		{
			return result;
		}
		v9 = *(float*)(v7 + 16);
		return sub_140837F20(v7, result, v9, a3, a4, 1);
	}
	return result;
}
// 140837CE2: conditional instruction was optimized away because rbx.8!=0

