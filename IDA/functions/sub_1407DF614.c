#include "../winhttp.h"

//----- (00000001407DF614) ----------------------------------------------------
__int64 __fastcall sub_1407DF614(_BYTE* a1, unsigned __int64 a2, signed __int8* a3, _OWORD* a4, int* a5)
{
	__int64 result; // rax
	unsigned int v10; // ebx
	_BYTE* v11; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h] BYREF
	_BYTE* v13; // [rsp+30h] [rbp-28h]
	int v14; // [rsp+38h] [rbp-20h]

	v11 = 0i64;
	sub_1407E4830(&v12, 0i64, 0x28ui64);
	if (a3 && (!a2 || a1))
	{
		if (a2 > 0x7FFFFFFF)
			LODWORD(a2) = 0x7FFFFFFF;
		v14 = 66;
		v13 = a1;
		v12 = a2;
		v11 = a1;
		result = sub_1407E96D0((__int64)&v11, a3, a4, a5);
		v10 = result;
		if (a1)
		{
			if (--v12 < 0)
				sub_1407E88EC(0, (__int64)&v11);
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

