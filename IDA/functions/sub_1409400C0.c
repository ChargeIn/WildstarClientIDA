//----- (00000001409400C0) ----------------------------------------------------
__int64 sub_1409400C0()
{
	int v0; // xmm6_4
	int v1; // xmm7_4
	__m128 v2; // xmm8

	v0 = dword_140C44C6C;
	v1 = dword_140C44E0C;
	v2 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C44CFC, (__m128)(unsigned int)dword_140C44CFC, 0);
	*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)&off_140C465C8) = &off_140C465C0;
	dword_140C465F4 = v0;
	dword_140C465F8 = v1;
	dword_140C465FC = v2.m128_i32[0];
	xmmword_140C465E0 = (__int128)v2;
	off_140C465C0 = (__int64(__fastcall*)())off_140B55190;
	qword_140C46600 = 0i64;
	dword_140C465F0 = v2.m128_i32[0];
	qword_140C46610 = (__int64)sub_14043DDA0;
	dword_140C46608 = 1;
	return sub_1407DD89C(sub_140950DE0);
}
// 140B55190: using guessed type __int64 (__fastcall *off_140B55190[35])();
// 140C44C6C: using guessed type int dword_140C44C6C;
// 140C44CFC: using guessed type int dword_140C44CFC;
// 140C44E0C: using guessed type int dword_140C44E0C;
// 140C465C0: using guessed type __int64 (__fastcall *off_140C465C0)();
// 140C465C8: using guessed type wchar_t *off_140C465C8;
// 140C465E0: using guessed type __int128 xmmword_140C465E0;
// 140C465F0: using guessed type int dword_140C465F0;
// 140C465F4: using guessed type int dword_140C465F4;
// 140C465F8: using guessed type int dword_140C465F8;
// 140C465FC: using guessed type int dword_140C465FC;
// 140C46600: using guessed type __int64 qword_140C46600;
// 140C46608: using guessed type int dword_140C46608;
// 140C46610: using guessed type __int64 qword_140C46610;
// 140C63750: using guessed type __int64 qword_140C63750;

