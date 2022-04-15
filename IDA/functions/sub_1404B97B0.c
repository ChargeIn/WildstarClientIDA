//----- (00000001404B97B0) ----------------------------------------------------
void __fastcall sub_1404B97B0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // r14
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // rdx
	__int64 v8; // rsi
	__int64* v9; // rcx
	unsigned __int64 v10; // rdi
	__int64 v11; // r8
	__int64 v12; // rbx
	__int64* v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rdi
	__int128 v17; // xmm0
	int v18; // eax
	__int64 v19; // [rsp+20h] [rbp-59h] BYREF
	__int128* v20; // [rsp+28h] [rbp-51h]
	__int64* v21; // [rsp+30h] [rbp-49h]
	__int64 v22; // [rsp+38h] [rbp-41h]
	__int128 v23; // [rsp+40h] [rbp-39h] BYREF
	__int64 v24[7]; // [rsp+50h] [rbp-29h] BYREF
	int v25; // [rsp+8Ch] [rbp+13h]
	__int64 v26; // [rsp+E0h] [rbp+67h] BYREF

	v26 = a1;
	v3 = sub_1405B1510(&qword_140C7DFB0);
	v4 = v3;
	if (v3)
	{
		v5 = *(_QWORD*)(v3 + 232);
		if (!v5 || !*(_DWORD*)(v4 + 272))
			v5 = 0i64;
		v6 = *(_DWORD*)(v5 + 184);
		if ((v6 & 0xFFFFFFFA) == 0 && v6 != 4)
		{
			v7 = 0i64;
			v20 = 0i64;
			v8 = 0i64;
			v21 = 0i64;
			v22 = 0i64;
			if (*(_QWORD*)(v4 + 440))
			{
				v9 = 0i64;
				v21 = 0i64;
				v10 = 0i64;
				if (*(_QWORD*)(v4 + 448))
				{
					do
					{
						v11 = *(_QWORD*)(*(_QWORD*)(v4 + 456) + 8 * v10);
						if (v11)
						{
							do
							{
								v12 = *(_QWORD*)(v11 + 8);
								v13 = *(__int64**)(v11 + 24);
								if (v13)
								{
									if (v9 == (__int64*)v7)
									{
										sub_1400B4C50(&v19, v9, v13);
										v7 = v22;
										v9 = v21;
									}
									else
									{
										if (v9)
										{
											*v9 = *v13;
											v9[1] = v13[1];
										}
										v9 += 2;
										v21 = v9;
									}
								}
								v11 = v12;
							} while (v12);
						}
						++v10;
					} while (v10 < *(_QWORD*)(v4 + 448));
					v8 = (__int64)v20;
				}
				v14 = ((__int64)v9 - v8) >> 4;
				if ((_DWORD)v14)
				{
					v15 = v8;
					v16 = (unsigned int)v14;
					do
					{
						if (*(_QWORD*)v15 == a2)
						{
							LODWORD(v23) = 0;
							*((_QWORD*)&v23 + 1) = 0i64;
							v19 = 0i64;
							v20 = 0i64;
							v21 = 0i64;
							sub_1407E4830((int*)v24, 0i64, 0x58ui64);
							v17 = *(_OWORD*)(v4 + 8);
							v19 = 0x100000002i64;
							v24[0] = a2;
							v18 = *(_DWORD*)(v15 + 8);
							v23 = v17;
							v25 = v18;
							v20 = &v23;
							v21 = &v26;
							LODWORD(v26) = 0;
							sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)&v19);
						}
						v15 += 16i64;
						--v16;
					} while (v16);
				}
				if (v8)
					sub_14018B900(v8, 0);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 1404B97B0: using guessed type __int64 var_80[7];

