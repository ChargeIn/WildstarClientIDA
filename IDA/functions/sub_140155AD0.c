#include "../winhttp.h"

//----- (0000000140155AD0) ----------------------------------------------------
__int64 __fastcall sub_140155AD0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v4; // r9

	if (!a3)
		return 2147942487i64;
	v4 = 0i64;
	*a3 = 0i64;
	if (*a2 || a2[1] != 0x46000000000000C0i64)
	{
		if (*a2 == 0x11D719DFEA1EA136i64 && a2[1] == 0x5C43845B0600D2A6i64)
		{
			*a3 = a1;
		}
		else
		{
			if (*a2 == 0x11D80F2871C6E74Ei64 && a2[1] == 0x5C43845B06002AA8i64)
			{
				if (a1)
					v4 = a1 + 8;
			}
			else
			{
				if (*a2 != 0x48DFF26D743ABD5Fi64 || a2[1] != 0x649B41928423C58Ci64)
					return 2147500034i64;
				if (a1)
					v4 = a1 + 16;
			}
			*a3 = v4;
		}
	}
	else
	{
		*a3 = a1;
	}
	if (*a3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
		return 0i64;
	}
	return 2147500034i64;
}

