#include "../winhttp.h"

//----- (00000001408CAD10) ----------------------------------------------------
__int64 __fastcall sub_1408CAD10(__int64 a1, __int64 a2, __int64 a3, float a4, float a5, int a6)
{
	float v9; // xmm0_4
	__int64 result; // rax

	LODWORD(v9) = sub_1408CB710(*(_DWORD*)(a3 + 12), a4, a5, a6).m128_u32[0];
	result = sub_1408CAA70(a1, a2, *(_DWORD*)a3);
	if ((_DWORD)result == 1)
	{
		result = sub_1408CAA70(a1 + 24, a2, *(_DWORD*)(a3 + 4));
		if ((_DWORD)result == 1)
		{
			result = sub_1408CAA70(a1 + 48, a2, *(_DWORD*)(a3 + 8));
			if ((_DWORD)result == 1)
			{
				result = sub_1408CAA70(a1 + 72, a2, *(_DWORD*)(a3 + 12));
				if ((_DWORD)result == 1)
				{
					sub_1408CB7F0(a1 + 96, a4, v9, a6, *(_DWORD*)a3);
					sub_1408CB7F0(a1 + 108, a4, v9, a6, *(_DWORD*)(a3 + 4));
					sub_1408CB7F0(a1 + 120, a4, v9, a6, *(_DWORD*)(a3 + 8));
					sub_1408CB7F0(a1 + 132, a4, v9, a6, *(_DWORD*)(a3 + 12));
					return 1i64;
				}
			}
		}
	}
	return result;
}

