//----- (000000014078E290) ----------------------------------------------------
__int64 __fastcall sub_14078E290(_QWORD* a1)
{
	double v2; // xmm6_8
	double v3; // xmm0_8
	double v4; // xmm0_8
	__int64 v5; // rcx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = sub_140056C40(a1, 2u);
	v4 = sub_1408FFA00(v2, v3);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	result = 1i64;
	*(double*)v5 = v4;
	a1[2] += 16i64;
	return result;
}

