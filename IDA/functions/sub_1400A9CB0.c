//----- (00000001400A9CB0) ----------------------------------------------------
__int64 __fastcall sub_1400A9CB0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	unsigned int v3; // r10d
	__int64 result; // rax
	__int64 v6; // r9
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // rcx
	__int64 v12; // rcx

	*a2 += 33i64;
	v3 = 0;
	result = 104i64 * *(unsigned int*)(a1 + 4);
	*a3 += result;
	if (*(_DWORD*)(a1 + 4))
	{
		do
		{
			v6 = *(_QWORD*)(a1 + 8) + 104i64 * v3;
			*a2 += 110i64;
			v7 = *(_QWORD*)(v6 + 16);
			if (v7)
			{
				v8 = -1i64;
				do
					++v8;
				while (*(_WORD*)(v7 + 2 * v8));
			}
			else
			{
				v8 = 0i64;
			}
			*a3 += 2 * v8;
			if (v8 <= 0x7F)
				v9 = 16 * v8 + 8;
			else
				v9 = 16 * (v8 + 1);
			*a2 += v9;
			v10 = *(_QWORD*)(v6 + 24);
			if (v10)
			{
				v11 = -1i64;
				do
					++v11;
				while (*(_WORD*)(v10 + 2 * v11));
			}
			else
			{
				v11 = 0i64;
			}
			*a3 += 2 * v11;
			if (v11 <= 0x7F)
				v12 = 16 * v11 + 8;
			else
				v12 = 16 * (v11 + 1);
			*a2 += v12 + 366;
			result = 0i64;
			*a3 += 96i64 * *(unsigned int*)(v6 + 88);
			if (*(_DWORD*)(v6 + 88))
			{
				do
				{
					*a2 += 420i64;
					*a3 += 20i64;
					*a2 += 256i64;
					*a3 += 32i64;
					result = (unsigned int)(result + 1);
				} while ((unsigned int)result < *(_DWORD*)(v6 + 88));
			}
			++v3;
		} while (v3 < *(_DWORD*)(a1 + 4));
	}
	return result;
}

