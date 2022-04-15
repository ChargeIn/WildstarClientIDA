//----- (000000014078DEC0) ----------------------------------------------------
__int64 __fastcall sub_14078DEC0(_QWORD* a1)
{
	double v2; // xmm0_8
	unsigned __int64 v3; // xmm0_8
	__int64 v4; // rdx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = sub_140935050(v2).m128_u64[0];
	v4 = a1[2];
	result = 1i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = v3;
	a1[2] += 16i64;
	return result;
}

