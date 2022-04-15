//----- (000000014005E590) ----------------------------------------------------
__int64 __fastcall sub_14005E590(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 result; // rax
	char v5; // r8
	__int64 v6; // rcx
	char v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rax

	v2 = *(_QWORD*)(a1 + 32);
	result = *(_QWORD*)(v2 + 40);
	*(_QWORD*)a2 = result;
	*(_QWORD*)(v2 + 40) = a2;
	v5 = *(_BYTE*)(a2 + 9);
	if ((v5 & 4) == 0 && (v5 & 3) == 0)
	{
		if (*(_BYTE*)(v2 + 33) == 1)
		{
			v6 = *(_QWORD*)(a2 + 16);
			v7 = v5 | 4;
			*(_BYTE*)(a2 + 9) = v7;
			if (*(int*)(v6 + 8) >= 4)
			{
				v8 = *(_QWORD*)v6;
				if ((*(_BYTE*)(v8 + 9) & 3) != 0 && (v7 & 4) != 0)
				{
					v9 = *(_QWORD*)(a1 + 32);
					if (*(_BYTE*)(v9 + 33) == 1)
					{
						return sub_14005C960(*(_QWORD*)(a1 + 32), v8);
					}
					else
					{
						result = *(unsigned __int8*)(v9 + 32);
						LOBYTE(result) = v7 & 0xF8 | result & 3;
						*(_BYTE*)(a2 + 9) = result;
					}
				}
			}
		}
		else
		{
			result = *(unsigned __int8*)(v2 + 32);
			LOBYTE(result) = v5 & 0xF8 | result & 3;
			*(_BYTE*)(a2 + 9) = result;
		}
	}
	return result;
}

