#include "../winhttp.h"

//----- (00000001405EF190) ----------------------------------------------------
__int64 __fastcall sub_1405EF190(__int64 a1)
{
	__int64 v2; // rbx
	float* v3; // r8
	float* v4; // rdx
	float* v5; // rcx
	__int64 result; // rax
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

	v2 = 0i64;
	v9[1] = 0i64;
	v9[0] = 0i64;
	if (qword_140C886B8)
	{
		sub_1401A4200(a1, v9);
		v2 = v9[0];
	}
	v8 = 0i64;
	v7 = 0i64;
	sub_1405EEE80(&v7, (int*)(a1 + 32208), v9);
	v3 = (float*)(a1 + 32220);
	v4 = (float*)(a1 + 32216);
	v5 = (float*)(a1 + 32212);
	if (v8 > 2)
	{
		sub_1405EEF90(v5, v4, v3, &v7);
	}
	else
	{
		*v5 = 0.0;
		*v4 = 0.0;
		*v3 = 0.0;
	}
	sub_1403F4900(a1, 0x23Cu, a1 + 32192);
	result = sub_1403B55E0(a1);
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	return result;
}
// 1403B55E0: using guessed type __int64 __fastcall sub_1403B55E0(_QWORD);
// 140C886B8: using guessed type __int64 qword_140C886B8;

