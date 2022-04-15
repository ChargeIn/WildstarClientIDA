//----- (000000014085AC00) ----------------------------------------------------
__int64 __fastcall sub_14085AC00(__int64 a1, __int64 a2)
{
	unsigned int v4; // eax
	unsigned int v5; // ebx
	__int64 v6; // rcx
	unsigned int v7; // eax
	_QWORD* v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax

	v4 = sub_140853540(a1);
	v5 = v4;
	if ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 72))
	{
		if (!*(_BYTE*)(a2 + 36) && v4 == 1)
			v5 = sub_140853430(a1, *(float*)a2, (_WORD*)(a2 + 34), (_QWORD*)(a2 + 24));
		*(_BYTE*)(a2 + 36) = 1;
	}
	v6 = *(_QWORD*)(a1 + 72);
	if (v6)
	{
		v7 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 272i64))(v6, a2);
		if (v7 != 1)
		{
			if (v7 == 80)
			{
				if (v5 == 1)
					v5 = 80;
			}
			else
			{
				v5 = v7;
			}
		}
	}
	v8 = *(_QWORD**)(a1 + 104);
	if (v8)
	{
		if (*v8)
		{
			v9 = (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v8 + 272i64))(*v8, a2);
			if (v9 != 1)
			{
				if (v9 == 80)
				{
					if (v5 == 1)
						v5 = 80;
				}
				else
				{
					v5 = v9;
				}
			}
		}
	}
	v10 = *(_QWORD*)(a1 + 56);
	if (v10 && *(_WORD*)(v10 + 72) == 1)
	{
		*(_BYTE*)(a1 + 328) &= 0xF3u;
		*(_BYTE*)(a1 + 328) |= 2u;
		sub_14085C7E0(a1);
	}
	return v5;
}

