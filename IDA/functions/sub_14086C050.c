//----- (000000014086C050) ----------------------------------------------------
__int64 __fastcall sub_14086C050(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rdi
	unsigned __int64 v4; // rcx
	_QWORD* v5; // rsi
	_DWORD* v6; // rcx
	unsigned int i; // edi
	_DWORD* v8; // rcx

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
				if ((unsigned __int64)v3 < v4
					|| (unsigned __int64)v3 >= v4 + ((unsigned __int64)*(unsigned int*)(a1 + 24) << 7))
				{
					v6 = (_DWORD*)v3[3];
					if (v6)
						sub_140828460(v6);
					sub_140881720(dword_140C10F20, (__int64)v3);
				}
				v3 = v5;
			} while (v5);
		}
		if (*(_QWORD*)(a1 + 40))
		{
			for (i = 0; i < *(_DWORD*)(a1 + 24); ++i)
			{
				v8 = *(_DWORD**)(((unsigned __int64)i << 7) + *(_QWORD*)(a1 + 40) + 24);
				if (v8)
					sub_140828460(v8);
			}
			sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 40));
		}
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

