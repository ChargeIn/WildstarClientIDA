//----- (0000000140896DC0) ----------------------------------------------------
char __fastcall sub_140896DC0(__int64 a1, int a2)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // r11
	_QWORD* v10; // r9
	__int64 v11; // r8
	_QWORD* v12; // r8

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
				v8 = v4 + 10;
				v9 = (unsigned int)v6;
				do
				{
					v10 = (_QWORD*)(v8 - 10);
					if (v8 != 10)
					{
						*(_BYTE*)v8 &= 0xFCu;
						*(_WORD*)(v8 - 2) = 0;
						*(_QWORD*)(v8 + 6) = 0i64;
					}
					v11 = -10 - v5 + v8;
					v8 += 24i64;
					v12 = (_QWORD*)(*(_QWORD*)a1 + v11);
					*v10 = *v12;
					v10[1] = v12[1];
					v10[2] = v12[2];
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

