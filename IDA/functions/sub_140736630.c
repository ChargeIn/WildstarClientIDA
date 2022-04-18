#include "../winhttp.h"

//----- (0000000140736630) ----------------------------------------------------
__int64 __fastcall sub_140736630(_QWORD* a1)
{
	__int64 v1; // rcx
	__int64* v2; // rdx
	int v4; // [rsp+20h] [rbp-58h]
	__int64 v5; // [rsp+30h] [rbp-48h] BYREF
	__int64 v6; // [rsp+38h] [rbp-40h]
	__int64 v7; // [rsp+40h] [rbp-38h]
	__int64 v8; // [rsp+48h] [rbp-30h]
	__int64 v9; // [rsp+50h] [rbp-28h]
	__int64 v10; // [rsp+58h] [rbp-20h]
	__int64 v11; // [rsp+60h] [rbp-18h]

	v1 = (unsigned int)sub_140056D60(a1, 1u) - 1;
	if ((unsigned int)((__int64)(*(_QWORD*)(qword_140C659F0 + 520) - *(_QWORD*)(qword_140C659F0 + 512)) >> 3) > (unsigned int)v1
		&& (v2 = *(__int64**)(*(_QWORD*)(qword_140C659F0 + 512) + 8 * v1)) != 0i64)
	{
		v6 = 0i64;
		v7 = 0i64;
		v5 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v10 = 0i64;
		v11 = 0i64;
		v6 = *v2;
		v7 = v2[1];
		sub_1403F4900(qword_140C65898, 0x531u, (__int64)&v5);
		return 0i64;
	}
	else
	{
		v4 = 3;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F9234, v4);
		return 0i64;
	}
}
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

