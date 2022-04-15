//----- (000000014078E490) ----------------------------------------------------
__int64 __fastcall sub_14078E490(_QWORD* a1)
{
	int v2; // ebx
	double v3; // xmm0_8
	double v4; // xmm0_8
	__int64 v5; // rcx

	v2 = sub_140056D60(a1, 2u);
	v3 = sub_140056C40(a1, 1u);
	v4 = sub_140900DB0(v3, v2);
	v5 = a1[2];
	*(double*)v5 = v4;
	*(_DWORD*)(v5 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

