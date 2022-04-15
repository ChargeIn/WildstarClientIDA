//----- (00000001403E0020) ----------------------------------------------------
__int64 __fastcall sub_1403E0020(__int64 a1, int* a2, int a3, float a4)
{
	int* v7; // r9
	__int64 result; // rax

	if (a2)
	{
		v7 = (int*)&word_140B7B704;
		if (*(_QWORD*)(a1 + 16))
			v7 = *(int**)(a1 + 16);
		sub_140003890((__int64*)qword_140C658A0, 0x14u, 0i64, a2, *(_DWORD*)(a1 + 8), v7);
		return sub_140475EF0(a1, a2, a3, a4);
	}
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C658A0: using guessed type __int64 qword_140C658A0;

