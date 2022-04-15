#include "../winhttp.h"

//----- (00000001403B1DE0) ----------------------------------------------------
__int64 __fastcall sub_1403B1DE0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 result; // rax

	v4 = 0i64;
	while (1)
	{
		result = sub_1403B3320(v4, a1, a2);
		if ((_DWORD)result)
		{
			if ((_DWORD)result != 317)
				break;
		}
		if ((unsigned __int64)++v4 >= 2)
			return 0i64;
	}
	return result;
}

