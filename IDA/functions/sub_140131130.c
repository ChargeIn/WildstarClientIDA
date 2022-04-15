#include "../winhttp.h"

//----- (0000000140131130) ----------------------------------------------------
char __fastcall sub_140131130(__int64 a1, float a2)
{
	int v3; // eax
	__int64 v4; // rdx
	__int64 v5; // rcx

	v3 = sub_1400C4090(a1 + 1024, a2);
	if (v3 == 2)
	{
		v4 = 32i64;
	}
	else
	{
		if (v3 != 1)
			goto LABEL_6;
		v4 = 31i64;
	}
	LOBYTE(v3) = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(
		a1,
		v4,
		*(unsigned int*)(a1 + 1440),
		0i64);
LABEL_6:
	v5 = *(_QWORD*)(a1 + 1560);
	if (v5)
	{
		if ((*(_BYTE*)(v5 + 28) & 1) != 0)
		{
			if ((*(_BYTE*)(a1 + 1436) & 0x20) == 0)
			{
				LOBYTE(v3) = (*(_BYTE*)(a1 + 1436) ^ ((*(float*)(v5 + 648) > 0.0) << 6)) & 0x40;
				*(_BYTE*)(a1 + 1436) ^= v3;
			}
		}
		else
		{
			LOBYTE(v3) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 1560) = 0i64;
		}
	}
	return v3;
}

