#include "../winhttp.h"

//----- (0000000140175D40) ----------------------------------------------------
char __fastcall sub_140175D40(_BYTE* a1, float a2)
{
	int v3; // eax

	LOBYTE(v3) = a1[664] >> 3;
	if ((a1[664] & 8) != 0)
	{
		if ((a1[1468] & 0x20) != 0)
		{
			v3 = sub_1400C4090((__int64)(a1 + 1056), a2);
			if (v3 == 2)
				LOBYTE(v3) = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 576i64))(a1);
		}
		if ((a1[1884] & 0x20) != 0)
		{
			v3 = sub_1400C4090((__int64)(a1 + 1472), a2);
			if (v3 == 2)
				LOBYTE(v3) = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 568i64))(a1);
		}
	}
	return v3;
}

