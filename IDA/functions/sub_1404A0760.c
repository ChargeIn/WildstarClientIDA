//----- (00000001404A0760) ----------------------------------------------------
__int64 __fastcall sub_1404A0760(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
	unsigned int v7; // ebx
	unsigned int v8; // esi
	__int64 v9; // rax
	__int64 v10; // r14
	int v11; // edi

	if (!qword_140C65980)
		return 0i64;
	v7 = 0;
	v8 = 0;
	v9 = sub_140498A40(qword_140C65980, a4, 0);
	v10 = v9;
	if (v9 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 104i64))(v9))
	{
		if (a5)
			LOBYTE(v8) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 368i64))(v10) == a5;
		else
			v8 = 1;
	}
	v11 = a3 - 1;
	if (v11)
	{
		if (v11 == 1)
		{
			LOBYTE(v7) = v8 == 0;
			return v7;
		}
	}
	else
	{
		return v8;
	}
	return v7;
}
// 140C65980: using guessed type __int64 qword_140C65980;

