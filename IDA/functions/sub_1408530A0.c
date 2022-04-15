//----- (00000001408530A0) ----------------------------------------------------
char __fastcall sub_1408530A0(_QWORD* a1, unsigned __int16 a2)
{
	char v4; // bl
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // rcx

	v4 = sub_1408521B0((__int64)a1);
	if (v4)
		++* (_WORD*)(a1[7] + 74i64);
	if ((a2 & 1) != 0)
	{
		v5 = a1[9];
		if (v5)
		{
			a2 &= ~1u;
			v4 &= (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 304i64))(v5, 3i64);
		}
	}
	if ((a2 & 2) != 0)
	{
		v6 = (_QWORD*)a1[13];
		if (v6)
		{
			if (*v6)
			{
				a2 &= ~2u;
				v4 &= (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v6 + 304i64))(*v6, 3i64);
			}
		}
	}
	v7 = a1[8];
	if (v7)
		return v4 & (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 304i64))(v7, a2);
	else
		return v4;
}

