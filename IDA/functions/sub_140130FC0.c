#include "../winhttp.h"

//----- (0000000140130FC0) ----------------------------------------------------
_BOOL8 __fastcall sub_140130FC0(__int64 a1, int* a2)
{
	int v4; // ecx
	int v6; // [rsp+28h] [rbp-20h]
	int v7; // [rsp+50h] [rbp+8h] BYREF

	sub_1400D23B0(a1, a2);
	*(_BYTE*)(a1 + 1436) ^= (*(_BYTE*)(a1 + 1436) ^ ((unsigned __int64)*(unsigned int*)(a1 + 656) >> 21)) & 1;
	if ((*(_BYTE*)(a1 + 1436) & 0x20) != 0
		&& !*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)
		&& !*(_DWORD*)(a1 + 1440)
		&& (v4 = *(_DWORD*)(a1 + 908) - a2[1], (*(_DWORD*)(a1 + 904) - *a2) * (*(_DWORD*)(a1 + 904) - *a2) + v4 * v4 >= 49)
		&& (unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 932) > 0x7D
		&& ((v6 = *(_DWORD*)(a1 + 904), v7 = 0, sub_1400D4070(a1, 0x13u, (char*)a1, "ii>b", v6, v6, &v7), v7)
			|| *(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)))
	{
		*(_BYTE*)(a1 + 1436) &= 0x1Fu;
		return 0i64;
	}
	else if ((unsigned int)sub_1400C3F20(a1 + 1024, a2) == 2)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 568i64))(a1, 32i64, *(unsigned int*)(a1 + 1440));
		return 0i64;
	}
	else
	{
		return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
	}
}

