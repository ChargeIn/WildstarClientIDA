//----- (0000000140828DF0) ----------------------------------------------------
__int64 __fastcall sub_140828DF0(int* a1)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int* v5; // rax
	unsigned __int16 v6; // ax
	unsigned int v7; // ebx
	int v8; // [rsp+20h] [rbp-48h] BYREF
	int* v9; // [rsp+28h] [rbp-40h]
	char v10; // [rsp+30h] [rbp-38h]

	if (!a1)
		return 31i64;
	HIWORD(v8) = 38;
	v3 = -1i64;
	do
		++v3;
	while (*((_WORD*)a1 + v3));
	v4 = 2 * (v3 + 1);
	v5 = (int*)sub_1408819F0(dword_140C10F20, v4);
	v9 = v5;
	if (!v5)
		return 52i64;
	sub_1407DB590(v5, a1, v4);
	v10 = 0;
	v6 = sub_140055BD0();
	v7 = sub_14082BB30(qword_140C61B68, &v8, v6);
	if (v7 != 1)
		sub_140881720(dword_140C10F20, (__int64)v9);
	return v7;
}
// 140C10F20: using guessed type int dword_140C10F20;

