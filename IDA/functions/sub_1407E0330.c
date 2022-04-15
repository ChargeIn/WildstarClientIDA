#include "../winhttp.h"

//----- (00000001407E0330) ----------------------------------------------------
__int64 __fastcall sub_1407E0330(
	__int64(__fastcall* a1)(_BYTE**, __int64, __int64, __int64),
	_BYTE* a2,
	unsigned __int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6)
{
	int v6; // ebx
	__int64 result; // rax
	int v12; // eax
	unsigned int v13; // edi
	bool v14; // sf
	_BYTE* v15; // [rsp+20h] [rbp-30h] BYREF
	int v16; // [rsp+28h] [rbp-28h] BYREF
	_BYTE* v17; // [rsp+30h] [rbp-20h]
	int v18; // [rsp+38h] [rbp-18h]

	v6 = 0;
	v15 = 0i64;
	sub_1407E4830(&v16, 0i64, 0x28ui64);
	if (!a4 || a3 && !a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	v12 = a3;
	if (a3 > 0x7FFFFFFF)
		v12 = 0x7FFFFFFF;
	v18 = 66;
	v17 = a2;
	v15 = a2;
	v16 = v12;
	result = a1(&v15, a4, a5, a6);
	v13 = result;
	if (a2)
	{
		if ((int)result >= 0)
		{
			if (--v16 >= 0)
			{
				*v15 = 0;
				return v13;
			}
			if ((unsigned int)sub_1407E88EC(0, (__int64)&v15) != -1)
				return v13;
		}
		v14 = v16 < 0;
		a2[a3 - 1] = 0;
		LOBYTE(v6) = !v14;
		return (unsigned int)(v6 - 2);
	}
	return result;
}

