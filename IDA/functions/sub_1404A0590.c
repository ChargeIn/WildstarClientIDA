//----- (00000001404A0590) ----------------------------------------------------
__int64 __fastcall sub_1404A0590(__int64 a1, int a2, int a3, unsigned int a4)
{
	unsigned int v8; // ebx
	int v9; // esi
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // edi

	if (!qword_140C65980)
		return 0i64;
	v8 = 0;
	v9 = 0;
	v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
		qword_140C65980,
		a4,
		0i64);
	if (v10)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 104i64))(v10))
		{
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
				qword_140C65980,
				a4,
				0i64);
			if (v11)
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 56i64))(v11);
		}
	}
	v12 = a2 - 1;
	if (v12)
	{
		if (v12 == 1)
			LOBYTE(v8) = v9 != a3;
	}
	else
	{
		return v9 == a3;
	}
	return v8;
}
// 140C65980: using guessed type __int64 qword_140C65980;

