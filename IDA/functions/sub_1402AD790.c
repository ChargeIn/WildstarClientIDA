//----- (00000001402AD790) ----------------------------------------------------
__int64 __fastcall sub_1402AD790(__int64* a1, __int64 a2)
{
	_QWORD* v4; // rsi
	_DWORD* v5; // rbx
	__int64 v6; // rbp
	int v7; // r8d
	int v8; // r8d
	int v9; // r8d
	__int64 result; // rax
	__int64 v11; // rdx

	v4 = a1 + 13;
	v5 = a1 + 2;
	v6 = 4i64;
	do
	{
		v7 = *(v5 - 2);
		if (v7)
		{
			v8 = v7 - 1;
			if (v8)
			{
				v9 = v8 - 1;
				if (v9)
				{
					if (v9 == 1 && *(_QWORD*)v5)
					{
						result = *(unsigned int*)(*a1 + 240);
						*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 168i64)
							+ 4i64 * (unsigned int)(v5[3] + *(_DWORD*)(*(_QWORD*)v5 + 44i64) * v5[2])) = result;
					}
				}
				else if (*(_QWORD*)v5)
				{
					result = *(unsigned int*)(*a1 + 240);
					*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 504i64)
						+ 4i64 * (unsigned int)(v5[3] + *(_DWORD*)(*(_QWORD*)v5 + 44i64) * v5[2])) = result;
				}
			}
			else if (*(_QWORD*)v5)
			{
				result = *(unsigned int*)(*a1 + 240);
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 224i64) + 4i64 * (unsigned int)v5[3]) = result;
			}
		}
		else
		{
			v11 = *(_QWORD*)v5;
			if (!*(_QWORD*)v5)
				v11 = *(_QWORD*)(*a1 + 8584);
			result = *a1;
			*(_DWORD*)(v11 + 120) = *(_DWORD*)(*a1 + 240);
		}
		if (*v4)
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(*a1 + 6352) + 400i64))(
				*(_QWORD*)(*a1 + 6352),
				*v4,
				a2);
		++v4;
		v5 += 6;
		--v6;
	} while (v6);
	return result;
}

