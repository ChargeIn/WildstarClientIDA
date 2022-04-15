#include "../winhttp.h"

//----- (0000000140861500) ----------------------------------------------------
__int64 __fastcall sub_140861500(__int64* a1, __int16* a2)
{
	__int64 v3; // rax
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	__int16 v7; // [rsp+30h] [rbp-38h]
	unsigned __int16 v8; // [rsp+32h] [rbp-36h]
	__int16 v9; // [rsp+38h] [rbp-30h]
	__int64 v10; // [rsp+40h] [rbp-28h]
	unsigned int v11; // [rsp+58h] [rbp-10h]

	v7 = *a2;
	v3 = *a1;
	v6 = 0i64;
	v9 = 0;
	v10 = 0i64;
	(*(void(__fastcall**)(__int64*, __int64*))(v3 + 80))(a1, &v6);
	if (v6)
	{
		*(_DWORD*)a2 = v8;
		(*(void(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	else
	{
		*(_DWORD*)a2 = 0;
	}
	return v11;
}

