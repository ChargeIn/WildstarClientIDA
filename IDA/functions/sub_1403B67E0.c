//----- (00000001403B67E0) ----------------------------------------------------
__int64 __fastcall sub_1403B67E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v6; // rcx
	__int64 i; // rdi
	__int64 v8; // rcx
	__int64 j; // rdi
	__int64 v10; // rcx
	__int64 k; // rdi
	__int64 v12; // rcx
	__int64 m; // rdi
	__int64 v14; // rcx
	__int64 n; // rdi
	__int64 v16; // rcx
	__int64 ii; // rdi
	__int64 v18; // rcx
	unsigned int v19; // eax
	int v20; // eax
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]
	int v24; // [rsp+40h] [rbp+8h] BYREF

	v2 = qword_140C65898;
	*(_DWORD*)(a1 + 1368) = 1;
	*(_DWORD*)(a1 + 25632) = 1;
	v3 = 0i64;
	*(_DWORD*)(a1 + 25636) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 25640) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 25644) = *(_BYTE*)(a2 + 8) & 1;
	*(_DWORD*)(a1 + 25648) = *(_BYTE*)(a2 + 8) & 8;
	for (*(_DWORD*)(a1 + 25652) = *(_BYTE*)(a2 + 8) & 4;
		(unsigned int)v3 < *(_DWORD*)(v2 + 164);
		v3 = (unsigned int)(v3 + 1))
	{
		v6 = *(_QWORD*)(*(_QWORD*)(v2 + 176) + 8 * v3);
		if (v6)
			sub_14056A430(v6);
	}
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(v2 + 188); i = (unsigned int)(i + 1))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v2 + 200) + 8 * i);
		if (v8)
			sub_14056A430(v8);
	}
	for (j = 0i64; (unsigned int)j < *(_DWORD*)(v2 + 212); j = (unsigned int)(j + 1))
	{
		v10 = *(_QWORD*)(*(_QWORD*)(v2 + 224) + 8 * j);
		if (v10)
			sub_14056A430(v10);
	}
	for (k = 0i64; (unsigned int)k < *(_DWORD*)(v2 + 236); k = (unsigned int)(k + 1))
	{
		v12 = *(_QWORD*)(*(_QWORD*)(v2 + 248) + 8 * k);
		if (v12)
			sub_14056A430(v12);
	}
	for (m = 0i64; (unsigned int)m < *(_DWORD*)(v2 + 260); m = (unsigned int)(m + 1))
	{
		v14 = *(_QWORD*)(*(_QWORD*)(v2 + 272) + 8 * m);
		if (v14)
			sub_14056A430(v14);
	}
	for (n = 0i64; (unsigned int)n < *(_DWORD*)(v2 + 284); n = (unsigned int)(n + 1))
	{
		v16 = *(_QWORD*)(*(_QWORD*)(v2 + 296) + 8 * n);
		if (v16)
			sub_14056A430(v16);
	}
	for (ii = 0i64; (unsigned int)ii < *(_DWORD*)(v2 + 308); ii = (unsigned int)(ii + 1))
	{
		v18 = *(_QWORD*)(*(_QWORD*)(v2 + 320) + 8 * ii);
		if (v18)
			sub_14056A430(v18);
	}
	*(_DWORD*)(qword_140C65898 + 1368) = 1;
	v19 = *(_DWORD*)(a2 + 12);
	if (v19 >= 0x19)
	{
		if (v19 > 0x3E8)
			v19 = 1000;
		dword_140C3A004 = v19;
	}
	else
	{
		dword_140C3A004 = 25;
	}
	v22 = 0i64;
	v23 = 0;
	v22 = *(_QWORD*)(a1 + 31648);
	v23 = *(_DWORD*)(a1 + 31656);
	sub_1403F4900(qword_140C65898, 0xD5u, (__int64)&v22);
	v24 = 0;
	v20 = dword_140C45DE0;
	if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
		v20 = *(_DWORD*)qword_140C63750;
	v24 = dword_140C45DF0[v20];
	sub_1403F4900(a1, 0x63Bu, (__int64)&v24);
	*(_OWORD*)(a1 + 32512) = 0i64;
	*(_QWORD*)(a1 + 32528) = 0i64;
	return 0i64;
}
// 140C3A004: using guessed type int dword_140C3A004;
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

