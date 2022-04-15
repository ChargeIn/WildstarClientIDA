#include "../winhttp.h"

//----- (000000014055C530) ----------------------------------------------------
__int64 __fastcall sub_14055C530(__int64* a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+2Ch] [rbp-1Ch]
	__int64 v9; // [rsp+34h] [rbp-14h]
	int v10; // [rsp+3Ch] [rbp-Ch]

	if (!a4)
	{
		v8 = 0i64;
		v9 = 0i64;
		v10 = 0;
		v7 = 1065353216;
		v4 = *a1;
		v6 = 150i64;
		return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v4 + 584))(a1, 0i64, &v6);
	}
	return result;
}

