//----- (00000001404A09D0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A09D0(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax

	if (!qword_140C65980)
		return 0i64;
	v8 = 0;
	v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
		qword_140C65980,
		a4,
		0i64);
	v10 = v9;
	if (v9 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 104i64))(v9))
	{
		v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			a4,
			0i64);
		v10 = v11;
		if (v11)
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 152i64))(v11);
	}
	return sub_1404A2090(v10, a2, v8, a3);
}
// 1404A0A6B: variable 'v10' is possibly undefined
// 140C65980: using guessed type __int64 qword_140C65980;

