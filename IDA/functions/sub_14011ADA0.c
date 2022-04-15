//----- (000000014011ADA0) ----------------------------------------------------
__int64 __fastcall sub_14011ADA0(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // eax
	double v3; // xmm0_8
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = dword_140C636A8;
	*(_DWORD*)(v1 + 8) = 3;
	v3 = (double)v2;
	result = 1i64;
	*(double*)v1 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

