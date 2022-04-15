//----- (0000000140123490) ----------------------------------------------------
__int64 __fastcall sub_140123490(__int64 a1, int a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	__int128* v8; // rdx
	__int64 v9; // rcx
	int v10; // eax
	int v12; // [rsp+28h] [rbp-D8h]
	int v13; // [rsp+30h] [rbp-D0h]
	__int128 v14; // [rsp+60h] [rbp-A0h]
	__int128 v15; // [rsp+70h] [rbp-90h] BYREF
	__int128 v16; // [rsp+80h] [rbp-80h]
	_OWORD v17[2]; // [rsp+90h] [rbp-70h]
	int v18; // [rsp+B0h] [rbp-50h]
	__int128 v19[5]; // [rsp+C0h] [rbp-40h] BYREF
	int v20; // [rsp+110h] [rbp+10h]
	int v21[5]; // [rsp+11Ch] [rbp+1Ch]
	int v22[4]; // [rsp+130h] [rbp+30h]

	v22[0] = 1065353216;
	v22[1] = 1065353216;
	v21[1] = -64 * a2;
	v22[2] = 1065353216;
	v22[3] = 1065353216;
	v21[2] = -24;
	v21[4] = -4;
	v21[3] = 60 - (a2 << 6);
	v5 = sub_14018B280(1568i64, 0);
	if (v5)
		v6 = sub_14012F720(
			(__int64)v5,
			*(_QWORD*)(a1 + 32),
			a1,
			*(_QWORD*)(*(_QWORD*)(a1 + 32) + 2928i64) + 648i64,
			0,
			v12,
			v13,
			0i64,
			&xmmword_140C67280,
			0i64);
	else
		v6 = 0i64;
	v7 = *(_QWORD*)v6;
	*(_QWORD*)(v6 + 656) |= 0x100ui64;
	*(_DWORD*)(v6 + 704) = 5;
	(*(void(__fastcall**)(__int64, __int64))(v7 + 80))(v6, a3);
	v18 = 0;
	v8 = &v15;
	v9 = 0i64;
	do
	{
		v10 = v22[v9++];
		v8 = (__int128*)((char*)v8 + 8);
		*(_DWORD*)((char*)&v16 + v9 * 4 + 12) = v10;
		*(_DWORD*)((char*)v17 + v9 * 4 + 12) = v21[v9];
		*((_QWORD*)v8 - 1) = 0i64;
	} while (v9 < 4);
	v20 = v18 | 0x300;
	v19[0] = v14;
	v19[2] = v16;
	v19[1] = v15;
	v19[3] = v17[0];
	v19[4] = v17[1];
	sub_1400CC680(v6, (__int64)v19);
	return v6;
}
// 14012353E: variable 'v12' is possibly undefined
// 14012353E: variable 'v13' is possibly undefined
// 1401235BD: variable 'v14' is possibly undefined
// 140C67280: using guessed type __int128 xmmword_140C67280;

