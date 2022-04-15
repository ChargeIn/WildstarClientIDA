//----- (00000001402C9600) ----------------------------------------------------
__int64 __fastcall sub_1402C9600(__int64 a1)
{
	__int64 v1; // r8
	_QWORD* v2; // r8
	__int64 v3; // rax

	v1 = qword_140C657F0;
	*(_QWORD*)a1 = off_140B627F0;
	v2 = (_QWORD*)(v1 + 48);
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)(a1 + 72) = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	if (!*(_QWORD*)(a1 + 112))
	{
		*(_QWORD*)(a1 + 112) = v2;
		*(_QWORD*)(a1 + 120) = *v2;
		*v2 = a1;
		v3 = *(_QWORD*)(a1 + 120);
		if (v3)
			*(_QWORD*)(v3 + 112) = a1 + 120;
	}
	return a1;
}
// 140B627F0: using guessed type __int64 (__fastcall *off_140B627F0[13])();
// 140C657F0: using guessed type __int64 qword_140C657F0;

