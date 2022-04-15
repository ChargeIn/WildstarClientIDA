#include "../winhttp.h"

//----- (00000001406E3430) ----------------------------------------------------
__int64 __fastcall sub_1406E3430(__int64* a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rax
	__int64 result; // rax
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+2Ch] [rbp-1Ch]
	__int64 v11; // [rsp+34h] [rbp-14h]
	int v12; // [rsp+3Ch] [rbp-Ch]

	if (!a4)
	{
		if (a6)
			*(_DWORD*)(a6 + 3824) = 0;
		v6 = *a1;
		v8 = 150i64;
		v10 = 0i64;
		v11 = 0i64;
		v9 = 1065353216;
		v12 = 0;
		return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v6 + 584))(a1, 0i64, &v8);
	}
	return result;
}

