//----- (000000014078DDC0) ----------------------------------------------------
__int64 __fastcall sub_14078DDC0(_QWORD* a1)
{
	double v2; // xmm0_8
	__int64 v3; // rdx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = a1[2];
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = fabs(v2);
	a1[2] += 16i64;
	return result;
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;

