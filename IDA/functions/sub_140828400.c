//----- (0000000140828400) ----------------------------------------------------
__int64 __fastcall sub_140828400(__int64 a1)
{
	unsigned __int16 v1; // ax
	int v3; // [rsp+20h] [rbp-48h] BYREF
	__int64 v4; // [rsp+28h] [rbp-40h]
	__int64 v5; // [rsp+30h] [rbp-38h]

	if ((unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDui64)
		return 2i64;
	v4 = a1;
	v5 = 0i64;
	HIWORD(v3) = 11;
	v1 = sub_140055BD0();
	return sub_14082BB30(qword_140C61B68, &v3, v1);
}

