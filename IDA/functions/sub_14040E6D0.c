//----- (000000014040E6D0) ----------------------------------------------------
__int64 __fastcall sub_14040E6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8* a5, int* a6)
{
	int* v6; // r15
	unsigned int v9; // ebp
	BOOL v10; // ecx
	unsigned int v11; // edi
	_BOOL8 v12; // r13
	unsigned __int8* v13; // rsi
	int* i; // r14
	int v15; // eax
	unsigned int v16; // ebx
	unsigned __int8 v17; // bl
	__int64 v18; // rax
	__int64 v21; // [rsp+78h] [rbp+30h]

	v6 = a6;
	if (a6)
	{
		if (a2)
		{
			sub_1407E4830(a6, 0i64, 0x28ui64);
			if (a4)
			{
				if (a3)
				{
					v9 = 0;
					if (a5)
						v10 = (sub_14040BDB0(a5) & 0xFEFFFFFFFFFFFFFFui64) != 0;
					else
						v10 = 0;
					v11 = 0;
					v12 = v10;
					v13 = a5;
					for (i = (int*)(a4 + 24); ; ++i)
					{
						v15 = *(i - 5);
						LODWORD(v21) = v15;
						HIDWORD(v21) = *i;
						if (v15 < 0)
							goto LABEL_30;
						if (v15 > 1)
						{
							if (v15 != 2)
							{
								if (v15 == 4)
								{
									if (a5 && *v13)
										v16 = *v13 - 1;
									else
										v16 = 197;
									if (sub_14040F120(v16))
									{
										LODWORD(v21) = 1;
										HIDWORD(v21) = v16;
									}
									else
									{
										LODWORD(v21) = 0;
										if (v12)
											v9 = 80;
									}
									goto LABEL_32;
								}
							LABEL_30:
								LODWORD(v21) = 0;
							LABEL_31:
								v9 = 112;
								goto LABEL_32;
							}
							if (a5)
								v17 = *v13;
							else
								v17 = 0;
							v18 = sub_1400B5F60(a1, *i);
							if (v18 && v17 && (unsigned __int64)v17 <= *(_QWORD*)(v18 + 16))
							{
								v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 8i64 * ((unsigned int)v17 - 1)) + 12i64);
							}
							else
							{
								LODWORD(v21) = 0;
								if (v12)
									goto LABEL_31;
							}
						}
					LABEL_32:
						++v11;
						v6 += 2;
						*((_QWORD*)v6 - 1) = v21;
						++v13;
						if (v11 >= 5)
							return v9;
					}
				}
			}
		}
	}
	return 1i64;
}
// 14040E7A6: conditional instruction was optimized away because edi.4<5u
// 14040E7F4: conditional instruction was optimized away because edi.4<5u

