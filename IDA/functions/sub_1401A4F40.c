//----- (00000001401A4F40) ----------------------------------------------------
__int64 __fastcall sub_1401A4F40(__int64 a1)
{
	bool v2; // zf
	__int16* v3; // rdi
	int* v4; // rsi
	__int64 v5; // rax
	__int16 v6; // ax
	__int64 v7; // rbx
	wchar_t** v8; // r11
	unsigned __int64 v9; // r10
	unsigned __int64 v10; // r8
	unsigned __int16* v11; // rax
	int v12; // r9d
	__int16 v14; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15; // [rsp+22h] [rbp-46h]
	__int64 v16; // [rsp+2Ah] [rbp-3Eh]
	__int16 v17; // [rsp+32h] [rbp-36h]
	int v18; // [rsp+70h] [rbp+8h] BYREF

	if ((*(_DWORD*)a1 & 0x100) == 0)
		return *(_QWORD*)(a1 + 8);
	**(_WORD**)(a1 + 16) = 0;
	v2 = *(_DWORD*)a1 == 0x100;
	*(_DWORD*)a1 ^= 0x100u;
	if (!v2)
	{
		v3 = *(__int16**)(a1 + 8);
		v4 = (int*)v3;
		if ((unsigned __int64)v3 < *(_QWORD*)(a1 + 16))
		{
			while ((*(_DWORD*)a1 & 2) == 0 || *v3 != 13)
			{
				if ((*(_DWORD*)a1 & 2) == 0 || *v3 != 10)
				{
					if ((*(_DWORD*)a1 & 1) != 0 && *v3 == 38)
					{
						if (v3[1] != 35)
						{
							v8 = &off_140A45450;
							while (1)
							{
								v9 = *((int*)v8 + 2);
								v10 = 0i64;
								if (*((_DWORD*)v8 + 2))
								{
									v11 = (unsigned __int16*)(v3 + 1);
									while (1)
									{
										v12 = *v11;
										if (v12 != *(unsigned __int16*)((char*)v11 + (char*)*v8 - (char*)(v3 + 1)))
											break;
										if ((_WORD)v12)
										{
											++v10;
											++v11;
											if (v10 < v9)
												continue;
										}
										goto LABEL_25;
									}
								}
								else
								{
								LABEL_25:
									if (v3[v9 + 1] == 59)
									{
										v4 = (int*)((char*)v4 + 2);
										*((_WORD*)v4 - 1) = *((_WORD*)v8 + 6);
										v3 += *((_DWORD*)v8 + 2) + 2;
										goto LABEL_32;
									}
								}
								v8 += 2;
								if ((__int64)v8 >= (__int64)&unk_140A454A0)
								{
									++v3;
									goto LABEL_31;
								}
							}
						}
						v14 = 0;
						v18 = 0;
						v15 = 0i64;
						v16 = 0i64;
						v17 = 0;
						v5 = sub_1401A5170((__int64)v3, &v14, &v18);
						if (v5)
						{
							v7 = v18;
							v3 = (__int16*)v5;
							sub_1407DB590(v4, (int*)&v14, v18);
							v4 = (int*)((char*)v4 + 2 * v7);
							goto LABEL_32;
						}
						v6 = *v3++;
					}
					else
					{
						v6 = *v3++;
					}
					*(_WORD*)v4 = v6;
					goto LABEL_31;
				}
				if (v3[1] != 13)
					goto LABEL_8;
				v3 += 2;
				*(_WORD*)v4 = 10;
			LABEL_31:
				v4 = (int*)((char*)v4 + 2);
			LABEL_32:
				if ((unsigned __int64)v3 >= *(_QWORD*)(a1 + 16))
					goto LABEL_33;
			}
			if (v3[1] == 10)
			{
				v3 += 2;
				*(_WORD*)v4 = 10;
				goto LABEL_31;
			}
		LABEL_8:
			++v3;
			*(_WORD*)v4 = 10;
			goto LABEL_31;
		}
	LABEL_33:
		*(_WORD*)v4 = 0;
	}
	if ((*(_BYTE*)a1 & 4) != 0)
		sub_1401A4EB0(a1);
	*(_DWORD*)a1 &= 0x200u;
	return *(_QWORD*)(a1 + 8);
}
// 140A45450: using guessed type wchar_t *off_140A45450;

