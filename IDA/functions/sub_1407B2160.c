//----- (00000001407B2160) ----------------------------------------------------
__int64 __fastcall sub_1407B2160(int** a1)
{
	int* v2; // rbx
	int* v3; // rax

	v2 = sub_14018B280(48i64, 1u);
	if (!v2)
		return 2147942414i64;
	*(_QWORD*)v2 = off_140B79270;
	v2[2] = 1;
	v3 = sub_14018B280(72i64, 0);
	*((_QWORD*)v2 + 3) = v3;
	*((_QWORD*)v2 + 4) = 0i64;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*((_QWORD*)v2 + 3) + 8i64) = 0i64;
	*(_QWORD*)(*((_QWORD*)v2 + 3) + 16i64) = *((_QWORD*)v2 + 3);
	*(_QWORD*)(*((_QWORD*)v2 + 3) + 24i64) = *((_QWORD*)v2 + 3);
	*a1 = v2;
	return 0i64;
}
// 140B79270: using guessed type __int64 (__fastcall *off_140B79270[10])();

