#include "../winhttp.h"

//----- (00000001407DDA2C) ----------------------------------------------------
__int64 __fastcall sub_1407DDA2C(_BYTE* a1, unsigned __int64 a2, unsigned __int16* a3, _OWORD* a4, __int64 a5)
{
	__int64 result; // rax
	unsigned int v10; // edi
	_BYTE* v11; // rax
	_BYTE* v12; // [rsp+20h] [rbp-30h] BYREF
	int v13; // [rsp+28h] [rbp-28h] BYREF
	_BYTE* v14; // [rsp+30h] [rbp-20h]
	int v15; // [rsp+38h] [rbp-18h]

	v12 = 0i64;
	sub_1407E4830(&v13, 0i64, 0x28ui64);
	if (a3 && (!a2 || a1))
	{
		v15 = 66;
		v14 = a1;
		v12 = a1;
		if (a2 <= 0x3FFFFFFF)
			v13 = 2 * a2;
		else
			v13 = 0x7FFFFFFF;
		result = sub_1407E8A78((__int64)&v12, a3, a4, a5);
		v10 = result;
		if (a1)
		{
			if (--v13 < 0)
			{
				sub_1407E88EC(0, (__int64)&v12);
				v11 = v12;
			}
			else
			{
				*v12 = 0;
				v11 = ++v12;
			}
			if (--v13 < 0)
				sub_1407E88EC(0, (__int64)&v12);
			else
				*v11 = 0;
			return v10;
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	return result;
}

