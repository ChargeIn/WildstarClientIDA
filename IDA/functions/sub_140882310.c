//----- (0000000140882310) ----------------------------------------------------
__int64 __fastcall sub_140882310(__int64 a1, __int64 a2)
{
	__int64 v3; // r10
	__int64* v4; // rdx
	_DWORD* v5; // r8
	__int64 v6; // r9
	__int64* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	unsigned __int64 v10; // rax

	v3 = a2 - 6552 - (((_BYTE)a2 + 104) & 7);
	if ((unsigned __int64)(v3 - 24) > 0xFFFFFFE8)
	{
		sub_1407F1194("tlsf_create: Pool size must be at least %d bytes.\n", 6576i64);
		return 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = a1;
		*(_QWORD*)(a1 + 24) = a1;
		v4 = (__int64*)(a1 + 136);
		v5 = (_DWORD*)(a1 + 36);
		v6 = 25i64;
		*(_DWORD*)(a1 + 32) = 0;
		do
		{
			*v5 = 0;
			v7 = v4;
			v8 = 4i64;
			do
			{
				*v7 = a1;
				v7[1] = a1;
				v7[2] = a1;
				v7 += 8;
				*(v7 - 5) = a1;
				*(v7 - 4) = a1;
				*(v7 - 3) = a1;
				*(v7 - 2) = a1;
				*(v7 - 1) = a1;
				--v8;
			} while (v8);
			++v5;
			v4 += 32;
			--v6;
		} while (v6);
		v9 = a1 + 6528;
		*(_QWORD*)(a1 + 6536) = (v3 - (v3 & 7)) & 0xFFFFFFFFFFFFFFFCui64 | 1;
		sub_140881EC0(a1, (_QWORD*)(a1 + 6528));
		v10 = *(_QWORD*)(a1 + 6536) & 0xFFFFFFFFFFFFFFFCui64;
		*(_QWORD*)(v10 + v9 + 8) = v9;
		*(_QWORD*)(v10 + v9 + 16) = 2i64;
		return a1;
	}
}

