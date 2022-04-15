#include "../winhttp.h"

//----- (0000000140877B40) ----------------------------------------------------
__int64 __fastcall sub_140877B40(__int64 a1, __int64 a2)
{
	unsigned int v4; // edi
	int v6; // eax
	int v7; // ecx
	unsigned int v8; // eax
	__int64 v9[7]; // [rsp+30h] [rbp-38h] BYREF

	v4 = 1;
	if (CoCreateInstance(&stru_140964730, 0i64, 1u, &stru_140964740, &qword_140C628B8) < 0)
		return 2i64;
	if ((*(int(__fastcall**)(LPVOID, _QWORD))(*(_QWORD*)qword_140C628B8 + 80i64))(qword_140C628B8, 0i64) < 0)
		return 2i64;
	if ((*(int(__fastcall**)(LPVOID, _QWORD, __int64))(*(_QWORD*)qword_140C628B8 + 48i64))(
		qword_140C628B8,
		*(_QWORD*)a2,
		2i64) < 0)
		return 2i64;
	memset(&v9[1], 0, 32);
	v9[0] = 0x100000028i64;
	if ((*(int(__fastcall**)(LPVOID, __int64*, __int64, _QWORD))(*(_QWORD*)qword_140C628B8 + 24i64))(
		qword_140C628B8,
		v9,
		a1 + 24,
		0i64) < 0)
		return 2i64;
	v6 = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 16) = v6;
	if (!v6)
		*(_DWORD*)(a1 + 16) = sub_1408779F0();
	v7 = *(_DWORD*)(a1 + 16);
	if (v7 != 1599 && v7 != 63 && v7 != 3)
		*(_DWORD*)(a1 + 16) = 3;
	v8 = sub_140877F70(a1);
	if (v8 != 1)
		return v8;
	return v4;
}

