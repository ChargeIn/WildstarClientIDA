//----- (00000001404B8F30) ----------------------------------------------------
void __fastcall sub_1404B8F30(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rbx
	__int64 v6; // rsi
	__int64* v7; // r9
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rax
	int v11; // ecx
	unsigned __int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	int v15; // edx
	int v16; // ecx
	int v17; // eax
	__int64 v18; // rax
	unsigned int v19; // edi
	__int64 v20; // rax
	__int64 v21; // rax
	int v22; // eax
	int v23; // r11d
	int v24; // ebx
	int v25; // ebx
	int v26; // ebx
	int v27; // ebx
	int v28; // ebx
	__int64 v29; // rcx
	unsigned int v30; // edx
	int v31; // [rsp+20h] [rbp-98h] BYREF
	__int64 v32; // [rsp+28h] [rbp-90h] BYREF
	__int128* v33; // [rsp+30h] [rbp-88h]
	int* v34; // [rsp+38h] [rbp-80h]
	__int128 v35; // [rsp+40h] [rbp-78h] BYREF
	int v36[24]; // [rsp+50h] [rbp-68h] BYREF

	v3 = qword_140C659F0;
	v31 = 0;
	v6 = sub_1405B1510(&qword_140C7DFB0);
	if (v6)
	{
		v7 = (__int64*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
		LABEL_5:
			v8 = 0i64;
		}
		else
		{
			while (*(_DWORD*)(*v7 + 48) != 5)
			{
				if (++v7 == *((__int64**)&xmmword_140C7DFC0 + 1))
					goto LABEL_5;
			}
			v8 = *v7;
		}
		if (v6 != v8 || !(unsigned int)sub_1404B9B80(v3))
		{
			v9 = sub_140203DA0(a2);
			if (!v9)
				goto LABEL_48;
			v10 = *(_QWORD*)(v6 + 232);
			if (!v10 || !*(_DWORD*)(v6 + 272))
				v10 = 0i64;
			v11 = *(_DWORD*)(v10 + 184);
			if ((v11 & 0xFFFFFFFA) == 0 && v11 != 4)
			{
				v12 = *(unsigned int*)(v9 + 8);
				if ((unsigned int)v12 <= 0x36)
				{
					v13 = 0x60000000401008i64;
					if (_bittest64(&v13, v12))
					{
						v14 = dword_140DC3170;
						if ((dword_140DC3170 & 1) != 0)
						{
							v15 = dword_140DC317C;
						}
						else
						{
							v14 = dword_140DC3170 | 1;
							v15 = 0;
							dword_140DC317C = 0;
							dword_140DC3170 |= 1u;
						}
						if ((v14 & 2) != 0)
						{
							v16 = dword_140DC3184;
						}
						else
						{
							v14 |= 2u;
							v16 = 0;
							dword_140DC3184 = 0;
							dword_140DC3170 = v14;
						}
						if ((v14 & 4) != 0)
						{
							v17 = dword_140DC318C;
						}
						else
						{
							dword_140DC3170 = v14 | 4;
							v17 = 0;
							dword_140DC318C = 0;
						}
						if (qword_140C7DFE0)
						{
							if (v16)
							{
								v19 = dword_140DC3180;
							}
							else
							{
								dword_140DC3184 = 1;
								v18 = sub_140200220(0x40Bu);
								if (v18)
								{
									v19 = *(_DWORD*)(v18 + 8);
									dword_140DC3180 = v19;
								}
								else
								{
									v19 = 0;
									dword_140DC3180 = 0;
								}
							}
						}
						else if (*(_DWORD*)(v6 + 48) == 5)
						{
							if (v17)
							{
								v19 = dword_140DC3188;
							}
							else
							{
								dword_140DC318C = 1;
								v20 = sub_140200220(0x40Bu);
								if (v20)
								{
									v19 = *(_DWORD*)(v20 + 12);
									dword_140DC3188 = v19;
								}
								else
								{
									v19 = 0;
									dword_140DC3188 = 0;
								}
							}
						}
						else
						{
							if (!v15)
							{
								dword_140DC317C = 1;
								v21 = sub_140200220(0x40Bu);
								if (v21)
									dword_140DC3178 = *(_DWORD*)(v21 + 4);
								else
									dword_140DC3178 = 0;
							}
							v22 = sub_1403ABFE0(qword_140C65898 + 7160, 31, 0);
							v19 = v23 + 2 * v22;
						}
						v24 = *(_DWORD*)(v6 + 440);
						v25 = sub_1405AD1B0(v6, 5) + v24;
						v26 = sub_1405AD1B0(v6, 10) + v25;
						v27 = sub_1405AD1B0(v6, 9) + v26;
						v28 = sub_1405AD1B0(v6, 7) + v27;
						if (v28 + (unsigned int)sub_1405AD1B0(v6, 6) < v19)
						{
							v32 = 0i64;
							v33 = 0i64;
							v34 = 0i64;
							sub_1407E4830(v36, 0i64, 0x58ui64);
							v35 = *(_OWORD*)(v6 + 8);
							v33 = &v35;
							v32 = 0x100000000i64;
							v36[2] = 0;
							v36[15] = a2;
							v34 = &v31;
							v36[20] = a3;
							sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)&v32);
							return;
						}
						v29 = qword_140C65898;
						if (*(_DWORD*)(v6 + 48) == 5)
							v30 = 174;
						else
							v30 = 122;
						goto LABEL_49;
					}
				}
			LABEL_48:
				v29 = qword_140C65898;
				v30 = 103;
			LABEL_49:
				sub_1403CC530(v29, v30);
			}
		}
	}
}
// 1404B9173: variable 'v23' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 140DC3170: using guessed type int dword_140DC3170;
// 140DC3178: using guessed type int dword_140DC3178;
// 140DC317C: using guessed type int dword_140DC317C;
// 140DC3180: using guessed type int dword_140DC3180;
// 140DC3184: using guessed type int dword_140DC3184;
// 140DC3188: using guessed type int dword_140DC3188;
// 140DC318C: using guessed type int dword_140DC318C;

