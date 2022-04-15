//----- (0000000140403400) ----------------------------------------------------
__int64 __fastcall sub_140403400(__int64 a1, __int64 a2)
{
	unsigned __int16 v2; // ax
	__int64* v3; // r14
	__int64 v5; // rdi
	__int64 v6; // rax
	unsigned int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // ecx
	unsigned int i; // r9d
	__int64 v12; // r10
	unsigned int v13; // edx
	__int64 v14; // rcx
	_QWORD* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	_QWORD* v18; // r8
	int v19; // ecx
	int v20; // eax
	__int64 v21; // rax
	__int128 v23; // [rsp+28h] [rbp-19h] BYREF
	int v24; // [rsp+38h] [rbp-9h]
	__int64 v25; // [rsp+3Ch] [rbp-5h]
	__int64 v26; // [rsp+58h] [rbp+17h]
	__int64 v27; // [rsp+60h] [rbp+1Fh]
	int v28; // [rsp+68h] [rbp+27h]
	__int64 v29; // [rsp+70h] [rbp+2Fh]
	unsigned int v30; // [rsp+78h] [rbp+37h]
	__int64 v31; // [rsp+80h] [rbp+3Fh]
	int v32; // [rsp+88h] [rbp+47h]
	int v33; // [rsp+90h] [rbp+4Fh]
	char v34; // [rsp+94h] [rbp+53h]

	v2 = *(_WORD*)a2;
	v3 = (__int64*)qword_140C658A0;
	if (*(_WORD*)a2)
	{
		if ((unsigned __int64)v2 < *(_QWORD*)(qword_140C658A0 + 256))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(qword_140C658A0 + 248) + 8i64 * v2);
			if (v5)
			{
				sub_1407E4830((int*)&v23, 0i64, 0x70ui64);
				v6 = *(_QWORD*)(v5 + 72);
				if (v6)
				{
					v31 = *(_QWORD*)(v6 + 32);
					v7 = *(_DWORD*)(*(_QWORD*)(v5 + 72) + 24i64);
					v30 = v7;
					v29 = *(_QWORD*)(*(_QWORD*)(v5 + 72) + 16i64);
					v23 = *(_OWORD*)*(_QWORD*)(v5 + 72);
				}
				else
				{
					v8 = *(_QWORD*)(v5 + 80);
					if (v8)
					{
						v31 = *(_QWORD*)(v8 + 32);
						v7 = *(_DWORD*)(*(_QWORD*)(v5 + 80) + 24i64);
						v30 = v7;
						v9 = *(_QWORD*)(*(_QWORD*)(v5 + 80) + 16i64);
						*((_QWORD*)&v23 + 1) = 0i64;
						v29 = v9;
						v10 = 6;
						if (*(_DWORD*)(*(_QWORD*)(v5 + 80) + 48i64))
							v10 = 34;
						LODWORD(v23) = v10;
					}
					else
					{
						v7 = v30;
					}
				}
				if (*(_QWORD*)(v5 + 72) || *(_QWORD*)(v5 + 80))
				{
					if (*(_DWORD*)(a2 + 8))
					{
						for (i = 0; i < v7; ++i)
						{
							v12 = 104i64 * i;
							if (*(_DWORD*)(v31 + v12) == 9)
							{
								v13 = *(_DWORD*)(a2 + 8);
								v14 = 0i64;
								if (v13)
								{
									v15 = *(_QWORD**)(a2 + 16);
									while (*(_QWORD*)(v31 + v12 + 8) != *v15)
									{
										v14 = (unsigned int)(v14 + 1);
										v15 += 12;
										if ((unsigned int)v14 >= v13)
											goto LABEL_22;
									}
									*(_DWORD*)(v31 + 104i64 * i) = 8;
									v16 = 3 * v14;
									v17 = *(_QWORD*)(a2 + 16);
									v16 *= 32i64;
									v18 = (_QWORD*)(v12 + v31);
									v18[1] = *(_QWORD*)(v16 + v17);
									v18[2] = *(_QWORD*)(v16 + v17 + 8);
									v18[3] = *(_QWORD*)(v16 + v17 + 16);
									v18[4] = *(_QWORD*)(v16 + v17 + 24);
									v18[5] = *(_QWORD*)(v16 + v17 + 32);
									v18[6] = *(_QWORD*)(v16 + v17 + 40);
									v18[7] = *(_QWORD*)(v16 + v17 + 48);
									v18[8] = *(_QWORD*)(v16 + v17 + 56);
									v18[9] = *(_QWORD*)(v16 + v17 + 64);
									v18[10] = *(_QWORD*)(v16 + v17 + 72);
									v18[11] = *(_QWORD*)(v16 + v17 + 80);
									v18[12] = *(_QWORD*)(v16 + v17 + 88);
									v7 = v30;
								}
							}
						LABEL_22:
							;
						}
					}
					v32 = 0;
					v19 = *(_DWORD*)(qword_140C65898 + 27432);
					v20 = *(_DWORD*)(a2 + 4);
					v25 = 1i64;
					v24 = v20;
					v21 = *(_QWORD*)(a2 + 24);
					v28 = v19;
					v26 = v21;
					v27 = *(_QWORD*)(a2 + 32);
					v33 = *(_DWORD*)(a2 + 40);
					v34 = *(_BYTE*)(a2 + 44);
					sub_140402F20(v3, (__int64)&v23);
				}
			}
		}
	}
	sub_140405E00((__int64)v3, *(_WORD*)a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

