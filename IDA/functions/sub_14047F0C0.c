//----- (000000014047F0C0) ----------------------------------------------------
void __fastcall sub_14047F0C0(__m128* a1, __int64 a2, int a3)
{
	__int64 v6; // rax
	__int64 v7; // rdx
	unsigned __int64 v8; // rax
	__int128 v9; // xmm1
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	unsigned __int64 v12; // rax
	__int64 v13; // [rsp+20h] [rbp-78h] BYREF
	__int64 v14; // [rsp+28h] [rbp-70h]
	__int128* v15; // [rsp+30h] [rbp-68h]
	__int128 v16[4]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v17; // [rsp+80h] [rbp-18h]

	LODWORD(v13) = *(_DWORD*)a2;
	HIDWORD(v13) = *(_DWORD*)(a2 + 8);
	LODWORD(v14) = *(_DWORD*)(a2 + 12);
	HIDWORD(v14) = *(_DWORD*)(a2 + 4);
	LODWORD(v15) = a3;
	v6 = sub_140481060(&a1[866].m128_i64[1], (int*)&v13);
	if (a3)
	{
		v7 = 20 * v6;
		v8 = a1[866].m128_u64[1];
		*(_DWORD*)(v7 + v8) = ++dword_140C6588C | 0xC0000000;
		v13 = 0i64;
		v14 = 0i64;
		v15 = 0i64;
		v9 = *(_OWORD*)(a2 + 16);
		v16[0] = *(_OWORD*)a2;
		v16[1] = v9;
		LODWORD(v8) = a1->m128_i32[2];
		v14 = 0x100000001i64;
		v10 = *(_OWORD*)(a2 + 32);
		v11 = *(_OWORD*)(a2 + 48);
		LODWORD(v13) = v8;
		v12 = a1[866].m128_u64[1];
		v16[2] = v10;
		v16[3] = v11;
		v17 = *(_QWORD*)(a2 + 64);
		LODWORD(v16[0]) = *(_DWORD*)(v7 + v12);
		v15 = v16;
		sub_1405FE2F0(*(_QWORD**)(qword_140C65898 + 32144), (__int64)&v13);
	}
	else if (a1[868].m128_i32[3])
	{
		sub_14047F210((__int64)a1, a1 + 286, 0, 0);
	}
}
// 140C6588C: using guessed type int dword_140C6588C;
// 140C65898: using guessed type __int64 qword_140C65898;

