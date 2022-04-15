//----- (00000001401CC200) ----------------------------------------------------
__int64 __fastcall sub_1401CC200(__int64 a1, __int64 a2, int a3)
{
	int v3; // ebp
	int v4; // r11d
	int v5; // r10d
	__int64 result; // rax
	int v7; // ecx
	int v8; // r9d
	unsigned __int16* v9; // r14
	__int64 v10; // r15
	__int64 v11; // rsi
	__int64 v12; // rbx
	int v13; // r11d
	int v14; // ecx
	unsigned __int16 v15; // r9
	__int64 v16; // r8
	int v17; // edx
	int v18; // r11d
	int v19; // ecx
	unsigned __int16 v20; // r9
	__int64 v21; // r8
	int v22; // edx
	int v23; // r11d
	int v24; // ecx
	unsigned __int16 v25; // r9
	__int64 v26; // r8
	int v27; // edx
	int v28; // ecx
	__int64 v29; // r8
	int v30; // edx
	int v31; // ecx
	int v32; // ecx
	int v33; // r11d
	unsigned __int16 v34; // r9
	__int64 v35; // r8
	int v36; // edx
	int v37; // ecx
	__int64 v38; // r8
	int v39; // edx
	int v40; // r11d
	unsigned __int16 v41; // r9
	__int64 v42; // r8
	int v43; // edx
	int v44; // ecx
	__int64 v45; // r8
	int v46; // edx

	v3 = *(unsigned __int16*)(a2 + 2);
	v4 = -1;
	v5 = 0;
	result = a1;
	v7 = 7;
	v8 = 4;
	if (!*(_WORD*)(a2 + 2))
	{
		v7 = 138;
		v8 = 3;
	}
	if (a3 >= 0)
	{
		v9 = (unsigned __int16*)(a2 + 6);
		v10 = a3 + 1i64;
		do
		{
			++v5;
			v11 = v3;
			v3 = *v9;
			if (v5 >= v7 || (_DWORD)v11 != v3)
			{
				if (v5 >= v8)
				{
					if ((_DWORD)v11)
					{
						if ((_DWORD)v11 != v4)
						{
							v18 = *(unsigned __int16*)(result + 4 * v11 + 2726);
							v19 = *(_DWORD*)(result + 5908);
							if (v19 <= 16 - v18)
							{
								*(_WORD*)(result + 5904) |= *(_WORD*)(result + 4 * v11 + 2724) << v19;
							}
							else
							{
								v20 = *(_WORD*)(result + 4 * v11 + 2724);
								v21 = *(unsigned int*)(result + 40);
								*(_WORD*)(result + 5904) |= v20 << v19;
								*(_BYTE*)(v21 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
								*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
								v22 = *(_DWORD*)(result + 5908);
								++* (_DWORD*)(result + 40);
								v19 = v22 - 16;
								*(_WORD*)(result + 5904) = v20 >> (16 - v22);
							}
							LOWORD(v5) = v5 - 1;
							*(_DWORD*)(result + 5908) = v18 + v19;
						}
						v23 = *(unsigned __int16*)(result + 2790);
						v24 = *(_DWORD*)(result + 5908);
						if (v24 <= 16 - v23)
						{
							*(_WORD*)(result + 5904) |= *(_WORD*)(result + 2788) << v24;
							v28 = v23 + v24;
						}
						else
						{
							v25 = *(_WORD*)(result + 2788);
							v26 = *(unsigned int*)(result + 40);
							*(_WORD*)(result + 5904) |= v25 << v24;
							*(_BYTE*)(v26 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
							*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
							v27 = *(_DWORD*)(result + 5908);
							++* (_DWORD*)(result + 40);
							v28 = v27 + v23 - 16;
							*(_WORD*)(result + 5904) = v25 >> (16 - v27);
						}
						*(_DWORD*)(result + 5908) = v28;
						if (v28 <= 14)
						{
							*(_WORD*)(result + 5904) |= ((_WORD)v5 - 3) << v28;
							v31 = v28 + 2;
						}
						else
						{
							v29 = *(unsigned int*)(result + 40);
							*(_WORD*)(result + 5904) |= ((_WORD)v5 - 3) << v28;
							*(_BYTE*)(v29 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
							*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
							v30 = *(_DWORD*)(result + 5908);
							++* (_DWORD*)(result + 40);
							v31 = v30 - 14;
							*(_WORD*)(result + 5904) = (unsigned __int16)(v5 - 3) >> (16 - v30);
						}
					}
					else
					{
						v32 = *(_DWORD*)(result + 5908);
						if (v5 > 10)
						{
							v40 = *(unsigned __int16*)(result + 2798);
							if (v32 <= 16 - v40)
							{
								*(_WORD*)(result + 5904) |= *(_WORD*)(result + 2796) << v32;
								v44 = v40 + v32;
							}
							else
							{
								v41 = *(_WORD*)(result + 2796);
								v42 = *(unsigned int*)(result + 40);
								*(_WORD*)(result + 5904) |= v41 << v32;
								*(_BYTE*)(v42 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
								*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
								v43 = *(_DWORD*)(result + 5908);
								++* (_DWORD*)(result + 40);
								v44 = v43 + v40 - 16;
								*(_WORD*)(result + 5904) = v41 >> (16 - v43);
							}
							*(_DWORD*)(result + 5908) = v44;
							if (v44 <= 9)
							{
								*(_WORD*)(result + 5904) |= ((_WORD)v5 - 11) << v44;
								v31 = v44 + 7;
							}
							else
							{
								v45 = *(unsigned int*)(result + 40);
								*(_WORD*)(result + 5904) |= ((_WORD)v5 - 11) << v44;
								*(_BYTE*)(v45 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
								*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
								v46 = *(_DWORD*)(result + 5908);
								++* (_DWORD*)(result + 40);
								v31 = v46 - 9;
								*(_WORD*)(result + 5904) = (unsigned __int16)(v5 - 11) >> (16 - v46);
							}
						}
						else
						{
							v33 = *(unsigned __int16*)(result + 2794);
							if (v32 <= 16 - v33)
							{
								*(_WORD*)(result + 5904) |= *(_WORD*)(result + 2792) << v32;
								v37 = v33 + v32;
							}
							else
							{
								v34 = *(_WORD*)(result + 2792);
								v35 = *(unsigned int*)(result + 40);
								*(_WORD*)(result + 5904) |= v34 << v32;
								*(_BYTE*)(v35 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
								*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
								v36 = *(_DWORD*)(result + 5908);
								++* (_DWORD*)(result + 40);
								v37 = v36 + v33 - 16;
								*(_WORD*)(result + 5904) = v34 >> (16 - v36);
							}
							*(_DWORD*)(result + 5908) = v37;
							if (v37 <= 13)
							{
								*(_WORD*)(result + 5904) |= ((_WORD)v5 - 3) << v37;
								v31 = v37 + 3;
							}
							else
							{
								v38 = *(unsigned int*)(result + 40);
								*(_WORD*)(result + 5904) |= ((_WORD)v5 - 3) << v37;
								*(_BYTE*)(v38 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
								*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
								v39 = *(_DWORD*)(result + 5908);
								++* (_DWORD*)(result + 40);
								v31 = v39 - 13;
								*(_WORD*)(result + 5904) = (unsigned __int16)(v5 - 3) >> (16 - v39);
							}
						}
					}
					*(_DWORD*)(result + 5908) = v31;
				}
				else
				{
					v12 = result + 4 * v11;
					do
					{
						v13 = *(unsigned __int16*)(result + 4 * v11 + 2726);
						v14 = *(_DWORD*)(result + 5908);
						if (v14 <= 16 - v13)
						{
							*(_WORD*)(result + 5904) |= *(_WORD*)(v12 + 2724) << v14;
						}
						else
						{
							v15 = *(_WORD*)(v12 + 2724);
							v16 = *(unsigned int*)(result + 40);
							*(_WORD*)(result + 5904) |= v15 << v14;
							*(_BYTE*)(v16 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
							*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
							v17 = *(_DWORD*)(result + 5908);
							++* (_DWORD*)(result + 40);
							v14 = v17 - 16;
							*(_WORD*)(result + 5904) = v15 >> (16 - v17);
						}
						*(_DWORD*)(result + 5908) = v13 + v14;
						--v5;
					} while (v5);
				}
				v5 = 0;
				v4 = v11;
				if (v3)
				{
					if ((_DWORD)v11 == v3)
					{
						v7 = 6;
						v8 = 3;
					}
					else
					{
						v7 = 7;
						v8 = 4;
					}
				}
				else
				{
					v7 = 138;
					v8 = 3;
				}
			}
			v9 += 2;
			--v10;
		} while (v10);
	}
	return result;
}

