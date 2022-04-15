#include "../winhttp.h"

//----- (000000014046E5F0) ----------------------------------------------------
__int64 __fastcall sub_14046E5F0(__int64 a1)
{
	int v2; // eax
	unsigned __int64 v3; // r9
	__int64 result; // rax
	__int64 v5; // rax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
	LODWORD(v3) = 0;
	if (v2 && (!*(_QWORD*)(a1 + 184) || *(_DWORD*)(*(_QWORD*)(a1 + 184) + 4i64) != 5))
		return 1614i64;
	if (*(_DWORD*)(a1 + 128) == 27)
		return 165i64;
	switch (*(_DWORD*)(a1 + 440))
	{
	case 3:
		return 1111i64;
	case 4:
		return 1114i64;
	case 5:
		return 1117i64;
	case 0xB:
		return 6675i64;
	}
	if (*(_QWORD*)(a1 + 312))
	{
		v5 = sub_1403DEC00(qword_140C65898, a1);
		if (v5)
		{
			if (*(_QWORD*)(v5 + 24) > v3)
				LODWORD(v3) = 1;
		}
	}
	switch (*(_DWORD*)(a1 + 4232))
	{
	case 1:
		return 692i64;
	case 2:
		result = 621i64;
		if ((_DWORD)v3)
			return 1711i64;
		break;
	case 3:
		result = 1876i64;
		if ((_DWORD)v3)
			return 1886i64;
		break;
	default:
		result = 165i64;
		if ((_DWORD)v3)
			return 1547i64;
		break;
	}
	return result;
}
// 14046E68D: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

