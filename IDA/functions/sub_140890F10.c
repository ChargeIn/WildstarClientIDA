//----- (0000000140890F10) ----------------------------------------------------
char __fastcall sub_140890F10(__int64 a1, int a2)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // r8
	_DWORD* v10; // rcx

	v3 = (unsigned int)(a2 + *(_DWORD*)(a1 + 16));
	v4 = sub_1408819F0(dword_140C10F20, 24 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 24i64;
		v7 = (unsigned int)v6;
		if (*(_QWORD*)a1)
		{
			if ((_DWORD)v6)
			{
				v8 = 0i64;
				v9 = (unsigned int)v7;
				do
				{
					v10 = (_DWORD*)(v8 + *(_QWORD*)a1);
					v8 += 24i64;
					*(_DWORD*)(v8 + v4 - 24) = *v10;
					*(_DWORD*)(v8 + v4 - 20) = v10[1];
					*(_DWORD*)(v8 + v4 - 16) = v10[2];
					*(_DWORD*)(v8 + v4 - 12) = v10[3];
					*(_DWORD*)(v8 + v4 - 8) = v10[4];
					*(_DWORD*)(v8 + v4 - 4) = v10[5];
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		}
		*(_DWORD*)(a1 + 16) = v3;
		*(_QWORD*)a1 = v5;
		*(_QWORD*)(a1 + 8) = v5 + 24 * v7;
		LOBYTE(v4) = 1;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

