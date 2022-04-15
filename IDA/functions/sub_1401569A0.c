//----- (00000001401569A0) ----------------------------------------------------
__int64 __fastcall sub_1401569A0(__int64 a1, int* a2, char a3)
{
	__int64 v3; // rbx
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rdx

	*(_BYTE*)(a1 + 8) = a3;
	v3 = 0i64;
	*(_QWORD*)a1 = &off_140B5C880;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v6;
	*(_QWORD*)(a1 + 32) = v6;
	*(_QWORD*)(a1 + 40) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v7 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 56) = v7;
	*(_QWORD*)v7 = v7;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = *(_QWORD*)(a1 + 56);
	v8 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 72) = v8;
	*(_QWORD*)v8 = v8;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = *(_QWORD*)(a1 + 72);
	v9 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 88) = v9;
	*(_QWORD*)v9 = v9;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = *(_QWORD*)(a1 + 88);
	v10 = sub_14018B280(24i64, 0);
	v11 = (int*)&unk_1409DBB04;
	*(_QWORD*)(a1 + 104) = v10;
	*(_QWORD*)v10 = v10;
	if (a2)
		v11 = a2;
	*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64) = *(_QWORD*)(a1 + 104);
	if (*(_WORD*)v11)
	{
		do
			++v3;
		while (*((_WORD*)v11 + v3));
	}
	sub_14001C480(a1 + 16, v11, (int*)((char*)v11 + 2 * v3));
	return a1;
}
// 140B5C880: using guessed type __int64 (__fastcall *off_140B5C880)();

