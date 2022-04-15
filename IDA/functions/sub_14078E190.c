//----- (000000014078E190) ----------------------------------------------------
__int64 __fastcall sub_14078E190(_QWORD* a1)
{
	double v2; // xmm6_8
	double v3; // xmm1_8
	__int64 v4; // rcx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = sub_140056C40(a1, 2u);
	sub_1409357C8(v2, v3);
	v4 = a1[2];
	*(_DWORD*)(v4 + 8) = 3;
	result = 1i64;
	*(double*)v4 = v2;
	a1[2] += 16i64;
	return result;
}

