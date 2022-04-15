//----- (00000001400B7090) ----------------------------------------------------
__int64 __fastcall sub_1400B7090(__int64 a1, int a2)
{
	__int64 v2; // rbx
	int* v5; // rax
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	_WORD* v10; // rax

	v2 = 0i64;
	*(_QWORD*)a1 = off_140B561F0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v5;
	*(_QWORD*)(a1 + 24) = v5;
	*(_QWORD*)(a1 + 32) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 96) = v6;
	*(_QWORD*)(a1 + 104) = v6;
	*(_QWORD*)(a1 + 112) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v7 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 128) = v7;
	*(_QWORD*)(a1 + 136) = v7;
	*(_QWORD*)(a1 + 144) = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 160) = v8;
	*(_QWORD*)(a1 + 168) = v8;
	*(_QWORD*)(a1 + 176) = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	*(_DWORD*)(a1 + 80) = 1;
	v9 = (int*)sub_14034BDD0((__int64)(v8 + 4), a2);
	if (v9)
	{
		if (*(_WORD*)v9)
		{
			do
				++v2;
			while (*((_WORD*)v9 + v2));
		}
		sub_14001C480(a1 + 8, v9, (int*)((char*)v9 + 2 * v2));
	}
	else
	{
		v10 = *(_WORD**)(a1 + 16);
		if (v10 != *(_WORD**)(a1 + 24))
		{
			*v10 = 0;
			*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16);
		}
	}
	return a1;
}
// 140B561F0: using guessed type __int64 (__fastcall *off_140B561F0[2])();

