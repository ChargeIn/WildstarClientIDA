//----- (0000000140342B10) ----------------------------------------------------
__int64 __fastcall sub_140342B10(__int64 a1)
{
	__int64 v2; // rax
	bool v3; // zf
	__int64 v4; // rax

	++dword_140C65860;
	*(_QWORD*)a1 = off_140B64E30;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 124) = 0i64;
	*(_DWORD*)(a1 + 120) = 0;
	*(_QWORD*)(a1 + 144) = 0i64;
	v2 = sub_140341430();
	v3 = *(_QWORD*)(a1 + 48) == 0i64;
	*(_QWORD*)(a1 + 40) = v2;
	if (v3)
	{
		*(_QWORD*)(a1 + 48) = &qword_140C7A0C0;
		*(_QWORD*)(a1 + 56) = qword_140C7A0C0;
		qword_140C7A0C0 = a1;
		v4 = *(_QWORD*)(a1 + 56);
		if (v4)
			*(_QWORD*)(v4 + 48) = a1 + 56;
	}
	return a1;
}
// 140B64E30: using guessed type __int64 (__fastcall *off_140B64E30[2])();
// 140C65860: using guessed type int dword_140C65860;
// 140C7A0C0: using guessed type __int64 qword_140C7A0C0;

