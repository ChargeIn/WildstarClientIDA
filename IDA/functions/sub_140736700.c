//----- (0000000140736700) ----------------------------------------------------
__int64 __fastcall sub_140736700(_QWORD* a1)
{
	__int64 v1; // rcx
	__int64* v2; // rdx
	__int64 v4[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v5; // [rsp+50h] [rbp-28h]
	__int64 v6; // [rsp+58h] [rbp-20h]
	__int64 v7; // [rsp+60h] [rbp-18h]

	v1 = (unsigned int)sub_140056D60(a1, 1u) - 1;
	if ((unsigned int)((__int64)(*(_QWORD*)(qword_140C659F0 + 552) - *(_QWORD*)(qword_140C659F0 + 544)) >> 3) > (unsigned int)v1
		&& (v2 = *(__int64**)(*(_QWORD*)(qword_140C659F0 + 544) + 8 * v1)) != 0i64)
	{
		v5 = 0i64;
		v6 = 0i64;
		memset(v4, 0, sizeof(v4));
		v7 = 0i64;
		v5 = *v2;
		v6 = v2[1];
		sub_1403F4900(qword_140C65898, 0x531u, (__int64)v4);
		return 0i64;
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingResult", byte_1409EBB6C, &unk_1409F921C, 3);
		return 0i64;
	}
}
// 1409EBB6C: using guessed type _BYTE byte_1409EBB6C[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

