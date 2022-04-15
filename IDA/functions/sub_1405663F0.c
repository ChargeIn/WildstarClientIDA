//----- (00000001405663F0) ----------------------------------------------------
_QWORD* __fastcall sub_1405663F0(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 v3; // r11
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // r9
	unsigned int v8; // eax
	unsigned int v9; // edx
	int v10; // eax
	int v11; // edx
	int v12; // eax
	int v13; // edx
	unsigned int v14; // eax
	unsigned int v15; // edx
	int v16; // eax
	int v17; // edx
	int v18; // eax
	int v19; // edx

	v3 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	v7 = v5;
	if (v5)
	{
		while (1)
		{
			if (*a3)
			{
				if (!*(_DWORD*)(v7 + 32))
					goto LABEL_14;
			}
			else if (*(_DWORD*)(v7 + 32))
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
				goto LABEL_15;
			}
			v8 = a3[1];
			v9 = *(_DWORD*)(v7 + 36);
			if (v8 >= v9)
			{
				if (v8 > v9
					|| (v10 = a3[2], v11 = *(_DWORD*)(v7 + 40), v10 >= v11)
					&& (v10 > v11
						|| (v12 = a3[3], v13 = *(_DWORD*)(v7 + 44), v12 >= v13) && (v12 > v13 || a3[4] >= *(_DWORD*)(v7 + 48))))
				{
				LABEL_14:
					v7 = *(_QWORD*)(v7 + 24);
					goto LABEL_15;
				}
			}
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		LABEL_15:
			if (!v7)
			{
				while (1)
				{
					if (*(_DWORD*)(v5 + 32))
					{
						if (!*a3)
							goto LABEL_28;
					}
					else if (*a3)
					{
						goto LABEL_27;
					}
					v14 = *(_DWORD*)(v5 + 36);
					v15 = a3[1];
					if (v14 >= v15)
					{
						if (v14 > v15
							|| (v16 = *(_DWORD*)(v5 + 40), v17 = a3[2], v16 >= v17)
							&& (v16 > v17
								|| (v18 = *(_DWORD*)(v5 + 44), v19 = a3[3], v18 >= v19) && (v18 > v19 || *(_DWORD*)(v5 + 48) >= a3[4])))
						{
						LABEL_28:
							v3 = v5;
							v5 = *(_QWORD*)(v5 + 16);
							goto LABEL_29;
						}
					}
				LABEL_27:
					v5 = *(_QWORD*)(v5 + 24);
				LABEL_29:
					if (!v5)
						goto LABEL_30;
				}
			}
		}
	}
LABEL_30:
	*a2 = v3;
	a2[1] = v6;
	return a2;
}
// 14056647B: conditional instruction was optimized away because rcx.8!=0

