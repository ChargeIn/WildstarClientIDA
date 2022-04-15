//----- (000000014086BEB0) ----------------------------------------------------
__int64 __fastcall sub_14086BEB0(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rdx
	unsigned __int64 v4; // r8
	_QWORD* v5; // rdi
	__int64 v6; // rdx

	if (*(_DWORD*)(a1 + 28))
	{
		while (1)
		{
			v2 = *(_QWORD**)a1;
			if (!*(_QWORD*)a1)
				break;
			*(_QWORD*)a1 = *v2;
			if (v2 == *(_QWORD**)(a1 + 8))
				*(_QWORD*)(a1 + 8) = 0i64;
			*v2 = *(_QWORD*)(a1 + 16);
			--* (_DWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) = v2;
		}
		v3 = *(_QWORD**)(a1 + 16);
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(a1 + 40);
				v5 = (_QWORD*)*v3;
				if ((unsigned __int64)v3 < v4 || (unsigned __int64)v3 >= v4 + 24i64 * *(unsigned int*)(a1 + 24))
					sub_140881720(dword_140C10F20, (__int64)v3);
				v3 = v5;
			} while (v5);
		}
		v6 = *(_QWORD*)(a1 + 40);
		if (v6)
			sub_140881720(dword_140C10F20, v6);
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

