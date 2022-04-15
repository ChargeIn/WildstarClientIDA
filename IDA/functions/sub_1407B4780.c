#include "../winhttp.h"

//----- (00000001407B4780) ----------------------------------------------------
__int64 __fastcall sub_1407B4780(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	int v5; // ebx
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v3 = *a1;
	v7 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64*, __int64, __int64*))(v3 + 88))(a1, a2, &v7);
	if (v5 >= 0)
		v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 120i64))(v7, a3);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return (unsigned int)v5;
}

