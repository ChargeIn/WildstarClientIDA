//----- (00000001402F9E00) ----------------------------------------------------
void __fastcall sub_1402F9E00(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v5; // rbx
	__int64 v6; // r8
	unsigned int v7; // eax
	__int64 v8; // rcx
	unsigned int v9; // ebp
	__int64 v10; // rbx
	unsigned __int16* v11; // r8
	__int64 v12; // r11
	unsigned __int64 v13; // r10
	__int64 v14; // rax
	unsigned int v15; // ecx
	__int64 i; // rbx

	v5 = a1;
	if ((*(_BYTE*)(a1 + 48) & 1) != 0)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 64i64);
		v7 = *(_DWORD*)(v6 + 128);
		if (v7)
		{
			v8 = *(_QWORD*)(a1 + 64);
			v9 = *(_DWORD*)(v8 + 512);
			v10 = v8;
			v11 = (unsigned __int16*)(*(_QWORD*)(v6 + 136) + 30i64);
			v12 = v7;
			do
			{
				if (*v11 >= v9
					|| (v13 = *(unsigned __int16*)(*(_QWORD*)(v10 + 520) + 4i64 * *v11), v13 >> 3 < a3[1])
					&& ((unsigned __int8)(1 << (v13 & 7)) & *(_BYTE*)(*a3 + (v13 >> 3))) != 0)
				{
					LOWORD(v14) = v11[2];
					if ((_WORD)v14)
					{
						if ((v11[3] & 1) == 0)
						{
							v15 = v11[4];
							v14 = (unsigned __int16)v14;
							if (*(_DWORD*)(a2 + 4i64 * (unsigned __int16)v14) <= v15)
								*(_DWORD*)(a2 + 4 * v14) = v15;
						}
					}
				}
				v11 += 56;
				--v12;
			} while (v12);
			v5 = a1;
		}
		for (i = *(_QWORD*)(v5 + 1232); i; i = *(_QWORD*)(i + 1248))
		{
			if (!*(_DWORD*)(i + 1200))
				sub_1402F9E00(i, a2, a3);
		}
	}
}

