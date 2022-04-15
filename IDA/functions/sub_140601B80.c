//----- (0000000140601B80) ----------------------------------------------------
__int64 __fastcall sub_140601B80(__int64 a1, unsigned __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // rcx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+30h] [rbp-18h]

	v2 = *(_QWORD**)(a1 + 64);
	if (!v2 || a2 >= v2[12])
		return 0i64;
	if (a2)
	{
		if (a2 <= v2[13])
			--a2;
	}
	else
	{
		a2 = v2[13];
	}
	v3 = *(_QWORD*)(v2[11] + 8 * a2);
	if (!v3)
		return 0i64;
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v5 = v2[9];
	v6 = *(_QWORD*)(v3 + 16);
	v7 = *(_QWORD*)(v3 + 24);
	sub_1403F4740(qword_140C65898, 0x446u, (__int64)&v5);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

