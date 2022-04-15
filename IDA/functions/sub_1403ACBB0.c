#include "../winhttp.h"

//----- (00000001403ACBB0) ----------------------------------------------------
__int64 __fastcall sub_1403ACBB0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rsi
	__int64 result; // rax

	v2 = 0i64;
	if (*(_DWORD*)(a1 + 4))
	{
		while (1)
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v2);
			if (v5)
			{
				if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 48i64))(v5) == a2)
					return v5;
			}
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= *(_DWORD*)(a1 + 4))
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		result = sub_1403AE860(a1 + 24, a2);
		if (!result)
		{
			result = sub_1403AE860(a1 + 48, a2);
			if (!result)
			{
				result = sub_1403AE860(a1 + 72, a2);
				if (!result)
				{
					result = sub_1403AE860(a1 + 96, a2);
					if (!result)
					{
						result = sub_1403AE860(a1 + 120, a2);
						if (!result)
							return sub_1403AE860(a1 + 144, a2);
					}
				}
			}
		}
	}
	return result;
}

