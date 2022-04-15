//----- (0000000140273F80) ----------------------------------------------------
void __fastcall sub_140273F80(__int64 a1, char a2)
{
	int v4; // r9d
	__int64* v5; // r11
	_DWORD* v6; // r10
	__int64 v7; // rbx
	int v8; // ecx
	int v9; // ecx
	__int64 v10; // rcx
	int v11; // edx
	__int64 v12; // rax
	int v13; // ecx
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	int v19; // ecx
	int v20; // eax
	int v21; // ecx
	int v22; // ecx
	__int64 v23; // rcx
	__int64 v24; // rax
	int v25; // edx
	int v26; // ecx
	__int64 v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rax
	int v33; // ecx
	int v34; // eax
	int v35; // eax

	v4 = 0;
	if ((a2 & 1) != 0)
	{
		v5 = (__int64*)(a1 + 7544);
		v6 = (_DWORD*)(a1 + 7592);
		v7 = 4i64;
		while (1)
		{
			v8 = *(v6 - 16);
			if (v8)
			{
				v9 = v8 - 1;
				if (v9)
				{
					if (v9 != 1)
						goto LABEL_18;
					v10 = *v5;
					if (!*v5)
						goto LABEL_18;
					v11 = *(_DWORD*)(v10 + 44);
					v12 = *(_QWORD*)(v10 + 152);
					v13 = *(_DWORD*)(a1 + 240);
					v14 = (unsigned int)(*v6 + *(v6 - 4) * v11);
					if (*(_DWORD*)(v12 + 4 * v14) == v13)
						goto LABEL_18;
					*(_DWORD*)(v12 + 4 * v14) = v13;
				}
				else
				{
					if (!*v5)
						goto LABEL_18;
					v15 = *(_QWORD*)(*v5 + 152);
					v16 = (unsigned int)*v6;
					v17 = *(_DWORD*)(a1 + 240);
					if (*(_DWORD*)(v15 + 4 * v16) == v17)
						goto LABEL_18;
					*(_DWORD*)(v15 + 4 * v16) = v17;
				}
				goto LABEL_17;
			}
			v18 = *v5;
			if (*v5)
			{
				v19 = *(_DWORD*)(a1 + 240);
				if (*(_DWORD*)(v18 + 88) != v19)
				{
					*(_DWORD*)(v18 + 88) = v19;
				LABEL_17:
					v4 |= 1u;
				}
			}
			else
			{
				v20 = *(_DWORD*)(a1 + 240);
				if (*(_DWORD*)(a1 + 7664) != v20)
				{
					*(_DWORD*)(a1 + 7664) = v20;
					goto LABEL_17;
				}
			}
		LABEL_18:
			++v6;
			++v5;
			if (!--v7)
			{
				*(_DWORD*)(a1 + 7680) = 0;
				break;
			}
		}
	}
	if (*(_QWORD*)(a1 + 7712) && (a2 & 2) != 0)
	{
		v21 = *(_DWORD*)(a1 + 7684);
		if (v21)
		{
			v22 = v21 - 1;
			if (v22)
			{
				if (v22 != 1)
					goto LABEL_37;
				v23 = *(_QWORD*)(a1 + 7688);
				if (!v23)
					goto LABEL_37;
				v24 = *(_QWORD*)(v23 + 152);
				v25 = *(_DWORD*)(v23 + 44) * *(_DWORD*)(a1 + 7696);
				v26 = *(_DWORD*)(a1 + 240);
				v27 = (unsigned int)(*(_DWORD*)(a1 + 7700) + v25);
				if (*(_DWORD*)(v24 + 4 * v27) == v26)
					goto LABEL_37;
				*(_DWORD*)(v24 + 4 * v27) = v26;
			}
			else
			{
				v28 = *(_QWORD*)(a1 + 7688);
				if (!v28)
					goto LABEL_37;
				v29 = *(_QWORD*)(v28 + 152);
				v30 = *(unsigned int*)(a1 + 7700);
				v31 = *(_DWORD*)(a1 + 240);
				if (*(_DWORD*)(v29 + 4 * v30) == v31)
					goto LABEL_37;
				*(_DWORD*)(v29 + 4 * v30) = v31;
			}
			goto LABEL_36;
		}
		v32 = *(_QWORD*)(a1 + 7688);
		if (v32)
		{
			v33 = *(_DWORD*)(a1 + 240);
			if (*(_DWORD*)(v32 + 104) != v33)
			{
				*(_DWORD*)(v32 + 104) = v33;
			LABEL_36:
				v4 |= dword_140AE7BA0[*(int*)(a1 + 7704)];
			}
		}
		else
		{
			v34 = *(_DWORD*)(a1 + 240);
			if (*(_DWORD*)(a1 + 7728) != v34)
			{
				*(_DWORD*)(a1 + 7728) = v34;
				goto LABEL_36;
			}
		}
	LABEL_37:
		*(_DWORD*)(a1 + 7744) = 0;
	}
	if (v4)
	{
		v35 = dword_140C40590;
		if (*(_DWORD*)qword_140C63750 < dword_140C40590)
			v35 = *(_DWORD*)qword_140C63750;
		if (byte_140C405A0[v35])
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 344i64))(
				*(_QWORD*)(a1 + 6608),
				0i64,
				0i64);
	}
}
// 140AE7BA0: using guessed type int dword_140AE7BA0[28];
// 140C40590: using guessed type int dword_140C40590;
// 140C405A0: using guessed type _BYTE byte_140C405A0[32];
// 140C63750: using guessed type __int64 qword_140C63750;

