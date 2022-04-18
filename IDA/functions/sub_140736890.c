#include "../winhttp.h"

//----- (0000000140736890) ----------------------------------------------------
__int64 __fastcall sub_140736890(_QWORD* a1)
{
	char* v1; // rax
	__int64 v2; // rbx
	int v4; // [rsp+20h] [rbp-58h]
	__int64 v5; // [rsp+30h] [rbp-48h] BYREF
	__int64 v6; // [rsp+38h] [rbp-40h]
	__int64 v7; // [rsp+40h] [rbp-38h]
	__int64 v8; // [rsp+48h] [rbp-30h]
	__int64 v9; // [rsp+50h] [rbp-28h]
	__int64 v10; // [rsp+58h] [rbp-20h]
	__int64 v11; // [rsp+60h] [rbp-18h]

	v1 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v5, v1);
	v2 = v6;
	if (((v7 - v6) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		v11 = v6;
		v5 = 0i64;
		v6 = 0i64;
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v10 = 0i64;
		sub_1403F4900(qword_140C65898, 0x531u, (__int64)&v5);
	}
	else
	{
		v4 = 62;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F91CC, v4);
	}
	if (v2)
		sub_14018B900(v2, 0);
	return 0i64;
}
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

