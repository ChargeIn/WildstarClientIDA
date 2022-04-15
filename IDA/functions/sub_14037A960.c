//----- (000000014037A960) ----------------------------------------------------
__int64 __fastcall sub_14037A960(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // rax

	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = 3;
	*(_QWORD*)a1 = off_140B65C90;
	*(_QWORD*)(a1 + 24) = qword_140C784C0;
	*(_QWORD*)(a1 + 32) = qword_140C784C8;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v2 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 5472i64);
	if (!*(_QWORD*)(a1 + 88))
	{
		*(_QWORD*)(a1 + 88) = v2;
		*(_QWORD*)(a1 + 96) = *v2;
		*v2 = a1;
		v3 = *(_QWORD*)(a1 + 96);
		if (v3)
			*(_QWORD*)(v3 + 88) = a1 + 96;
	}
	return a1;
}
// 140B65C90: using guessed type __int64 (__fastcall *off_140B65C90[5])();
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

