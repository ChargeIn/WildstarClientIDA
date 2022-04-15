//----- (000000014014A810) ----------------------------------------------------
__int64 __fastcall sub_14014A810(_QWORD* a1)
{
	__int64 v2; // r9
	_OWORD* v3; // rax
	_DWORD* v5; // rax
	__int128* v6; // rbx
	__int64 v7; // r9
	__int128* v8; // rax
	__int128 v9; // xmm7
	__int128 v10; // xmm6
	_OWORD* v11; // rax
	__int128 v12; // xmm7
	__int128 v13; // xmm6
	_OWORD* v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r9
	__int64 v18; // [rsp+30h] [rbp-58h] BYREF
	int v19; // [rsp+38h] [rbp-50h]
	__int128 v20; // [rsp+40h] [rbp-48h] BYREF
	__int128 v21; // [rsp+50h] [rbp-38h] BYREF

	if ((unsigned int)sub_140149270((__int64)a1, 1))
	{
		v3 = (_OWORD*)sub_140056AB0(a1, 1u);
		return sub_1401491E0(a1, v3);
	}
	else
	{
		v5 = (_DWORD*)a1[3];
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || v5[2] != 5)
		{
			v12 = *(_OWORD*)sub_140056AB0(a1, 1u);
			v13 = *(_OWORD*)sub_140056AB0(a1, 2u);
			v14 = (_OWORD*)sub_140059170(a1, 0x20ui64);
			*v14 = v12;
			v14[1] = v13;
		}
		else
		{
			v6 = sub_140145110(&v20, a1, "AaRect", v2, (unsigned __int64*)"lim", 2);
			v8 = sub_140145110(&v21, a1, "AaRect", v7, (unsigned __int64*)"min", 1);
			v9 = *v6;
			v10 = *v8;
			v11 = (_OWORD*)sub_140059170(a1, 0x20ui64);
			*v11 = v10;
			v11[1] = v9;
		}
		v15 = a1[4];
		v16 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
		v17 = a1[2];
		v18 = v16;
		v19 = 4;
		sub_14005E8E0((__int64)a1, v15 + 160, (int*)&v18, v17);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
}
// 14014A8A6: variable 'v2' is possibly undefined
// 14014A8D1: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

