//----- (000000014063A0E0) ----------------------------------------------------
void __fastcall sub_14063A0E0(__int64 a1, int* a2)
{
	int v3; // edx
	unsigned int v4; // r9d
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // edx
	int v9; // edx
	__int64 v10; // r8
	_DWORD* v11; // r9
	__int64 v12; // r8
	_DWORD* v13; // r9
	__int64 v14; // r8
	_DWORD* v15; // r9
	__int64 v16; // [rsp+10h] [rbp+10h]

	v3 = *((unsigned __int8*)a2 + 12);
	v4 = 0;
	if (v3 == 1)
	{
	LABEL_4:
		v4 = 1;
		goto LABEL_5;
	}
	if (v3 != 2)
	{
		if (v3 != 3)
			goto LABEL_5;
		goto LABEL_4;
	}
	v4 = 0x80000000;
LABEL_5:
	if ((v4 & a2[4]) != 0)
	{
		v5 = *(_QWORD*)(32i64 * *a2 + a1 + 8);
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < (unsigned int)a2[1])
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v6 == v5 || (v16 = v6, (unsigned int)a2[1] < *(_DWORD*)(v6 + 32)))
			v16 = v5;
		if (v16 != v5)
		{
			v8 = v3 - 1;
			if (v8)
			{
				v9 = v8 - 1;
				if (v9)
				{
					if (v9 == 1)
					{
						v10 = *(_QWORD*)(v16 + 40);
						v11 = *(_DWORD**)(v10 + 32);
						if (v11 != &v11[6 * *(_QWORD*)(v10 + 40)])
						{
							do
							{
								if (*v11 == a2[2])
									v11[4] = 1;
								v11 += 6;
							} while (v11 != (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 40) + 32i64)
								+ 24i64 * *(_QWORD*)(*(_QWORD*)(v16 + 40) + 40i64)));
						}
					}
				}
				else
				{
					v12 = *(_QWORD*)(v16 + 40);
					v13 = *(_DWORD**)(v12 + 16);
					if (v13 != &v13[6 * *(_QWORD*)(v12 + 24)])
					{
						do
						{
							if (*v13 == a2[2])
								v13[4] = 1;
							v13 += 6;
						} while (v13 != (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 40) + 16i64)
							+ 24i64 * *(_QWORD*)(*(_QWORD*)(v16 + 40) + 24i64)));
					}
				}
			}
			else
			{
				v14 = *(_QWORD*)(v16 + 40);
				v15 = *(_DWORD**)v14;
				if (*(_QWORD*)v14 != *(_QWORD*)v14 + 24i64 * *(_QWORD*)(v14 + 8))
				{
					do
					{
						if (*v15 == a2[2])
							v15[4] = 1;
						v15 += 6;
					} while (v15 != (_DWORD*)(**(_QWORD**)(v16 + 40) + 24i64 * *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8i64)));
				}
			}
		}
	}
}

