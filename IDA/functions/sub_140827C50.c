//----- (0000000140827C50) ----------------------------------------------------
__int64 __fastcall sub_140827C50(
	unsigned int a1,
	__int64 a2,
	unsigned int a3,
	__int64 a4,
	__int64 a5,
	__int64* a6,
	int a7)
{
	__int64 v10; // rax
	unsigned __int16 v12; // ax
	int v13; // [rsp+30h] [rbp-48h] BYREF
	__int64 v14; // [rsp+38h] [rbp-40h] BYREF
	unsigned int v15; // [rsp+40h] [rbp-38h]
	int v16; // [rsp+44h] [rbp-34h]
	__int64 v17; // [rsp+48h] [rbp-30h]
	__int64 v18; // [rsp+50h] [rbp-28h]
	__int64 v19; // [rsp+58h] [rbp-20h]
	int* v20; // [rsp+60h] [rbp-18h]

	HIWORD(v13) = 1;
	if (a6)
	{
		v17 = *a6;
		v18 = a6[1];
		v10 = a6[2];
	}
	else
	{
		v10 = 0i64;
		v17 = 0i64;
		LODWORD(v18) = 0;
	}
	v19 = v10;
	v20 = (int*)sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), a1);
	if (!v20)
		return 0i64;
	v14 = a2;
	v16 = a7;
	v15 = _InterlockedIncrement(&dword_140C61B54);
	if ((unsigned int)sub_14083B380(qword_140C61B80, (__int64)&v14, a4, a5, a3, v20[6]) != 1)
	{
		(*(void(__fastcall**)(int*))(*(_QWORD*)v20 + 16i64))(v20);
		return 0i64;
	}
	v12 = sub_14082EE90();
	sub_14082BB30(qword_140C61B68, &v13, v12);
	return v15;
}
// 140C61B54: using guessed type int dword_140C61B54;
// 140C61B80: using guessed type __int64 qword_140C61B80;

