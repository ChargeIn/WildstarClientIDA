//----- (00000001408522B0) ----------------------------------------------------
void __fastcall sub_1408522B0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rax

	if (a2 || *(_QWORD*)(a1 + 104))
	{
		v4 = *(_QWORD**)(a1 + 104);
		if (v4)
			goto LABEL_7;
		v5 = (_QWORD*)sub_1408819F0(dword_140C10F20, 8i64);
		*(_QWORD*)(a1 + 104) = v5;
		if (v5)
			*v5 = 0i64;
		v4 = *(_QWORD**)(a1 + 104);
		if (v4)
			LABEL_7:
		*v4 = a2;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

