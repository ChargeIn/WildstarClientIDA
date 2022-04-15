//----- (00000001400DE160) ----------------------------------------------------
__int64 __fastcall sub_1400DE160(_QWORD* a1)
{
	__int64 v2; // rbp
	unsigned int v3; // esi
	unsigned int v4; // edi
	unsigned int v5; // ebx
	unsigned int v6; // eax
	__int128 v7; // xmm1
	unsigned int v8; // ecx
	int v9; // eax
	__int128 v11; // [rsp+60h] [rbp-A8h]
	__int128 v12[5]; // [rsp+80h] [rbp-88h] BYREF
	int v13; // [rsp+D0h] [rbp-38h]

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = sub_140056D60(a1, 3u);
		v5 = sub_140056D60(a1, 4u);
		v6 = sub_140056D60(a1, 5u);
		v7 = *(_OWORD*)(v2 + 96);
		v8 = v6;
		v9 = *(_DWORD*)(v2 + 144);
		v12[0] = *(_OWORD*)(v2 + 64);
		v12[2] = v7;
		v13 = v9 | 0x300;
		*(_QWORD*)&v11 = __PAIR64__(v4, v3);
		*((_QWORD*)&v11 + 1) = __PAIR64__(v8, v5);
		v12[1] = *(_OWORD*)(v2 + 80);
		v12[4] = v11;
		v12[3] = *(_OWORD*)(v2 + 112);
		sub_1400CC680(v2, (__int64)v12);
	}
	return 0i64;
}

