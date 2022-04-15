#include "../winhttp.h"

//----- (00000001407E0030) ----------------------------------------------------
__int64 __fastcall sub_1407E0030(
	_BYTE* a1,
	unsigned __int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6)
{
	__int64 result; // rax
	int v11; // edi
	int v12; // r14d

	if (!a4)
		goto LABEL_19;
	if (a3)
	{
		if (!a1)
		{
		LABEL_19:
			*(_DWORD*)sub_1407DE1B0() = 22;
			goto LABEL_20;
		}
	}
	else if (!a1)
	{
		if (!a2)
			return 0i64;
		goto LABEL_19;
	}
	if (!a2)
		goto LABEL_19;
	if (a2 > a3)
	{
		v11 = *(_DWORD*)sub_1407DE1B0();
		result = sub_1407E0180(
			(__int64(__fastcall*)(_BYTE**, __int64, __int64, __int64))sub_1407ED344,
			a1,
			a3 + 1,
			a4,
			a5,
			a6);
		if ((_DWORD)result == -2)
		{
			if (*(_DWORD*)sub_1407DE1B0() == 34)
				*(_DWORD*)sub_1407DE1B0() = v11;
			return 0xFFFFFFFFi64;
		}
		goto LABEL_16;
	}
	v12 = *(_DWORD*)sub_1407DE1B0();
	result = sub_1407E0180((__int64(__fastcall*)(_BYTE**, __int64, __int64, __int64))sub_1407ED344, a1, a2, a4, a5, a6);
	*(_WORD*)&a1[2 * a2 - 2] = 0;
	if ((_DWORD)result != -2)
	{
	LABEL_16:
		if ((int)result >= 0)
			return result;
		goto LABEL_17;
	}
	if (a3 == -1i64)
	{
		if (*(_DWORD*)sub_1407DE1B0() == 34)
			*(_DWORD*)sub_1407DE1B0() = v12;
		return 0xFFFFFFFFi64;
	}
LABEL_17:
	*(_WORD*)a1 = 0;
	if ((_DWORD)result == -2)
	{
		*(_DWORD*)sub_1407DE1B0() = 34;
	LABEL_20:
		sub_1407DC370();
	}
	return 0xFFFFFFFFi64;
}

