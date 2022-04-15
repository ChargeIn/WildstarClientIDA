#include "../winhttp.h"

//----- (00000001401A4EB0) ----------------------------------------------------
__int16* __fastcall sub_1401A4EB0(__int64 a1)
{
	__int16* result; // rax
	__int16* v2; // rdx
	__int16 v3; // cx

	for (result = *(__int16**)(a1 + 8); *result == 32 || (unsigned __int16)(*result - 9) <= 4u; ++result)
		;
	*(_QWORD*)(a1 + 8) = result;
	if (*result)
	{
		v2 = result;
		while (1)
		{
			if (*result == 32 || (unsigned __int16)(*result - 9) <= 4u)
			{
				while (*result == 32 || (unsigned __int16)(*result - 9) <= 4u)
					++result;
				if (!*result)
				{
				LABEL_15:
					result = 0i64;
					*v2 = 0;
					return result;
				}
				*v2++ = 32;
			}
			v3 = *result++;
			*v2++ = v3;
			if (!*result)
				goto LABEL_15;
		}
	}
	return result;
}

