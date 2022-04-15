//----- (00000001408F8380) ----------------------------------------------------
__int64 __fastcall sub_1408F8380(__int64 a1, __int64 a2, _DWORD* a3)
{
	unsigned int v4; // esi
	__int64 v5; // rcx
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax
	int v11; // eax
	unsigned int v12; // r9d
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // r8
	__int64 v16; // r14
	unsigned int i; // edi
	int v18; // eax
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // r8

	v4 = 0;
	*(_QWORD*)a1 = off_1409C62F0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*a3 = 1;
	v5 = *(_QWORD*)(a2 + 160);
	*(_QWORD*)(a1 + 160) = v5;
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 88);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 92);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 96);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 + 100);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 104);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 108);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 112);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 116);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 120);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 124);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 128);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 132);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 136);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 140);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 144);
	*(_DWORD*)(a1 + 148) = *(_DWORD*)(a2 + 148);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 152);
	v8 = *(_DWORD*)(a2 + 156);
	*(_QWORD*)(a1 + 168) = 15i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 156) = v8;
	*(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 200);
	if (*(_QWORD*)(a2 + 176))
	{
		v9 = *(_DWORD*)(a2 + 172);
		if (v9)
		{
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 8i64))(v5, (unsigned int)(12 * v9));
			*(_QWORD*)(a1 + 176) = v10;
			if (!v10)
			{
				*a3 = 52;
				return a1;
			}
			v11 = *(_DWORD*)(a2 + 172);
			v12 = 0;
			for (*(_DWORD*)(a1 + 172) = v11;
				v12 < *(_DWORD*)(a1 + 172);
				*(_DWORD*)(v14 + 4 * v15 + 8) = *(_DWORD*)(v13 + 4 * v15 + 8))
			{
				v13 = *(_QWORD*)(a2 + 176);
				v14 = *(_QWORD*)(a1 + 176);
				v15 = 3i64 * v12++;
				*(_DWORD*)(v14 + 4 * v15) = *(_DWORD*)(v13 + 4 * v15);
				*(_DWORD*)(v14 + 4 * v15 + 4) = *(_DWORD*)(v13 + 4 * v15 + 4);
			}
		}
	}
	v16 = a2 + 8;
	for (i = 0; i < 4; ++i)
	{
		if ((unsigned int)sub_140837E30(16i64 * i + a1 + 8, *(int**)v16, *(_DWORD*)(v16 + 8), 0) == 52)
			goto LABEL_16;
		v16 += 16i64;
	}
	if (*(_QWORD*)(a2 + 192))
	{
		v18 = *(_DWORD*)(a2 + 184);
		if (v18)
		{
			v19 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 160) + 8i64))(
				*(_QWORD*)(a1 + 160),
				(unsigned int)(12 * v18));
			*(_QWORD*)(a1 + 192) = v19;
			if (!v19)
			{
			LABEL_16:
				*a3 = 52;
				return a1;
			}
			v20 = *(_DWORD*)(a2 + 184);
			*(_DWORD*)(a1 + 184) = v20;
			if (v20)
			{
				do
				{
					v21 = *(_QWORD*)(a2 + 192);
					v22 = *(_QWORD*)(a1 + 192);
					v23 = 3i64 * v4++;
					*(_DWORD*)(v22 + 4 * v23) = *(_DWORD*)(v21 + 4 * v23);
					*(_DWORD*)(v22 + 4 * v23 + 4) = *(_DWORD*)(v21 + 4 * v23 + 4);
					*(_DWORD*)(v22 + 4 * v23 + 8) = *(_DWORD*)(v21 + 4 * v23 + 8);
				} while (v4 < *(_DWORD*)(a1 + 184));
			}
		}
	}
	return a1;
}
// 1409C62F0: using guessed type __int64 (__fastcall *off_1409C62F0[6])();

