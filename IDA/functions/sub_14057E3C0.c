//----- (000000014057E3C0) ----------------------------------------------------
__int64 __fastcall sub_14057E3C0(__int64 a1, unsigned __int64* a2)
{
	int* v4; // rax
	__int128 v5; // xmm0
	__int128 v6; // xmm1
	int* v7; // rax
	float v8; // xmm6_4
	int* v9; // rax
	int v10; // ecx
	__int64 v12[2]; // [rsp+40h] [rbp-A8h] BYREF
	__int64 v13[2]; // [rsp+50h] [rbp-98h] BYREF
	__int128 v14[2]; // [rsp+60h] [rbp-88h] BYREF
	__int128 v15; // [rsp+80h] [rbp-68h]
	__int128 v16; // [rsp+90h] [rbp-58h]

	memset(v14, 0, sizeof(v14));
	v15 = 0ui64;
	v16 = 0ui64;
	v4 = sub_14058F7E0(a1 + 824, a2 + 2);
	*(_OWORD*)v4 = 0ui64;
	v5 = v15;
	*((_OWORD*)v4 + 1) = 0ui64;
	v6 = v16;
	*((_OWORD*)v4 + 2) = v5;
	*((_OWORD*)v4 + 3) = v6;
	v7 = sub_14058F7E0(a1 + 824, a2 + 2);
	*(_QWORD*)v7 = a2[2];
	*((_QWORD*)v7 + 1) = a2[3];
	*((_QWORD*)v7 + 2) = a2[4];
	*((_QWORD*)v7 + 3) = a2[5];
	*((_QWORD*)v7 + 4) = a2[6];
	*((_QWORD*)v7 + 5) = a2[7];
	*((_QWORD*)v7 + 6) = a2[8];
	v8 = *((float*)a2 + 16);
	v9 = sub_14058F7E0(a1 + 824, a2 + 2);
	if (v9 != (int*)-56i64)
		sub_1401E82F0((__int64*)v9 + 7, v8);
	if ((unsigned int)(*((_DWORD*)a2 + 6) - 3) > 1
		|| (v10 = *(_DWORD*)(qword_140C635F0 + 5760),
			v12[1] = a2[4],
			LODWORD(v12[0]) = v10,
			v13[1] = (__int64)sub_140581230,
			v13[0] = a1,
			(unsigned int)sub_1403F82F0(qword_140C65898, 8, v12, v14, 0x21u, v13, 0i64)))
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildEventLogChange", byte_1409EA76C, a1);
	}
	return 0i64;
}
// 1409EA76C: using guessed type _BYTE byte_1409EA76C[32];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

