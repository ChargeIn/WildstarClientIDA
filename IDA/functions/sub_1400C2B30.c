#include "../winhttp.h"

//----- (00000001400C2B30) ----------------------------------------------------
__int64 __fastcall sub_1400C2B30(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64* v5; // rax
	__int64 v6; // r9
	int* v7; // rsi
	__int64 v8; // rax
	int* v9; // rbx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF
	__int64 v12; // [rsp+40h] [rbp+18h] BYREF

	v12 = a3;
	v4 = *(_QWORD*)(a1 + 16);
	v5 = &v12;
	v6 = *(_QWORD*)(a1 + 8);
	v11 = -1i64;
	v7 = (int*)(v6 + 2 * a2);
	v12 = ((v4 - v6) >> 1) - a2;
	if (v12 == -1)
		v5 = &v11;
	v8 = a2 + *v5;
	v9 = (int*)(v6 + 2 * v8);
	if (v7 != v9)
	{
		sub_1407DB590(v7, (int*)(v6 + 2 * v8), 2 * ((v4 - (__int64)v9) >> 1) + 2);
		*(_QWORD*)(a1 + 16) += -2 * (((char*)v9 - (char*)v7) >> 1);
	}
	return a1;
}

