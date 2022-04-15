#include "../winhttp.h"

//----- (0000000140344F90) ----------------------------------------------------
__int64 __fastcall sub_140344F90(__int64 a1)
{
	int v1; // esi
	__int64 result; // rax

	v1 = 0;
	if (*(_DWORD*)(a1 + 40)
		|| (result = (**(__int64(__fastcall***)(__int64))(a1 + 32))(a1 + 32),
			(*(_DWORD*)(a1 + 40) = (int)result >= 0) != 0))
	{
		if (*(_DWORD*)(a1 + 64)
			|| (result = (**(__int64(__fastcall***)(__int64))(a1 + 56))(a1 + 56),
				(*(_DWORD*)(a1 + 64) = (int)result >= 0) != 0))
		{
			if (*(_DWORD*)(a1 + 96)
				|| (result = (**(__int64(__fastcall***)(__int64))(a1 + 88))(a1 + 88),
					(*(_DWORD*)(a1 + 96) = (int)result >= 0) != 0))
			{
				if (*(_DWORD*)(a1 + 160)
					|| (result = (**(__int64(__fastcall***)(__int64))(a1 + 152))(a1 + 152),
						LOBYTE(v1) = (int)result >= 0,
						*(_DWORD*)(a1 + 160) = v1,
						(int)result >= 0))
				{
					result = sub_14034B780(a1 + 2344);
					if ((int)result >= 0)
					{
						result = sub_14034B780(a1 + 2480);
						if ((int)result >= 0)
							return sub_14034B780(a1 + 2504);
					}
				}
			}
		}
	}
	return result;
}

