//----- (0000000140828930) ----------------------------------------------------
__int64 __fastcall sub_140828930(__int64 a1, __int64 a2)
{
	__int128 v3; // xmm0
	__int64 v4; // xmm1_8
	unsigned __int16 v5; // ax
	int v6; // [rsp+20h] [rbp-48h] BYREF
	__int64 v7; // [rsp+28h] [rbp-40h]
	__int128 v8; // [rsp+30h] [rbp-38h]
	__int64 v9; // [rsp+40h] [rbp-28h]

	if (!a1)
		return 2i64;
	v3 = *(_OWORD*)a2;
	v4 = *(_QWORD*)(a2 + 16);
	HIWORD(v6) = 13;
	v7 = a1;
	v8 = v3;
	v9 = v4;
	v5 = sub_1402D5BD0();
	return sub_14082BB30(qword_140C61B68, &v6, v5);
}

