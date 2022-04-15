#include "../winhttp.h"

//----- (00000001405E3940) ----------------------------------------------------
void __fastcall sub_1405E3940(__int64 a1)
{
	__int64 v1; // rcx
	__int64 v2; // rbx
	__int64 v3; // [rsp+20h] [rbp-88h] BYREF
	__int64 v4; // [rsp+28h] [rbp-80h]
	__int64 v5; // [rsp+48h] [rbp-60h]
	__int64 v6; // [rsp+50h] [rbp-58h]
	__int64 v7; // [rsp+68h] [rbp-40h]
	_WORD* v8; // [rsp+88h] [rbp-20h]

	sub_14040B680(&v3, a1, 0);
	v2 = v5;
	if (v5 != v6)
		sub_1405DE650(v1, v5, v7, v8);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v7)
		sub_14018B900(v7, 0);
	if (v2)
		sub_14018B900(v2, 0);
	if (v4)
		sub_14018B900(v4, 0);
}
// 1405E3975: variable 'v1' is possibly undefined

