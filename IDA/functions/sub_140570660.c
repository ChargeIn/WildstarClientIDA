//----- (0000000140570660) ----------------------------------------------------
int** __fastcall sub_140570660(__int64 a1, int** a2)
{
	__int64 v2; // rbp
	int* v3; // r15
	__int64 v5; // rax
	int* v6; // rsi
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	_QWORD* v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // r14d
	int v14; // edi
	int* v15; // rax
	unsigned __int64 v16; // r8
	int* v17; // rbp
	__int64 v18; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v21; // [rsp+50h] [rbp+8h]

	v2 = qword_140C65970;
	v3 = 0i64;
	v5 = *(_QWORD*)(qword_140C65970 + 88);
	v21 = qword_140C65970;
	v6 = 0i64;
	if (v5)
	{
		v8 = *(_QWORD**)(v5 + 16);
		v9 = (_QWORD*)v8[2];
		if (v9 != v8)
		{
			do
			{
				v10 = (_QWORD*)v9[5];
				if ((*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 40i64))(v10))
				{
					if ((*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 208i64))(v10) == 3)
					{
						v11 = v10[6];
						if (*(_DWORD*)(*(_QWORD*)v11 + 12i64) == 7)
						{
							v12 = sub_140224480(*(_DWORD*)(*(_QWORD*)v11 + 20i64));
							if (v12)
							{
								v13 = *(_DWORD*)(v12 + 16);
								if (v13)
								{
									v14 = (*(__int64(__fastcall**)(_QWORD*))(*v10 + 8i64))(v10);
									v15 = sub_14018DB00((__int64)v6, (unsigned __int64)v3 + 1, 12i64);
									v16 = 3i64 * (_QWORD)v3;
									v17 = v15;
									v15[v16] = v13;
									v15[v16 + 1] = 1;
									v15[v16 + 2] = v14;
									if (v6 != v15)
									{
										sub_1407DB590(v15, v6, v16 * 4);
										if (v6)
											(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
										v6 = v17;
									}
									v2 = v21;
									v3 = (int*)((char*)v3 + 1);
								}
							}
						}
					}
				}
				v18 = v9[3];
				if (v18)
				{
					v9 = (_QWORD*)v9[3];
					for (i = *(_QWORD**)(v18 + 16); i; i = (_QWORD*)i[2])
						v9 = i;
				}
				else
				{
					for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v9 = (_QWORD*)j;
					if (v9[3] != j)
						v9 = (_QWORD*)j;
				}
			} while (v9 != *(_QWORD**)(*(_QWORD*)(v2 + 88) + 16i64));
		}
		a2[1] = v3;
		*a2 = v6;
		return a2;
	}
	else
	{
		a2[1] = 0i64;
		*a2 = 0i64;
		return a2;
	}
}
// 140C65970: using guessed type __int64 qword_140C65970;

