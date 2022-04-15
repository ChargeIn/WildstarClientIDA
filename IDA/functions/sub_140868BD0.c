//----- (0000000140868BD0) ----------------------------------------------------
__int64 __fastcall sub_140868BD0(__int64 a1, int a2, int a3)
{
	char* v3; // rbx
	char* v7; // r14
	__int64 result; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx

	v3 = *(char**)(a1 + 136);
	if (v3 != *(char**)(a1 + 144))
	{
		v7 = v3 + 28;
		result = 0x1FFFFFFFFFFFFFFCi64;
		do
		{
			if (*((_DWORD*)v7 - 6) == a2 && *((_DWORD*)v7 - 5) == a3)
			{
				v9 = *(_QWORD*)(v7 - 12);
				if (v9)
				{
					sub_140881720(dword_140C10F20, v9);
					*(_QWORD*)(v7 - 12) = 0i64;
					result = 0x1FFFFFFFFFFFFFFCi64;
				}
				*(_QWORD*)(v7 - 4) = 0i64;
				v10 = *(_QWORD*)(a1 + 144) - 32i64;
				if ((unsigned __int64)v3 < v10)
					qmemcpy(
						v3,
						v7 + 4,
						8 * (((((v10 - (unsigned __int64)v3 - 1) >> 3) & 0xFFFFFFFFFFFFFFFCui64) + 4) & 0x1FFFFFFFFFFFFFFCi64));
				*(_QWORD*)(a1 + 144) -= 32i64;
			}
			else
			{
				v3 += 32;
				v7 += 32;
			}
		} while (v3 != *(char**)(a1 + 144));
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

