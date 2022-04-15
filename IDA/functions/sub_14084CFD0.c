//----- (000000014084CFD0) ----------------------------------------------------
__int64 __fastcall sub_14084CFD0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int16 v5; // ax
	char v6; // si
	__int64 result; // rax
	_QWORD* v8; // rcx

	sub_140851DC0(a1);
	if ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 64))
	{
		if (!*(_BYTE*)(a2 + 36))
		{
			v4 = *(_QWORD*)(a1 + 56);
			if (v4)
			{
				if ((*(_BYTE*)(v4 + 80) & 1) != 0)
					sub_140851D70(a1);
				else
					sub_140851CC0(a1, *(_QWORD*)(a2 + 8));
			}
		}
		*(_BYTE*)(a2 + 36) = 1;
	}
	v5 = *(_WORD*)(a2 + 32);
	v6 = *(_BYTE*)(a2 + 36);
	if ((v5 & 1) != 0 && *(_QWORD*)(a1 + 72))
	{
		*(_BYTE*)(a2 + 36) = 0;
		*(_WORD*)(a2 + 32) = v5 & 0xFFFE;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 72) + 280i64))(*(_QWORD*)(a1 + 72), a2);
	}
	result = *(unsigned __int16*)(a2 + 32);
	if ((result & 2) != 0)
	{
		v8 = *(_QWORD**)(a1 + 104);
		if (v8)
		{
			if (*v8)
			{
				*(_BYTE*)(a2 + 36) = 0;
				*(_WORD*)(a2 + 32) = result & 0xFFFD;
				result = (*(__int64(__fastcall**)(_QWORD, __int64))(***(_QWORD***)(a1 + 104) + 280i64))(
					**(_QWORD**)(a1 + 104),
					a2);
			}
		}
	}
	if (*(_QWORD*)(a1 + 64))
	{
		*(_BYTE*)(a2 + 36) = v6;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 64) + 280i64))(*(_QWORD*)(a1 + 64), a2);
	}
	return result;
}

