//----- (000000014084EEF0) ----------------------------------------------------
__int64 __fastcall sub_14084EEF0(__int64 a1, __int64 a2)
{
	unsigned int v4; // eax
	unsigned int v5; // ebx
	__int64 v6; // rax
	unsigned int v7; // eax
	__int16 v8; // ax
	char v9; // bp
	unsigned int v10; // eax
	__int16 v11; // cx
	_QWORD* v12; // rax
	unsigned int v13; // eax
	unsigned int v14; // eax

	v4 = sub_140853540(a1);
	v5 = v4;
	if ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 64))
	{
		if (!*(_BYTE*)(a2 + 36) && v4 == 1)
		{
			v6 = *(_QWORD*)(a1 + 56);
			if (!v6 || (*(_BYTE*)(v6 + 80) & 1) != 0)
				v7 = sub_140853430(a1, *(float*)a2, (_WORD*)(a2 + 34), (_QWORD*)(a2 + 16));
			else
				v7 = sub_140853180(a1, *(float*)a2, (_WORD*)(a2 + 34), *(_QWORD*)(a2 + 8), (__int64*)(a2 + 16));
			v5 = v7;
		}
		*(_BYTE*)(a2 + 36) = 1;
	}
	v8 = *(_WORD*)(a2 + 32);
	v9 = *(_BYTE*)(a2 + 36);
	if ((v8 & 1) != 0)
	{
		if (*(_QWORD*)(a1 + 72))
		{
			*(_BYTE*)(a2 + 36) = 0;
			*(_WORD*)(a2 + 32) = v8 & 0xFFFE;
			v10 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 72) + 272i64))(*(_QWORD*)(a1 + 72), a2);
			if (v10 != 1)
			{
				if (v10 == 80)
				{
					if (v5 == 1)
						v5 = 80;
				}
				else
				{
					v5 = v10;
				}
			}
		}
	}
	v11 = *(_WORD*)(a2 + 32);
	if ((v11 & 2) != 0)
	{
		v12 = *(_QWORD**)(a1 + 104);
		if (v12)
		{
			if (*v12)
			{
				*(_BYTE*)(a2 + 36) = 0;
				*(_WORD*)(a2 + 32) = v11 & 0xFFFD;
				v13 = (*(__int64(__fastcall**)(_QWORD, __int64))(***(_QWORD***)(a1 + 104) + 272i64))(
					**(_QWORD**)(a1 + 104),
					a2);
				if (v13 != 1)
				{
					if (v13 == 80)
					{
						if (v5 == 1)
							v5 = 80;
					}
					else
					{
						v5 = v13;
					}
				}
			}
		}
	}
	if (*(_QWORD*)(a1 + 64))
	{
		*(_BYTE*)(a2 + 36) = v9;
		v14 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 64) + 272i64))(*(_QWORD*)(a1 + 64), a2);
		if (v14 != 1)
		{
			if (v14 == 80)
			{
				if (v5 == 1)
					return 80;
			}
			else
			{
				return v14;
			}
		}
	}
	return v5;
}

