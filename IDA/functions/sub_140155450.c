//----- (0000000140155450) ----------------------------------------------------
__int64 __fastcall sub_140155450(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int v4; // esi
	int** v5; // rdi
	int* v6; // rax
	void* v7; // rax
	__int64 result; // rax

	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 72) = v2;
	*(_QWORD*)(a1 + 80) = v2;
	*(_QWORD*)(a1 + 88) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 104) = v3;
	*(_QWORD*)(a1 + 112) = v3;
	*(_QWORD*)(a1 + 120) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = 9;
	v5 = (int**)(a1 + 144);
	do
	{
		*(v5 - 1) = 0i64;
		*v5 = 0i64;
		v5[1] = 0i64;
		v6 = sub_14018B280(16i64, 0);
		*(v5 - 1) = v6;
		*v5 = v6;
		v5[1] = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		v5 += 4;
		--v4;
	} while (v4 >= 0);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v7 = off_140C2CA08;
	*(_QWORD*)(a1 + 448) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 32) = v7;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	result = a1;
	*(_DWORD*)(a1 + 40) = 1;
	*(_DWORD*)(a1 + 464) = 1;
	return result;
}
// 140C2CA08: using guessed type void *off_140C2CA08;

