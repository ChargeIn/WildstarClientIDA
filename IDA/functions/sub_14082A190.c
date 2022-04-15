//----- (000000014082A190) ----------------------------------------------------
char __fastcall sub_14082A190(__int64* a1, int a2)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rcx

	v3 = (unsigned int)(a2 + *((_DWORD*)a1 + 4));
	v4 = sub_1408819F0(dword_140C10F20, 12 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (a1[1] - *a1) / 12;
		v7 = (unsigned int)v6;
		if (*a1)
		{
			if ((_DWORD)v6)
			{
				v8 = 0i64;
				v9 = (unsigned int)v7;
				do
				{
					v10 = *a1;
					v8 += 12i64;
					*(_DWORD*)(v8 + v4 - 12) = *(_DWORD*)(*a1 + v8 - 12);
					*(_DWORD*)(v8 + v4 - 8) = *(_DWORD*)(v10 + v8 - 8);
					*(_DWORD*)(v8 + v4 - 4) = *(_DWORD*)(v10 + v8 - 4);
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *a1);
		}
		*((_DWORD*)a1 + 4) = v3;
		*a1 = v5;
		a1[1] = v5 + 12 * v7;
		LOBYTE(v4) = 1;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

