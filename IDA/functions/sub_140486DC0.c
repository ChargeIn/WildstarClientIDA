//----- (0000000140486DC0) ----------------------------------------------------
__int64 __fastcall sub_140486DC0(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4, unsigned int a5, int a6)
{
	int* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rdx
	__int64 v15; // rax

	v10 = sub_14018B280(120i64, 0);
	v11 = (__int64)v10;
	if (v10)
	{
		*((_QWORD*)v10 + 1) = 0i64;
		*((_QWORD*)v10 + 2) = 0i64;
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v10 + 4) = 0i64;
		*((_QWORD*)v10 + 7) = 10i64;
		v10[16] = 0;
		*((_QWORD*)v10 + 5) = 0i64;
		*((_QWORD*)v10 + 6) = 0i64;
		v12 = qword_140C59420;
		*(_QWORD*)(v11 + 72) = qword_140C59420;
		qword_140C59420 = v12 + 1;
		*(_QWORD*)v11 = off_140B671C0;
		*(_QWORD*)(v11 + 88) = 0i64;
		*(_QWORD*)(v11 + 80) = 0i64;
		*(_DWORD*)(v11 + 96) = 0;
		*(_QWORD*)(v11 + 104) = 0i64;
		*(_DWORD*)(v11 + 112) = 0;
	}
	else
	{
		v11 = 0i64;
	}
	*(_DWORD*)(v11 + 56) = *a3;
	*(_DWORD*)(v11 + 60) = a3[1];
	*(_DWORD*)(v11 + 64) = a3[2];
	if (a5)
	{
		*(_QWORD*)(v11 + 104) = sub_14024B980(a5);
		*(_DWORD*)(v11 + 112) = a6;
	}
	sub_140485D20(v11, a2, (__int128*)&ymmword_140C78390);
	v13 = *a4;
	if (!*(_DWORD*)(v11 + 96))
	{
		*(_QWORD*)(v11 + 88) = a4[1];
		*(_QWORD*)(v11 + 80) = v13;
	}
	v14 = (__int64*)(a1 + 8);
	if (!*(_QWORD*)(v11 + 24))
	{
		*(_QWORD*)(v11 + 24) = v14;
		*(_QWORD*)(v11 + 32) = *v14;
		*v14 = v11;
		v15 = *(_QWORD*)(v11 + 32);
		if (v15)
			*(_QWORD*)(v15 + 24) = v11 + 32;
	}
	if (*a4 || a4[1])
		((void(__fastcall*)(_QWORD, __int64, _QWORD))a4[1])(*a4, v11, 0i64);
	return *(_QWORD*)(v11 + 72);
}
// 140B671C0: using guessed type __int64 (__fastcall *off_140B671C0[25])();
// 140C59420: using guessed type __int64 qword_140C59420;
// 140C78390: using guessed type __m256 ymmword_140C78390;

