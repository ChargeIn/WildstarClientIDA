//----- (00000001408272F0) ----------------------------------------------------
__int64 __fastcall sub_1408272F0(unsigned int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
	unsigned __int16 v9; // ax
	int v11; // [rsp+20h] [rbp-48h] BYREF
	__int64 v13; // [rsp+30h] [rbp-38h]
	int v14; // [rsp+38h] [rbp-30h]
	int v15; // [rsp+3Ch] [rbp-2Ch]
	int v16; // [rsp+40h] [rbp-28h]
	int v17; // [rsp+44h] [rbp-24h]

	HIWORD(v11) = 32;
	if (!sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), a1))
		return 2i64;
	v13 = a3;
	v14 = a2;
	v16 = a5;
	v15 = a4;
	v17 = a6;
	v9 = sub_1402D5BD0();
	return sub_14082BB30(qword_140C61B68, &v11, v9);
}

