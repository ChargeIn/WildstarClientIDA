//----- (00000001406A0940) ----------------------------------------------------
__int64 __fastcall sub_1406A0940(_QWORD* a1, unsigned int a2)
{
	int* v4; // rax
	_DWORD* v5; // rax
	__int64 v6; // rcx
	const char* v7; // r9
	const char* v8; // rax
	int v9; // eax
	__int64 v11; // [rsp+20h] [rbp-48h] BYREF
	int v12; // [rsp+28h] [rbp-40h]
	int v13; // [rsp+2Ch] [rbp-3Ch]
	__int64 v14; // [rsp+30h] [rbp-38h]
	__int64 v15; // [rsp+38h] [rbp-30h]
	__int64 v16; // [rsp+40h] [rbp-28h]
	__int64 v17; // [rsp+48h] [rbp-20h]
	__int64 v18; // [rsp+50h] [rbp-18h]

	v4 = sub_140417BF0(a1, 1u);
	if (!v4)
	{
		v5 = (_DWORD*)a1[3];
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || (v6 = (int)v5[2], (_DWORD)v6 == -1))
			v7 = aNoValue;
		else
			v7 = off_140A123B0[v6];
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", "Item or item id", v7);
		sub_140056570(a1, 1u, v8);
	}
	v9 = *v4;
	v11 = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	v12 = v9;
	v16 = a2;
	v13 = 1;
	v14 = 1i64;
	v15 = 1i64;
	return sub_140433640(a1, &v11);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

