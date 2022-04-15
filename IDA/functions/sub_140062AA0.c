//----- (0000000140062AA0) ----------------------------------------------------
__int64 __fastcall sub_140062AA0(__int64 a1, char a2)
{
	__int64* v2; // rbx
	unsigned __int64 v5; // rcx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 result; // rax

	v2 = *(__int64**)(a1 + 72);
	v5 = v2[2];
	if (v2[1] + 1 > v5)
	{
		if (v5 >= 0x7FFFFFFFFFFFFFFEi64)
			sub_140062CF0(a1, aLexicalElement, 0i64);
		v6 = v2[2];
		v7 = *(_QWORD*)(a1 + 56);
		v8 = 2 * v6;
		if ((unsigned __int64)(2 * v6 + 1) > 0xFFFFFFFFFFFFFFFDui64)
			sub_14005ABE0(v7, aMemoryAllocati);
		v9 = sub_140064780(v7, *v2, v6, 2 * v6);
		v2[2] = v8;
		*v2 = v9;
	}
	result = *v2;
	*(_BYTE*)(v2[1] + *v2) = a2;
	++v2[1];
	return result;
}
// 140062CF0: using guessed type void __fastcall __noreturn sub_140062CF0(_QWORD, _QWORD, _QWORD);

