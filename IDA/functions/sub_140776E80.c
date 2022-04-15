//----- (0000000140776E80) ----------------------------------------------------
__int64 __fastcall sub_140776E80(__int64 a1, int a2, __int64 a3, int* a4, int* a5, _QWORD* a6)
{
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	_WORD* v12; // rax

	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v9;
	*(_QWORD*)(a1 + 24) = v9;
	*(_QWORD*)(a1 + 32) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 48) = v10;
	*(_QWORD*)(a1 + 56) = v10;
	*(_QWORD*)(a1 + 64) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 80) = v11;
	*(_QWORD*)(a1 + 88) = v11;
	*(_QWORD*)(a1 + 96) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)a1 = a2;
	v12 = *(_WORD**)(a1 + 80);
	if (v12 != *(_WORD**)(a1 + 88))
	{
		*v12 = 0;
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(a1 + 80);
	}
	sub_1407771F0(a1, 1, a4, a5, a6);
	return a1;
}

