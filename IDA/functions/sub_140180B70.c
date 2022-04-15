#include "../winhttp.h"

//----- (0000000140180B70) ----------------------------------------------------
__int64 __fastcall sub_140180B70(_DWORD* a1, __int64* a2)
{
	int v2; // xmm0_4
	int v3; // eax
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]
	int v8; // [rsp+2Ch] [rbp-1Ch]
	int v9; // [rsp+30h] [rbp-18h]
	__int64 v10; // [rsp+34h] [rbp-14h]
	int v11; // [rsp+3Ch] [rbp-Ch]

	if (a2)
	{
		if (a1[258])
			v2 = a1[261];
		else
			v2 = 0;
		v3 = a1[259];
		v7 = v2;
		v8 = v3;
		v4 = *a2;
		v6 = 150i64;
		v9 = 0;
		v10 = 2i64;
		v11 = 0;
		return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v4 + 584))(a2, 0i64, &v6);
	}
	return result;
}

