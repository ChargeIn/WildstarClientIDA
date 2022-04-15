//----- (0000000140066500) ----------------------------------------------------
__int64 __fastcall sub_140066500(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	__int128 v8; // xmm0
	const char* v10; // rax
	__int64 v11; // [rsp+20h] [rbp-2D8h] BYREF
	int v12; // [rsp+28h] [rbp-2D0h]
	__int128 v13; // [rsp+30h] [rbp-2C8h] BYREF
	__int128 v14; // [rsp+40h] [rbp-2B8h]
	__int64 v15; // [rsp+58h] [rbp-2A0h]
	__int64 v16; // [rsp+68h] [rbp-290h]
	__int64 v17[76]; // [rsp+80h] [rbp-278h] BYREF

	v16 = a3;
	v6 = -1i64;
	do
		++v6;
	while (*((_BYTE*)a4 + v6));
	v7 = sub_140062650(a1, a4, v6);
	sub_140062EF0(a1, (__int64)&v11, a2, v7);
	sub_140066040(&v11, (__int64)v17);
	*(_BYTE*)(v17[0] + 114) = 2;
	v12 = HIDWORD(v11);
	if ((_DWORD)v14 == 287)
	{
		LODWORD(v13) = sub_140063BB0((__int64)&v11, (__int64*)&v13 + 1);
	}
	else
	{
		v8 = v14;
		LODWORD(v14) = 287;
		v13 = v8;
	}
	sub_140069EC0((__int64)&v11);
	if ((_DWORD)v13 != 287)
	{
		v10 = (const char*)sub_14005B130(v15, (unsigned __int64*)"'%s' expected", aEof);
		sub_140062CF0((__int64)&v11, v10, v13);
	}
	sub_140066140((__int64)&v11);
	return v17[0];
}
// 140066500: using guessed type __int64 var_278[76];

