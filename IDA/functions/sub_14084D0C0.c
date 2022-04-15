//----- (000000014084D0C0) ----------------------------------------------------
__int64 __fastcall sub_14084D0C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	char v5; // r8
	_WORD* v6; // rdx
	__int16 v7; // ax
	char v8; // si
	__int64 result; // rax
	_QWORD* v10; // rcx

	if ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 64))
	{
		if (!*(_BYTE*)(a2 + 36))
		{
			v4 = *(_QWORD*)(a1 + 56);
			if (v4)
			{
				v5 = *(_BYTE*)(a2 + 37);
				v6 = (_WORD*)(a2 + 34);
				if ((*(_BYTE*)(v4 + 80) & 1) != 0)
					sub_140851F80(a1, v6, v5);
				else
					sub_140851E10(a1, v6, v5, *(_QWORD*)(a2 + 8));
			}
		}
		*(_BYTE*)(a2 + 36) = 1;
	}
	v7 = *(_WORD*)(a2 + 32);
	v8 = *(_BYTE*)(a2 + 36);
	if ((v7 & 1) != 0 && *(_QWORD*)(a1 + 72))
	{
		*(_BYTE*)(a2 + 36) = 0;
		*(_WORD*)(a2 + 32) = v7 & 0xFFFE;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 72) + 296i64))(*(_QWORD*)(a1 + 72), a2);
	}
	result = *(unsigned __int16*)(a2 + 32);
	if ((result & 2) != 0)
	{
		v10 = *(_QWORD**)(a1 + 104);
		if (v10)
		{
			if (*v10)
			{
				*(_BYTE*)(a2 + 36) = 0;
				*(_WORD*)(a2 + 32) = result & 0xFFFD;
				result = (*(__int64(__fastcall**)(_QWORD, __int64))(***(_QWORD***)(a1 + 104) + 296i64))(
					**(_QWORD**)(a1 + 104),
					a2);
			}
		}
	}
	if (*(_QWORD*)(a1 + 64))
	{
		*(_BYTE*)(a2 + 36) = v8;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 64) + 296i64))(*(_QWORD*)(a1 + 64), a2);
	}
	return result;
}

