//----- (00000001405AA640) ----------------------------------------------------
void __fastcall sub_1405AA640(
	_DWORD* a1,
	unsigned int a2,
	unsigned int a3,
	unsigned int a4,
	unsigned int a5,
	unsigned int a6,
	unsigned int a7,
	unsigned int a8)
{
	int v12; // esi
	__int64 v13; // rax
	unsigned int v14; // edi
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	unsigned int v18; // edi
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	unsigned int v22; // edi
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rcx
	unsigned int v29; // r9d
	__int64 v30; // rcx
	char v31[176]; // [rsp+70h] [rbp-C8h] BYREF

	v12 = 0;
	v13 = sub_140205FA0(a1[46]);
	if (v13)
		v12 = *(_DWORD*)(v13 + 4);
	v14 = a6;
	if (!a6)
		v14 = a1[22];
	v15 = sub_140207D60(v14);
	if (v15 && (*(_BYTE*)(v15 + 24) & 0x40) != 0)
	{
		sub_1405AC3F0((__int64)a1, 4, v12, v14, 1);
	}
	else if (!v14)
	{
		v16 = sub_1405AC9B0((__int64)a1);
		if (v16)
			sub_1404C94C0(v17, a1[47], *(_DWORD*)(v16 + 496));
	}
	v18 = a7;
	if (!a7)
		v18 = a1[23];
	v19 = sub_140207D60(v18);
	if (v19 && (*(_DWORD*)(v19 + 24) & 0x100) != 0)
	{
		sub_1405AC3F0((__int64)a1, 4, v12, v18, 1);
	}
	else if (!v18)
	{
		v20 = sub_1405ACB80((__int64)a1);
		if (v20)
			sub_1404C94C0(v21, a1[47], *(_DWORD*)(v20 + 496));
	}
	v22 = a8;
	if (!a8)
		v22 = a1[24];
	v23 = sub_140207D60(v22);
	if (v23 && (*(_DWORD*)(v23 + 24) & 0x200) != 0)
	{
		sub_1405AC3F0((__int64)a1, 4, v12, v22, 1);
	}
	else if (!v22)
	{
		v24 = sub_1405ACD50((__int64)a1);
		if (v24)
			sub_1404C94C0(v25, a1[47], *(_DWORD*)(v24 + 496));
	}
	if (a2 || (a2 = a1[20]) != 0)
	{
		sub_1404BCB00((__int64)v31, (__int64)(a1 + 2), 0i64, a2, 0, 0, 0, 0, 1, 0, 0i64, 0i64, 0);
		sub_1404C8E20(v26, a1[47], v12, (__int64)v31, 0);
	}
	if (!a3)
		a3 = a1[18];
	v27 = sub_140207D60(a3);
	if (v27 && (*(_BYTE*)(v27 + 24) & 2) != 0)
		sub_1405AC3F0((__int64)a1, 4, v12, a3, 1);
	if (a4 || (a4 = a1[19]) != 0)
	{
		sub_1404BCB00((__int64)v31, (__int64)(a1 + 2), 0i64, a4, 0, 0, 0, 0, 2, 0, 0i64, 0i64, 0);
		sub_1404C8E20(v28, a1[47], v12, (__int64)v31, 0);
	}
	v29 = a5;
	if (a5 || (v29 = a1[21]) != 0)
	{
		sub_1404BCB00((__int64)v31, (__int64)(a1 + 2), 0i64, v29, 0, 0, 0, 0, 3, 0, 0i64, 0i64, 0);
		sub_1404C8E20(v30, a1[47], v12, (__int64)v31, 0);
	}
}
// 1405AA6E1: variable 'v17' is possibly undefined
// 1405AA744: variable 'v21' is possibly undefined
// 1405AA7A7: variable 'v25' is possibly undefined
// 1405AA811: variable 'v26' is possibly undefined
// 1405AA8AF: variable 'v28' is possibly undefined
// 1405AA91E: variable 'v30' is possibly undefined

