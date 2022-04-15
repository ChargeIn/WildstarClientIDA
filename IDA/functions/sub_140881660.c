//----- (0000000140881660) ----------------------------------------------------
__int64 __fastcall sub_140881660(__int64 a1, unsigned int a2, int* a3, unsigned int a4)
{
	__int64 v4; // rbx
	int* v8; // rax
	int* v9; // rdi
	__int64 result; // rax

	v4 = a4;
	v8 = (int*)sub_1408819F0(dword_140C10F28, a4 + 1);
	v9 = v8;
	if (!v8)
		return 52i64;
	sub_1407DB590(v8, a3, (unsigned int)v4);
	*((_BYTE*)v9 + v4) = 0;
	result = 1i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64 * a2 + 8) = v9;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

