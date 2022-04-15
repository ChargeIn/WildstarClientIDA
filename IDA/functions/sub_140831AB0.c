//----- (0000000140831AB0) ----------------------------------------------------
void sub_140831AB0()
{
	__int64 v0; // rdx
	__int64 v1; // rcx
	__int64 v2; // r13
	float i; // xmm6_4
	__int64 v4; // rdx
	__int64 v5; // rax
	float v6; // xmm0_4
	float v7; // xmm1_4
	__int64 v8; // r15
	unsigned int v9; // r12d
	unsigned int v10; // r14d
	__int64 v11; // rbx
	__int64 v12; // rbp
	unsigned int v13; // esi
	__int64 v14; // rdi
	__int64 v15; // rax
	__int64 v16; // rsi
	__int64 v17; // rbx
	int v18; // eax
	__int64 v19; // rax
	int v20; // edx
	__int64 j; // rsi
	__int64 v22; // rdi
	__int64 v23; // rbx
	__int64 v24; // [rsp+70h] [rbp+8h] BYREF
	__int64 v25; // [rsp+78h] [rbp+10h] BYREF

	v0 = qword_140C61CD0;
	v1 = qword_140C61CC8;
	v2 = 0i64;
	for (i = *(float*)(qword_140C61CC0 + 780);
		(unsigned int)v2 < (unsigned int)((qword_140C61CD0 - qword_140C61CC8) >> 3);
		v2 = (unsigned int)(v2 + 1))
	{
		v4 = *(_QWORD*)(v1 + 8 * v2);
		v5 = *(_QWORD*)(v4 + 864);
		v6 = *(float*)(v4 + 812);
		*(float*)(v4 + 1120) = v6;
		if (v5)
			v7 = *(float*)(v5 + 1120);
		else
			v7 = i;
		v8 = *(_QWORD*)(v4 + 8);
		for (*(float*)(v4 + 1120) = v6 * v7; v8; v8 = *(_QWORD*)(v8 + 8))
		{
			if (*(_DWORD*)(v8 + 76) == 1)
			{
				if (sub_140847C10(v8))
				{
					v9 = *(unsigned __int8*)(v8 + 464);
					v10 = 0;
					if (*(_BYTE*)(v8 + 464))
					{
						while (1)
						{
							v11 = qword_140C61CC8;
							v12 = 32i64 * v10;
							v13 = *(_DWORD*)(v8 + v12 + 216);
							if (qword_140C61CC8 == qword_140C61CD0)
							{
							LABEL_13:
								v15 = sub_140830F00(qword_140C61BA8, v13, 1);
								v16 = v15;
								if (v15)
								{
									v24 = v15;
									v17 = 0i64;
									sub_14085CF20(&v24, &v25);
									if (!v25 || (v17 = sub_140832DA0(&v25, 0)) != 0)
									{
										v18 = sub_14085CE90((__int64)&v24);
										v19 = sub_1408322F0(v24, v18, 0x400u);
										v14 = v19;
										if (v19)
										{
											*(_BYTE*)(v19 + 1124) &= ~8u;
											if (v17)
											{
												sub_140862BE0(v17 + 32);
												*(_QWORD*)(v14 + 864) = v17;
											}
											else
											{
												sub_140863C40((_DWORD*)qword_140C61CC0);
											}
											if (!sub_14085CFD0(&v24))
											{
												sub_1408631F0(v14 + 32);
												sub_140863880(v14 + 32);
											}
										}
									}
									else
									{
										v14 = 0i64;
									}
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
								}
								else
								{
									v14 = 0i64;
								}
							}
							else
							{
								while (1)
								{
									v14 = *(_QWORD*)v11;
									if ((unsigned int)sub_14085CF90((__int64*)(*(_QWORD*)v11 + 1088i64)) == v13
										&& *(_DWORD*)(v14 + 1096) != 2)
									{
										break;
									}
									v11 += 8i64;
									if (v11 == qword_140C61CD0)
										goto LABEL_13;
								}
							}
							*(_QWORD*)(v8 + v12 + 224) = v14;
							if (!v14)
								break;
							*(_BYTE*)(v14 + 1124) |= 1u;
							if (++v10 >= v9)
								goto LABEL_29;
						}
						*(_BYTE*)(v8 + 464) = v10;
					}
				}
			}
		LABEL_29:
			;
		}
		v0 = qword_140C61CD0;
		v1 = qword_140C61CC8;
	}
	v20 = ((v0 - v1) >> 3) - 1;
	for (j = v20; j >= 0; --j)
	{
		v22 = *(_QWORD*)(v1 + 8 * j);
		v23 = *(_QWORD*)(v22 + 8);
		if (v23)
		{
			do
			{
				if (*(_DWORD*)(v23 + 76) == 1)
					sub_140847480(v23, *(float*)(v22 + 1120));
				v23 = *(_QWORD*)(v23 + 8);
			} while (v23);
			v1 = qword_140C61CC8;
		}
		if ((*(_BYTE*)(v22 + 1124) & 2) != 0)
		{
			sub_140831E40(v22);
			v1 = qword_140C61CC8;
		}
	}
}
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

