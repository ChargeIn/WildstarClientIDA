//----- (00000001408691C0) ----------------------------------------------------
__int64 __fastcall sub_1408691C0(__int64 a1, __int64 a2)
{
	unsigned __int8 v2; // bl
	int* v4; // rdi
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v7; // r14

	v2 = *(_BYTE*)(a2 + 4);
	v4 = (int*)(a2 + 5);
	if (v2)
	{
		v5 = (v2 + 4) & 0xFFFFFFFC;
		v6 = sub_1408819F0(dword_140C10F20, v5 + 4 * v2);
		v7 = v6;
		if (!v6)
			return 52i64;
		*(_BYTE*)v6 = v2;
		sub_1407DB590((int*)(v6 + 1), v4, v2);
		sub_1407DB590((int*)(v7 + v5), (int*)((char*)v4 + v2), 4i64 * v2);
		*(_QWORD*)(a1 + 32) = v7;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

