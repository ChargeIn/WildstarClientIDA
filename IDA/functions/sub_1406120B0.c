#include "../winhttp.h"

//----- (00000001406120B0) ----------------------------------------------------
__int64 __fastcall sub_1406120B0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r8
	int v5; // ecx
	__int64 v6; // rcx

	v2 = qword_140C65970;
	if (qword_140C65970)
	{
		if (*(_DWORD*)(qword_140C65970 + 8) != 2)
			return 2147500037i64;
		v5 = a2[1];
		*(_DWORD*)(qword_140C65970 + 192) = *a2;
		if (v5)
			*(_DWORD*)(v2 + 196) = dword_140C636A8 + v5;
		v6 = *(_QWORD*)(qword_140C65898 + 29504);
		if (*a2)
		{
			Apollo_LUAEvent(v6, "PlayerPathScientistScanBotDeployed", &unk_1409D115E);
			return 0i64;
		}
		Apollo_LUAEvent(v6, "PlayerPathScientistScanBotDespawned", &unk_1409D115D);
		Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PlayerPathScientistScanBotCooldown",
			"f",
			(float)((float)(int)a2[1] * 0.001));
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

