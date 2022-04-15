#include "../winhttp.h"

//----- (00000001407B4650) ----------------------------------------------------
__int64 __fastcall sub_1407B4650(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rax
	int v8; // ebx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v5 = *a1;
	v10 = 0i64;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, __int64*))(v5 + 88))(a1, a2, &v10);
	if (v8 >= 0)
		v8 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v10 + 144i64))(v10, a3, a4, a5);
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	return (unsigned int)v8;
}

