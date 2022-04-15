//----- (0000000140828590) ----------------------------------------------------
__int64 __fastcall sub_140828590(__int64 a1, int* a2, unsigned int a3)
{
	unsigned __int16 v4; // ax
	int v5; // [rsp+20h] [rbp-48h] BYREF
	__int64 v6; // [rsp+28h] [rbp-40h]
	unsigned int v7; // [rsp+30h] [rbp-38h]
	int v8[13]; // [rsp+34h] [rbp-34h] BYREF

	if (a3 > 4)
		return 31i64;
	v6 = a1;
	v7 = a3;
	HIWORD(v5) = 18;
	sub_1407DB590(v8, a2, 8 * a3);
	v4 = sub_14082EE90();
	return sub_14082BB30(qword_140C61B68, &v5, v4);
}
// 140828590: using guessed type int var_34[13];

