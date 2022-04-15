//----- (0000000140853B70) ----------------------------------------------------
__int64 __fastcall sub_140853B70(_QWORD* a1, unsigned int** a2)
{
	unsigned int v4; // edi
	_QWORD* v5; // rax
	unsigned int v6; // esi
	__int64 v7; // rdi

	if (!*(_BYTE*)(qword_140C61B58 + 2296))
		return 1i64;
	v4 = *(*a2)++;
	if (!v4)
		return 1i64;
	if (!a1[13])
	{
		v5 = (_QWORD*)sub_1408819F0(dword_140C10F20, 8i64);
		a1[13] = v5;
		if (v5)
			*v5 = 0i64;
		if (!a1[13])
			return 52i64;
	}
	v6 = 2;
	v7 = sub_140830F00(qword_140C61BA8, v4, 1);
	if (v7
		&& ((*(void(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1),
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v7 + 72i64))(v7, a1),
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7),
			v6 == 1))
	{
		return 1i64;
	}
	else
	{
		return v6;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B58: using guessed type __int64 qword_140C61B58;

