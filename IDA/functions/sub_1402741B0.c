//----- (00000001402741B0) ----------------------------------------------------
void __fastcall sub_1402741B0(__int64 a1, char a2)
{
	__int64* v3; // r10
	_DWORD* v4; // r9
	__int64 v5; // r11
	int v6; // edx
	int v7; // edx
	__int64 v8; // rdx
	__int64 v9; // r8
	int v10; // eax
	int v11; // edx
	int v12; // edx
	__int64 v13; // rdx
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // eax

	if ((a2 & 1) != 0)
	{
		v3 = (__int64*)(a1 + 7544);
		v4 = (_DWORD*)(a1 + 7592);
		v5 = 4i64;
		while (1)
		{
			v6 = *(v4 - 16);
			if (!v6)
			{
				v10 = *(_DWORD*)(a1 + 240);
				if (*v3)
					*(_DWORD*)(*v3 + 88) = v10;
				else
					*(_DWORD*)(a1 + 7664) = v10;
				goto LABEL_14;
			}
			v7 = v6 - 1;
			if (v7)
				break;
			v8 = *v3;
			if (*v3)
			{
				v9 = (unsigned int)*v4;
			LABEL_10:
				*(_DWORD*)(*(_QWORD*)(v8 + 152) + 4 * v9) = *(_DWORD*)(a1 + 240);
			}
		LABEL_14:
			++v4;
			++v3;
			if (!--v5)
			{
				*(_DWORD*)(a1 + 7680) = 0;
				goto LABEL_16;
			}
		}
		if (v7 != 1)
			goto LABEL_14;
		v8 = *v3;
		if (!*v3)
			goto LABEL_14;
		v9 = (unsigned int)(*v4 + *(v4 - 4) * *(_DWORD*)(v8 + 44));
		goto LABEL_10;
	}
LABEL_16:
	if (*(_QWORD*)(a1 + 7712) && (a2 & 2) != 0)
	{
		v11 = *(_DWORD*)(a1 + 7684);
		if (v11)
		{
			v12 = v11 - 1;
			if (v12)
			{
				if (v12 == 1)
				{
					v13 = *(_QWORD*)(a1 + 7688);
					if (v13)
					{
						v14 = (unsigned int)(*(_DWORD*)(a1 + 7700) + *(_DWORD*)(v13 + 44) * *(_DWORD*)(a1 + 7696));
					LABEL_25:
						*(_DWORD*)(*(_QWORD*)(v13 + 152) + 4 * v14) = *(_DWORD*)(a1 + 240);
						*(_DWORD*)(a1 + 7744) = 0;
						return;
					}
				}
			}
			else
			{
				v13 = *(_QWORD*)(a1 + 7688);
				if (v13)
				{
					v14 = *(unsigned int*)(a1 + 7700);
					goto LABEL_25;
				}
			}
		}
		else
		{
			v15 = *(_QWORD*)(a1 + 7688);
			v16 = *(_DWORD*)(a1 + 240);
			if (v15)
			{
				*(_DWORD*)(v15 + 104) = v16;
				*(_DWORD*)(a1 + 7744) = 0;
				return;
			}
			*(_DWORD*)(a1 + 7728) = v16;
		}
		*(_DWORD*)(a1 + 7744) = 0;
	}
}

