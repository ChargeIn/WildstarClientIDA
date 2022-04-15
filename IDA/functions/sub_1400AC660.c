//----- (00000001400AC660) ----------------------------------------------------
__int64 __fastcall sub_1400AC660(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	unsigned int v3; // ebx
	unsigned int v7; // r10d
	__int64 result; // rax
	unsigned __int8 v9; // r8
	__int64 v10; // r9
	__int64 v11; // rdx
	unsigned __int64 v12; // rax

	*a2 += 96i64;
	v3 = 0;
	*a3 += 88i64 * *(unsigned int*)(a1 + 8);
	if (*(_DWORD*)(a1 + 8))
	{
		do
			sub_1400ABC90(*(_QWORD*)(a1 + 16) + 88i64 * v3++, a2, a3);
		while (v3 < *(_DWORD*)(a1 + 8));
	}
	*a2 += 32i64;
	v7 = 0;
	result = 16i64 * *(unsigned int*)(a1 + 24);
	*a3 += result;
	if (*(_DWORD*)(a1 + 24))
	{
		do
		{
			v9 = 0;
			v10 = *(_QWORD*)(a1 + 32) + 16i64 * v7;
			*a2 += 40i64;
			if (*(_BYTE*)(v10 + 4))
			{
				do
				{
					v11 = *(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64 * v9);
					if (v11)
					{
						v12 = -1i64;
						do
							++v12;
						while (*(_WORD*)(v11 + 2 * v12));
					}
					else
					{
						v12 = 0i64;
					}
					*a3 += 2 * v12;
					if (v12 <= 0x7F)
						result = 16 * v12 + 8;
					else
						result = 16 * (v12 + 1);
					*a2 += result;
					++v9;
				} while (v9 < *(_BYTE*)(v10 + 4));
			}
			++v7;
		} while (v7 < *(_DWORD*)(a1 + 24));
	}
	return result;
}

