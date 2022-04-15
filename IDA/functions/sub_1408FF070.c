//----- (00000001408FF070) ----------------------------------------------------
void __fastcall sub_1408FF070(
	unsigned __int64 a1,
	unsigned __int64 a2,
	unsigned __int64 a3,
	int(__fastcall* a4)(unsigned __int64, char*))
{
	unsigned __int64 v6; // r12
	char* v7; // r15
	__int64 v8; // r13
	unsigned __int64 v9; // rsi
	char* v10; // rsi
	unsigned __int64 v11; // r8
	char* v12; // rdx
	unsigned __int64 v13; // r9
	char v14; // al
	char v15; // cl
	unsigned __int64 v16; // r8
	char* v17; // rdx
	unsigned __int64 v18; // r9
	char v19; // al
	char v20; // cl
	unsigned __int64 v21; // r8
	char* v22; // rdx
	signed __int64 v23; // r9
	char v24; // al
	char v25; // cl
	unsigned __int64 v26; // rbx
	char* v27; // rdi
	char* v28; // rdx
	unsigned __int64 v29; // r9
	char v30; // al
	char v31; // cl
	unsigned __int64 v32; // rdi
	__int64 v33[124]; // [rsp+20h] [rbp-408h]

	v6 = a1;
	if ((a1 || !a2) && a3 && a4)
	{
		if (a2 >= 2)
		{
			v7 = (char*)(a1 + a3 * (a2 - 1));
			v8 = 0i64;
			while (1)
			{
				while (1)
				{
					v9 = (unsigned __int64)&v7[-v6] / a3 + 1;
					if (v9 <= 8)
					{
						sub_1408FF360(v6, v7, a3, a4);
						goto LABEL_10;
					}
					v10 = (char*)(v6 + a3 * (v9 >> 1));
					if (a4(v6, v10) > 0)
					{
						v11 = a3;
						v12 = v10;
						if ((char*)v6 != v10)
						{
							v13 = v6 - (_QWORD)v10;
							do
							{
								v14 = *v12;
								v15 = (v12++)[v13];
								v12[v13 - 1] = v14;
								*(v12 - 1) = v15;
								--v11;
							} while (v11);
						}
					}
					if (((int(__fastcall*)(unsigned __int64, char*, unsigned __int64))a4)(v6, v7, v11) > 0)
					{
						v16 = a3;
						v17 = v7;
						if ((char*)v6 != v7)
						{
							v18 = v6 - (_QWORD)v7;
							do
							{
								v19 = *v17;
								v20 = (v17++)[v18];
								v17[v18 - 1] = v19;
								*(v17 - 1) = v20;
								--v16;
							} while (v16);
						}
					}
					if (((int(__fastcall*)(char*, char*, unsigned __int64))a4)(v10, v7, v16) > 0)
					{
						v21 = a3;
						v22 = v7;
						if (v10 != v7)
						{
							v23 = v10 - v7;
							do
							{
								v24 = *v22;
								v25 = (v22++)[v23];
								v22[v23 - 1] = v24;
								*(v22 - 1) = v25;
								--v21;
							} while (v21);
						}
					}
					v26 = v6;
					v27 = v7;
					while (1)
					{
						if ((unsigned __int64)v10 > v26)
						{
							while (1)
							{
								v26 += a3;
								if (v26 >= (unsigned __int64)v10)
									break;
								if (((int(__fastcall*)(unsigned __int64, char*, unsigned __int64))a4)(v26, v10, v21) > 0)
								{
									if ((unsigned __int64)v10 > v26)
										goto LABEL_31;
									goto LABEL_29;
								}
							}
						}
						do
							LABEL_29:
						v26 += a3;
						while (v26 <= (unsigned __int64)v7
							&& ((int(__fastcall*)(unsigned __int64, char*, unsigned __int64))a4)(v26, v10, v21) <= 0);
						do
							LABEL_31:
						v27 -= a3;
						while (v27 > v10 && a4((unsigned __int64)v27, v10) > 0);
						if ((unsigned __int64)v27 < v26)
							break;
						v21 = a3;
						v28 = v27;
						if ((char*)v26 != v27)
						{
							v29 = v26 - (_QWORD)v27;
							do
							{
								v30 = *v28;
								v31 = (v28++)[v29];
								v28[v29 - 1] = v30;
								*(v28 - 1) = v31;
								--v21;
							} while (v21);
						}
						if (v10 == v27)
							v10 = (char*)v26;
					}
					v32 = (unsigned __int64)&v27[a3];
					if ((unsigned __int64)v10 < v32)
					{
						while (1)
						{
							v32 -= a3;
							if (v32 <= (unsigned __int64)v10)
								break;
							if (a4(v32, v10))
							{
								if ((unsigned __int64)v10 < v32)
									goto LABEL_45;
								goto LABEL_43;
							}
						}
					}
					do
						LABEL_43:
					v32 -= a3;
					while (v32 > v6 && !a4(v32, v10));
				LABEL_45:
					if ((__int64)(v32 - v6) >= (__int64)&v7[-v26])
						break;
					if (v26 < (unsigned __int64)v7)
					{
						v33[v8] = v26;
						v33[v8++ + 62] = (__int64)v7;
					}
					if (v6 >= v32)
					{
					LABEL_10:
						if (--v8 < 0)
							return;
						v6 = v33[v8];
						v7 = (char*)v33[v8 + 62];
					}
					else
					{
						v7 = (char*)v32;
					}
				}
				if (v6 < v32)
				{
					v33[v8] = v6;
					v33[v8++ + 62] = v32;
				}
				if (v26 >= (unsigned __int64)v7)
					goto LABEL_10;
				v6 = v26;
			}
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
}
// 1408FF182: variable 'v11' is possibly undefined
// 1408FF1BF: variable 'v16' is possibly undefined
// 1408FF213: variable 'v21' is possibly undefined

