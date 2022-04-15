//----- (00000001408898C0) ----------------------------------------------------
__int64 __fastcall sub_1408898C0(__int64 a1, __int64 a2)
{
	unsigned int v2; // r10d
	unsigned int v5; // eax
	__int64 v6; // rsi
	unsigned int v7; // r10d
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rdx
	unsigned __int64 v12; // r8
	unsigned __int16 v13; // di
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int16* v17; // rcx
	unsigned int v18; // eax

	v2 = *(_DWORD*)(a2 + 20);
	v5 = *(_DWORD*)(a2 + 8) / v2;
	v6 = v5;
	v7 = v5 * v2;
	if (v7)
		*(_DWORD*)(a1 + 72) = sub_140881BC0(*(_QWORD*)a2, v7, v7, *(_DWORD*)(a2 + 16) | 8u, *(_DWORD*)(a2 + 12));
	if (*(_DWORD*)(a1 + 72) == -1)
	{
		result = 2i64;
		if (*(_DWORD*)(a2 + 8))
			return result;
	}
	else
	{
		sub_14001D310();
		*(_QWORD*)(a1 + 8) = sub_140881790(*(_DWORD*)(a1 + 72));
		v8 = sub_1408819F0(dword_140C111C0, 40 * v6);
		v9 = v8;
		*(_QWORD*)(a1 + 16) = v8;
		if (!v8)
			return 2i64;
		v11 = *(_QWORD*)(a1 + 8);
		v12 = 40 * v6 + v8;
		v13 = 0;
		do
		{
			if (v9)
			{
				*(_QWORD*)v9 = 0i64;
				*(_QWORD*)(v9 + 8) = v11;
				*(_QWORD*)(v9 + 16) = 0i64;
				*(_DWORD*)(v9 + 24) = 0;
				*(_DWORD*)(v9 + 28) = -1;
				*(_WORD*)(v9 + 32) = 0;
			}
			v14 = *(unsigned int*)(a2 + 20);
			*(_QWORD*)(v9 + 16) = 0i64;
			v11 += v14;
			v15 = *(_QWORD*)(a1 + 40);
			if (v15)
				*(_QWORD*)(v15 + 16) = v9;
			else
				*(_QWORD*)(a1 + 32) = v9;
			++* (_DWORD*)(a1 + 24);
			*(_QWORD*)(a1 + 40) = v9;
			v9 += 40i64;
		} while (v9 < v12);
		if ((_DWORD)v6)
		{
			v16 = sub_1408819F0(dword_140C111C0, 2 * v6);
			*(_QWORD*)(a1 + 48) = v16;
			*(_QWORD*)(a1 + 56) = v16;
			if (!v16)
				return 2i64;
			*(_DWORD*)(a1 + 64) = v6;
			do
			{
				v17 = *(unsigned __int16**)(a1 + 56);
				if ((unsigned int)(((__int64)v17 - *(_QWORD*)(a1 + 48)) >> 1) < *(_DWORD*)(a1 + 64))
				{
					*(_QWORD*)(a1 + 56) = v17 + 1;
					if (v17)
						*v17 = v13;
				}
				++v13;
			} while (v13 < (unsigned int)v6);
		}
		v18 = (int)(float)((float)((float)(int)v6 * *(float*)(a2 + 48)) + 0.5);
		if (v18 < (unsigned int)v6)
			v18 = v6;
		*(_DWORD*)(a1 + 76) = v18;
		*(_BYTE*)(a1 + 80) = *(float*)(a2 + 48) > 1.0;
	}
	return 1i64;
}
// 1408899E3: conditional instruction was optimized away because esi.4!=0
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C111C0: using guessed type int dword_140C111C0;

