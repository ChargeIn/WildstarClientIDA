//----- (000000014078E1F0) ----------------------------------------------------
__int64 __fastcall sub_14078E1F0(_QWORD* a1)
{
	double v2; // xmm0_8
	unsigned __int64 v3; // xmm0_8
	__int64 v4; // rax
	__int64 v5; // xmm1_8
	__int64 v6; // rax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056C40(a1, 1u);
	v3 = sub_140900CF0(v2, (double*)&v8).m128_u64[0];
	v4 = a1[2];
	v5 = v8;
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = a1[2];
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)v6 = v3;
	a1[2] += 16i64;
	return 2i64;
}

