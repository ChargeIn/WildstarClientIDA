#include "../winhttp.h"

//----- (00000001405E7B80) ----------------------------------------------------
__int64 __fastcall sub_1405E7B80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rbx
	__int64 result; // rax

	v5 = 0i64;
	while (1)
	{
		result = sub_1403B3320(v5, a2, a3);
		if ((_DWORD)result)
		{
			if ((_DWORD)result != 317)
				break;
		}
		if ((unsigned __int64)++v5 >= 2)
			return 0i64;
	}
	return result;
}

