//----- (0000000140836730) ----------------------------------------------------
__int64 __fastcall sub_140836730(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rcx

	result = *(_QWORD*)(a1 + 8i64 * (a2 % 0xC1));
	if (result)
	{
		while (*(_DWORD*)result != a2)
		{
			result = *(_QWORD*)(result + 8);
			if (!result)
				goto LABEL_6;
		}
	}
	else
	{
	LABEL_6:
		result = sub_1408819F0(dword_140C10F20, 80i64);
		if (result)
		{
			*(_DWORD*)result = a2;
			*(_DWORD*)(result + 16) = 0;
			*(_QWORD*)(result + 24) = 0i64;
			*(_QWORD*)(result + 32) = 0i64;
			*(_DWORD*)(result + 40) = 0;
			*(_QWORD*)(result + 48) = 0i64;
			*(_QWORD*)(result + 56) = 0i64;
			*(_QWORD*)(result + 64) = 0i64;
			*(_DWORD*)(result + 72) = 0;
			v5 = *(_DWORD*)result % 0xC1u;
			*(_QWORD*)(result + 8) = *(_QWORD*)(a1 + 8 * v5);
			*(_QWORD*)(a1 + 8 * v5) = result;
			++* (_DWORD*)(a1 + 1544);
		}
	}
	return result;
}
// 140836772: conditional instruction was optimized away because rax.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

