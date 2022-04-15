//----- (00000001402630A0) ----------------------------------------------------
__int64 __fastcall sub_1402630A0(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rbx
	unsigned int* v5; // r11
	void** v6; // rdi
	__int64 v7; // rsi
	char* v8; // rax
	int v9; // r10d
	unsigned __int64 v10; // r8
	int* v11; // rdx
	unsigned __int64 v12; // r8
	int v13; // r9d
	int v14; // ecx
	int v15; // eax
	int v16; // ecx

	*(_QWORD*)a1 = off_140B60A80;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 6152) = 0i64;
	sub_140265F50((_QWORD*)(a1 + 6160));
	sub_140264AA0((_QWORD*)(a1 + 6200));
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_DWORD*)(a1 + 56) = 1;
	*(_DWORD*)(a1 + 60) = 1;
	*(_DWORD*)(a1 + 64) = 1;
	*(_DWORD*)(a1 + 68) = 27;
	*(_QWORD*)(a1 + 80) = a2;
	sub_1407E4830((int*)(a1 + 136), 0i64, 0x68ui64);
	sub_1407E4830((int*)(a1 + 240), 0i64, 0x3B0ui64);
	v4 = (_DWORD*)(a1 + 1184);
	sub_1407E4830((int*)(a1 + 1184), 0i64, 0x1368ui64);
	v5 = (unsigned int*)&unk_140AE5D90;
	v6 = &off_140C38350;
	v7 = 23i64;
	do
	{
		v8 = (char*)*v6;
		v9 = -1;
		v10 = (unsigned __int64)*v6 + 16 * *v5;
		if ((unsigned __int64)*v6 < v10)
		{
			v11 = (int*)(v8 + 8);
			v12 = ((v10 - (unsigned __int64)v8 - 1) >> 4) + 1;
			do
			{
				v13 = dword_140AE4D78[*(v11 - 1)];
				if (*v4 <= (unsigned int)*v11)
					*v4 = *v11 + 1;
				v4[*v11 + 1] += v13;
				if (v11[1])
				{
					v14 = *v11;
					v4[36] += v13;
					v4[17] |= 1 << v14;
					if (v9 != *v11)
						v4[v4[37]++ + 38] = *v11;
				}
				else
				{
					v4[18] += v13;
					if (*v11 != v9)
						v4[v4[19]++ + 20] = *v11;
				}
				v9 = *v11;
				v11 += 4;
				--v12;
			} while (v12);
		}
		v4 += 54;
		++v6;
		++v5;
		--v7;
	} while (v7);
	if (!dword_140C65690)
	{
		dword_140C65690 = 1;
		if (!(unsigned int)sub_14080B190())
		{
			v15 = sub_14080C3B0((__int64)&dword_140C65698, (__int64)&unk_140C656A0);
			v16 = dword_140C65694;
			if (!v15)
				v16 = 1;
			dword_140C65694 = v16;
		}
	}
	return a1;
}
// 140AE4D78: using guessed type int dword_140AE4D78[47];
// 140B60A80: using guessed type __int64 (__fastcall *off_140B60A80[4])();
// 140C38350: using guessed type void *off_140C38350;
// 140C65690: using guessed type int dword_140C65690;
// 140C65694: using guessed type int dword_140C65694;
// 140C65698: using guessed type int dword_140C65698;

