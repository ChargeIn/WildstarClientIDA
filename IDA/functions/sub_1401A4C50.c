//----- (00000001401A4C50) ----------------------------------------------------
__int64 __fastcall sub_1401A4C50(__int64 a1, int* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	int* v6; // rax
	__int64 result; // rax

	if ((*(_DWORD*)a1 & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 8), 0);
	v4 = 0i64;
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v5 = 2 * (v4 + 1);
	if (!is_mul_ok(v4 + 1, 2ui64))
		v5 = -1i64;
	v6 = sub_14018B280(v5, 0);
	*(_QWORD*)(a1 + 8) = v6;
	sub_1407DB590(v6, a2, 2 * v4 + 2);
	result = *(_QWORD*)(a1 + 8);
	*(_DWORD*)a1 = 512;
	*(_QWORD*)(a1 + 16) = result + 2 * v4;
	return result;
}

