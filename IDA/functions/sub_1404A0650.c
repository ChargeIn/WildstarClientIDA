//----- (00000001404A0650) ----------------------------------------------------
__int64 __fastcall sub_1404A0650(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
	__int64 v7; // rsi
	int v9; // eax
	int v10; // eax
	unsigned int v11; // ebx
	unsigned int v12; // ebp
	__int64 v13; // rax
	__int64 v14; // rax
	int v15; // edi

	v7 = a2;
	if (!qword_140C65980)
		return 0i64;
	v9 = *(_DWORD*)(a2 + 128);
	if ((v9 == 20 || v9 == 23) && ((v7 = a5) == 0 || (v10 = *(_DWORD*)(a5 + 128), v10 == 20) || v10 == 23))
	{
		return a3 == 2;
	}
	else
	{
		v11 = 0;
		v12 = 0;
		v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
			qword_140C65980,
			a4,
			0i64);
		if (v13)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 104i64))(v13))
			{
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
					qword_140C65980,
					a4,
					0i64);
				if (v14)
				{
					if (*(int*)(v7 + 13816) >= 0)
						v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 144i64))(v14);
				}
			}
		}
		v15 = a3 - 1;
		if (v15)
		{
			if (v15 == 1)
				LOBYTE(v11) = v12 == 0;
		}
		else
		{
			return v12;
		}
	}
	return v11;
}
// 140C65980: using guessed type __int64 qword_140C65980;

