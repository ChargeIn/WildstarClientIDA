//----- (0000000140828AA0) ----------------------------------------------------
__int64 __fastcall sub_140828AA0(int a1, int a2, __int64 a3)
{
	unsigned __int16 v3; // ax
	int v5; // [rsp+20h] [rbp-48h] BYREF
	__int64 v6; // [rsp+28h] [rbp-40h]
	int v7; // [rsp+30h] [rbp-38h]
	int v8; // [rsp+34h] [rbp-34h]

	v6 = a3;
	v7 = a1;
	HIWORD(v5) = 8;
	v8 = a2;
	v3 = sub_140055BD0();
	return sub_14082BB30(qword_140C61B68, &v5, v3);
}

