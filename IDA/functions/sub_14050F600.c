//----- (000000014050F600) ----------------------------------------------------
__int64 __fastcall sub_14050F600(__int64 a1)
{
	__int64 v1; // rax
	double v2; // xmm0_8

	v1 = *(_QWORD*)(a1 + 16);
	v2 = (double)(int)qword_140C7DC60;
	*(_DWORD*)(v1 + 8) = 3;
	*(double*)v1 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

