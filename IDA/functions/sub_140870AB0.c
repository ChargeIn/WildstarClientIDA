//----- (0000000140870AB0) ----------------------------------------------------
__int64 __fastcall sub_140870AB0(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
	__int64 v4; // rsi
	unsigned __int8 v6; // r8
	int v7; // r14d
	unsigned __int8 v8; // r12
	bool v9; // r13
	__int64 v10; // rdi
	int v12; // r14d
	int v13; // ecx
	int v14; // ebp
	unsigned __int64 v15; // r12
	__int64 v16; // r14
	int v17; // esi
	int v18; // edx
	__int64 v19; // r10
	int i; // r11d
	__int64 v21; // rdx
	int v22; // eax
	bool v23; // zf
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rdi
	unsigned int v27; // esi
	int v28; // ebx

	v4 = *(unsigned __int8*)(a1 + 25);
	v6 = *(_BYTE*)(a1 + 24);
	v7 = a4;
	v8 = a2;
	v9 = a2 >= v6;
	v10 = 0i64;
	if (*(_BYTE*)(a1 + 25))
	{
		do
		{
			if (*(_DWORD*)(*(_QWORD*)a1 + 24 * v10 + 16) == a3)
				break;
			v10 = (unsigned int)(v10 + 1);
		} while ((unsigned int)v10 < (unsigned int)v4);
	}
	if (a2 >= v6 || (_DWORD)v10 == (_DWORD)v4)
	{
		v12 = v6;
		v13 = a2 + 1;
		if (v6 > v13)
			LOBYTE(v13) = v6;
		*(_BYTE*)(a1 + 24) = v13;
		if ((_DWORD)v10 == (_DWORD)v4)
			*(_BYTE*)(a1 + 25) = v4 + 1;
		if (!sub_1408715B0(a1, *(unsigned __int8*)(a1 + 25) * (unsigned __int8)v13))
			return 2i64;
		if ((_DWORD)v10 == (_DWORD)v4)
		{
			v14 = v12 - 1;
			if (v12 - 1 >= 0)
			{
				v15 = 24 * v4;
				v16 = (unsigned int)(v4 * v14);
				v17 = -(int)v4;
				do
				{
					sub_1407DB590(
						(int*)(*(_QWORD*)a1 + 24i64 * v14 * (unsigned int)*(unsigned __int8*)(a1 + 25)),
						(int*)(*(_QWORD*)a1 + 24 * v16),
						v15);
					v16 = (unsigned int)(v17 + v16);
					--v14;
				} while (v14 >= 0);
				v8 = a2;
			}
			v18 = 0;
			if (*(_BYTE*)(a1 + 24))
			{
				do
					*(_DWORD*)(*(_QWORD*)a1 + 24i64 * (++v18 * (unsigned int)*(unsigned __int8*)(a1 + 25) - 1) + 16) = a3;
				while (v18 < *(unsigned __int8*)(a1 + 24));
			}
		}
		if (v9)
		{
			v19 = 0i64;
			for (i = *(unsigned __int8*)(a1 + 25) * (*(unsigned __int8*)(a1 + 24) - 1);
				(unsigned int)v19 < *(unsigned __int8*)(a1 + 25);
				*(_DWORD*)(*(_QWORD*)a1 + 8 * v21 + 16) = v22)
			{
				v21 = 3i64 * (unsigned int)(v19 + i);
				v22 = *(_DWORD*)(*(_QWORD*)a1 + 24 * v19 + 16);
				v19 = (unsigned int)(v19 + 1);
			}
		}
		v7 = a4;
	}
	v23 = *(_QWORD*)(*(_QWORD*)a1 + 24i64 * ((unsigned int)v10 + *(unsigned __int8*)(a1 + 25) * v8) + 8) == 0i64;
	v24 = *(_QWORD*)a1 + 24i64 * ((unsigned int)v10 + *(unsigned __int8*)(a1 + 25) * v8);
	if (!v23)
		return 1i64;
	v25 = sub_1408819F0(dword_140C10F28, 1088i64);
	v26 = v25;
	if (v25)
	{
		sub_140862A10(v25);
		*(_QWORD*)(v26 + 1056) = 0i64;
		*(_DWORD*)(v24 + 20) = v7;
		v27 = sub_140862F90(v26, v7, 0x5DC00u / dword_140C110B4, 0i64);
		if (v27 != 1)
		{
			v28 = dword_140C10F28;
			sub_140862B80(v26);
			sub_140881720(v28, v26);
			return v27;
		}
		sub_140862BE0(v26);
		*(_QWORD*)(v24 + 8) = v26;
		return 1i64;
	}
	return 2i64;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C110B4: using guessed type int dword_140C110B4;

