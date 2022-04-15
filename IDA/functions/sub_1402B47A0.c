//----- (00000001402B47A0) ----------------------------------------------------
__int64 __fastcall sub_1402B47A0(char* a1, __int64 a2, __int64 a3, char a4)
{
	int v6; // eax
	unsigned __int64 v7; // r14
	unsigned __int64 v8; // rdx
	char v9; // bl
	unsigned __int64 v10; // rdi
	int v11; // esi
	int v12; // ebp
	__int64 v13; // r8
	__int64 v14; // rdx
	unsigned __int64 v15; // r9
	_WORD* v16; // r8
	char v17; // al
	__int64 v18; // rdx
	__int16 v19; // r11
	__int64 v20; // r11
	char v21; // al
	bool v22; // zf
	__int64 result; // rax
	unsigned __int64 v24; // rax
	__int64 v25; // r11
	int v26; // ebx
	int v27; // ebp
	__int64 v28; // r8
	__int64 v29; // rax
	char* v30; // rdx
	unsigned __int64 v31; // r8
	char v32; // al
	int v33; // eax
	__int64 v34; // r9
	__int64 v35; // r9
	char v36; // al
	unsigned __int64 v37; // rdx
	char v38; // r12
	__int64 v39; // r13
	int v40; // eax
	int v41; // r15d
	__int64 v42; // r8
	__int64 v43; // rdx
	unsigned __int64 v44; // r9
	_DWORD* v45; // r8
	char v46; // al
	__int64 v47; // r11
	unsigned int v48; // ebx
	int v49; // edx
	int v50; // eax
	__int64 v51; // rbx
	bool v52; // cc
	_BYTE* v53; // rdi
	unsigned __int8* v54; // r11
	int v55; // eax
	int v56; // edx
	char v57; // al
	int i; // [rsp+60h] [rbp+18h]

	if (!a3 || !*(_QWORD*)(a3 + 40))
		return 2147500035i64;
	v6 = *(_DWORD*)(a3 + 16);
	v7 = (unsigned __int64)&a1[a2];
	if (v6 != 28)
	{
		if (v6 == 61)
		{
			v24 = *(_QWORD*)(a3 + 8);
			v25 = 0i64;
			if (!v24)
				return 0i64;
			v26 = a4 & 4;
			v27 = a4 & 2;
			while (1)
			{
				v28 = v27 ? *(_QWORD*)a3 - 1i64 : 0i64;
				v29 = v26 ? v25 : v24 - v25 - 1;
				v30 = (char*)(v28 + *(_QWORD*)(a3 + 40) + v29 * *(_QWORD*)(a3 + 24));
				v31 = 0i64;
				if (*(_QWORD*)a3)
					break;
			LABEL_68:
				v24 = *(_QWORD*)(a3 + 8);
				if (++v25 >= v24)
					return 0i64;
			}
			while ((unsigned __int64)a1 < v7)
			{
				v32 = *a1++;
				if (v32 >= 0)
				{
					v35 = (v32 & 0x7F) + 1;
					if ((unsigned __int64)&a1[v35] > v7)
						return 2147500037i64;
					if ((v32 & 0x7F) != -1)
					{
						while (v31 < *(_QWORD*)a3)
						{
							v36 = *a1++;
							*v30 = v36;
							if (v27)
								--v30;
							else
								++v30;
							++v31;
							if (!--v35)
								goto LABEL_67;
						}
						return 2147500037i64;
					}
				}
				else
				{
					v33 = (v32 & 0x7F) + 1;
					v34 = v33;
					if ((unsigned __int64)a1 >= v7)
						return 2147500037i64;
					if (v33)
					{
						while (v31 < *(_QWORD*)a3)
						{
							*v30 = *a1;
							if (v27)
								--v30;
							else
								++v30;
							++v31;
							if (!--v34)
								goto LABEL_59;
						}
						return 2147500037i64;
					}
				LABEL_59:
					++a1;
				}
			LABEL_67:
				if (v31 >= *(_QWORD*)a3)
					goto LABEL_68;
			}
		}
		else if (v6 == 86)
		{
			v8 = *(_QWORD*)(a3 + 8);
			v9 = 0;
			v10 = 0i64;
			if (v8)
			{
				v11 = a4 & 4;
				v12 = a4 & 2;
				do
				{
					if (v12)
						v13 = *(_QWORD*)a3 - 1i64;
					else
						v13 = 0i64;
					if (v11)
						v14 = v10;
					else
						v14 = v8 - v10 - 1;
					v15 = 0i64;
					v16 = (_WORD*)(*(_QWORD*)(a3 + 40) + v14 * *(_QWORD*)(a3 + 24) + 2 * v13);
					if (*(_QWORD*)a3)
					{
						while ((unsigned __int64)a1 < v7)
						{
							v17 = *a1;
							if (*a1 >= 0)
							{
								++a1;
								v20 = (v17 & 0x7F) + 1;
								if ((unsigned __int64)&a1[2 * v20] > v7)
									return 2147500037i64;
								if ((v17 & 0x7F) != -1)
								{
									while (v15 < *(_QWORD*)a3)
									{
										v21 = v9;
										v22 = *(_WORD*)a1 >= 0;
										*v16 = *(_WORD*)a1;
										if (!v22)
											v21 = 1;
										a1 += 2;
										v9 = v21;
										if (v12)
											--v16;
										else
											++v16;
										++v15;
										if (!--v20)
											goto LABEL_36;
									}
									return 2147500037i64;
								}
							}
							else
							{
								v18 = (v17 & 0x7F) + 1;
								if ((unsigned __int64)(a1 + 2) >= v7)
									return 2147500037i64;
								v19 = *(_WORD*)(a1 + 1);
								if ((v19 & 0x8000) != 0)
									v9 = 1;
								a1 += 3;
								if ((v17 & 0x7F) != -1)
								{
									while (v15 < *(_QWORD*)a3)
									{
										*v16 = v19;
										if (v12)
											--v16;
										else
											++v16;
										++v15;
										if (!--v18)
											goto LABEL_36;
									}
									return 2147500037i64;
								}
							}
						LABEL_36:
							if (v15 >= *(_QWORD*)a3)
								goto LABEL_37;
						}
						return 2147500037i64;
					}
				LABEL_37:
					v8 = *(_QWORD*)(a3 + 8);
					++v10;
				} while (v10 < v8);
				if (v9)
					return 0i64;
			}
			result = sub_1402B4720(a3);
			if ((int)result < 0)
				return result;
			return 0i64;
		}
		return 2147500037i64;
	}
	v37 = *(_QWORD*)(a3 + 8);
	v38 = 0;
	v39 = 0i64;
	if (v37)
	{
		v40 = a4 & 4;
		v41 = a4 & 2;
		for (i = v40; ; v40 = i)
		{
			if (v41)
				v42 = *(_QWORD*)a3 - 1i64;
			else
				v42 = 0i64;
			if (v40)
				v43 = v39;
			else
				v43 = v37 - v39 - 1;
			v44 = 0i64;
			v45 = (_DWORD*)(*(_QWORD*)(a3 + 40) + v43 * *(_QWORD*)(a3 + 24) + 4 * v42);
			if (*(_QWORD*)a3)
			{
				while ((unsigned __int64)a1 < v7)
				{
					v46 = *a1;
					if (*a1 >= 0)
					{
						++a1;
						v50 = (v46 & 0x7F) + 1;
						v51 = v50;
						if ((a4 & 1) != 0)
							v52 = (unsigned __int64)&a1[2 * v50 + v50] <= v7;
						else
							v52 = (unsigned __int64)&a1[4 * v50] <= v7;
						if (!v52)
							return 2147500037i64;
						if (v50)
						{
							v53 = a1 + 3;
							v54 = (unsigned __int8*)(a1 + 2);
							while (v44 < *(_QWORD*)a3)
							{
								if ((a4 & 1) != 0)
								{
									if ((unsigned __int64)v54 >= v7)
										return 2147500037i64;
									v55 = (unsigned __int8)a1[1];
									v56 = (unsigned __int8)*a1;
									a1 += 3;
									v54 += 3;
									v38 = 1;
									v53 += 3;
									*v45 = *(v54 - 3) | ((v55 | (v56 << 8)) << 8) | 0xFF000000;
								}
								else
								{
									if ((unsigned __int64)v53 >= v7)
										return 2147500037i64;
									v57 = v38;
									*v45 = *v54 | (((unsigned __int8)a1[1] | (((unsigned __int8)*a1 | ((unsigned __int8)*v53 << 8)) << 8)) << 8);
									if (*v53)
										v57 = 1;
									a1 += 4;
									v54 += 4;
									v38 = v57;
									v53 += 4;
								}
								if (v41)
									--v45;
								else
									++v45;
								++v44;
								if (!--v51)
									goto LABEL_113;
							}
							return 2147500037i64;
						}
					}
					else
					{
						v47 = (v46 & 0x7F) + 1;
						if ((a4 & 1) != 0)
						{
							if ((unsigned __int64)(a1 + 3) >= v7)
								return 2147500037i64;
							v38 = 1;
							v48 = (unsigned __int8)a1[3] | (((unsigned __int8)a1[2] | ((unsigned __int8)a1[1] << 8)) << 8) | 0xFF000000;
							a1 += 4;
						}
						else
						{
							if ((unsigned __int64)(a1 + 4) >= v7)
								return 2147500037i64;
							v49 = (unsigned __int8)a1[4];
							v48 = (unsigned __int8)a1[3] | (((unsigned __int8)a1[2] | (((unsigned __int8)a1[1] | (v49 << 8)) << 8)) << 8);
							if ((_BYTE)v49)
								v38 = 1;
							a1 += 5;
						}
						if ((v46 & 0x7F) != -1)
						{
							while (v44 < *(_QWORD*)a3)
							{
								*v45 = v48;
								if (v41)
									--v45;
								else
									++v45;
								++v44;
								if (!--v47)
									goto LABEL_113;
							}
							return 2147500037i64;
						}
					}
				LABEL_113:
					if (v44 >= *(_QWORD*)a3)
						goto LABEL_114;
				}
				return 2147500037i64;
			}
		LABEL_114:
			v37 = *(_QWORD*)(a3 + 8);
			if (++v39 >= v37)
				break;
		}
		if (v38)
			return 0i64;
	}
	result = sub_1402B4720(a3);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

