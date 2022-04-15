//----- (0000000140828540) ----------------------------------------------------
__int64 __fastcall sub_140828540(__int64 a1, float a2)
{
	unsigned __int16 v3; // ax
	int v4; // [rsp+20h] [rbp-48h] BYREF
	__int64 v5; // [rsp+28h] [rbp-40h]
	float v6; // [rsp+30h] [rbp-38h]

	if (a2 <= 0.0)
		return 31i64;
	v6 = a2;
	v5 = a1;
	HIWORD(v4) = 33;
	v3 = sub_140055BD0();
	return sub_14082BB30(qword_140C61B68, &v4, v3);
}

