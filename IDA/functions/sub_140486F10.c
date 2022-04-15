//----- (0000000140486F10) ----------------------------------------------------
__int64 __fastcall sub_140486F10(__int64 a1, __int64 a2, __int128* a3, _DWORD* a4, __int64* a5)
{
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64* v13; // rdx
	__int64 v14; // rcx

	v9 = sub_14018B280(120i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		*((_QWORD*)v9 + 1) = 0i64;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 7) = 10i64;
		v9[16] = 0;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		v11 = qword_140C59420;
		*(_QWORD*)(v10 + 72) = qword_140C59420;
		qword_140C59420 = v11 + 1;
		*(_QWORD*)v10 = off_140B671C0;
		*(_QWORD*)(v10 + 88) = 0i64;
		*(_QWORD*)(v10 + 80) = 0i64;
		*(_DWORD*)(v10 + 96) = 0;
		*(_QWORD*)(v10 + 104) = 0i64;
		*(_DWORD*)(v10 + 112) = 0;
	}
	else
	{
		v10 = 0i64;
	}
	*(_DWORD*)(v10 + 56) = *a4;
	*(_DWORD*)(v10 + 60) = a4[1];
	*(_DWORD*)(v10 + 64) = a4[2];
	sub_140485D20(v10, a2, a3);
	v12 = *a5;
	if (!*(_DWORD*)(v10 + 96))
	{
		*(_QWORD*)(v10 + 88) = a5[1];
		*(_QWORD*)(v10 + 80) = v12;
	}
	v13 = (__int64*)(a1 + 8);
	if (!*(_QWORD*)(v10 + 24))
	{
		*(_QWORD*)(v10 + 24) = v13;
		*(_QWORD*)(v10 + 32) = *v13;
		*v13 = v10;
		v14 = *(_QWORD*)(v10 + 32);
		if (v14)
			*(_QWORD*)(v14 + 24) = v10 + 32;
	}
	return *(_QWORD*)(v10 + 72);
}
// 140B671C0: using guessed type __int64 (__fastcall *off_140B671C0[25])();
// 140C59420: using guessed type __int64 qword_140C59420;

