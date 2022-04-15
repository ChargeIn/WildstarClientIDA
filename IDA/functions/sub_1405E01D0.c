#include "../winhttp.h"

//----- (00000001405E01D0) ----------------------------------------------------
__int64 __fastcall sub_1405E01D0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	__int64* v6; // rbx
	__int64 v7; // rbx
	float v8; // xmm1_4

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 184))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 176) + 8 * (v4 % *(_QWORD*)(a1 + 168)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 192))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = v5 + 4;
		if (v6)
		{
			v7 = *v6;
			*(_DWORD*)(v7 + 252) = 1;
			sub_1405DF4E0(a1, v7);
			v8 = *(float*)(a2 + 16);
			if (v8 == 0.0)
			{
				*(_QWORD*)(v7 + 200) = 0i64;
			}
			else if (v7 != -200)
			{
				sub_1401E82F0((__int64*)(v7 + 200), v8);
			}
		}
	}
	return 0i64;
}

