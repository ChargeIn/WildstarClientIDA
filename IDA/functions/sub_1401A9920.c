//----- (00000001401A9920) ----------------------------------------------------
__int64 __fastcall sub_1401A9920(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r9
	int v7; // ecx
	int v8; // ecx
	int v9; // r8d
	__int64 v10; // rdx
	char* v11; // rcx
	char v12; // al
	char* v13; // rcx
	char v14; // al

	v3 = *(_QWORD*)(a1 + 40);
	if (!v3)
		return (unsigned int)(a3 + 6);
	v7 = *(_DWORD*)(v3 + 44);
	if (v7)
	{
		v8 = v7 - 1;
		if (v8)
		{
			if (v8 == 1)
			{
				v10 = *(_QWORD*)(v3 + 48);
				v9 = 18;
				if (v10)
				{
					if (*(_QWORD*)(v10 + 16))
						v9 = *(_DWORD*)(v10 + 24) + 20;
					v11 = *(char**)(v10 + 32);
					if (v11)
					{
						do
						{
							v12 = *v11;
							++v9;
							++v11;
						} while (v12);
					}
					v13 = *(char**)(v10 + 48);
					if (v13)
					{
						do
						{
							v14 = *v13;
							++v9;
							++v13;
						} while (v14);
					}
					if (*(_DWORD*)(v10 + 60))
						v9 += 2;
				}
			}
			else
			{
				v9 = 6;
			}
		}
		else
		{
			v9 = *(_DWORD*)(v3 + 148) != 0 ? 10 : 6;
		}
	}
	else
	{
		v9 = 0;
	}
	if (*(_DWORD*)(v3 + 72) == 15 && *(_DWORD*)(v3 + 120) == 15)
		return a2 + (a2 >> 25) + v9 + (a2 >> 14) + (a2 >> 12) + 7;
	else
		return (unsigned int)(v9 + a3);
}

