//----- (0000000140857780) ----------------------------------------------------
char __fastcall sub_140857780(__int64 a1, int a2)
{
	unsigned int v3; // ebp
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // r11
	_QWORD* v10; // r9
	__int64 v11; // r8
	_QWORD* v12; // r8

	v3 = a2 + *(_DWORD*)(a1 + 16);
	v4 = sub_1408819F0(dword_140C10F20, 32i64 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 5;
		v7 = (unsigned int)v6;
		if (*(_QWORD*)a1)
		{
			if ((_DWORD)v6)
			{
				v8 = v5 + 28;
				v9 = (unsigned int)v7;
				do
				{
					v10 = (_QWORD*)(v8 - 28);
					if (v8 != 28)
					{
						*(_QWORD*)(v8 - 12) = 0i64;
						*(_QWORD*)(v8 - 4) = 0i64;
					}
					v11 = -28 - v5 + v8;
					v8 += 32i64;
					v12 = (_QWORD*)(*(_QWORD*)a1 + v11);
					*v10 = *v12;
					v10[1] = v12[1];
					v10[2] = v12[2];
					v10[3] = v12[3];
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		}
		*(_DWORD*)(a1 + 16) = v3;
		*(_QWORD*)a1 = v5;
		LOBYTE(v4) = 1;
		*(_QWORD*)(a1 + 8) = v5 + 32 * v7;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

