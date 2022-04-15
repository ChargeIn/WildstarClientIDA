//----- (00000001405E5B90) ----------------------------------------------------
int* __fastcall sub_1405E5B90(__int64 a1, unsigned int a2)
{
	int v2; // eax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r13
	int* result; // rax
	int* v8; // rdi
	__int64 i; // rcx
	int* v10; // r12
	int v11; // r14d
	int* j; // rsi
	int v13; // r9d
	unsigned int v14; // edi
	__int64 v15; // rax
	unsigned int v16; // ebx
	bool v17; // zf
	int* v18; // rax
	int v19; // ebp
	__int64 v20; // rax
	int v21; // ecx
	unsigned int v22; // edi
	__int64 v23; // [rsp+30h] [rbp-248h]
	int v24; // [rsp+40h] [rbp-238h] BYREF
	int v25[37]; // [rsp+48h] [rbp-230h] BYREF
	int v26[85]; // [rsp+DCh] [rbp-19Ch] BYREF

	v2 = dword_140DC352C;
	if ((dword_140DC352C & 1) == 0)
	{
		v2 = dword_140DC352C | 1;
		dword_140DC3534 = 0;
		dword_140DC352C |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC353C = 0;
		dword_140DC352C = v2 | 2;
	}
	v4 = sub_140245C00(a2);
	v6 = v4;
	if (!v4)
		return 0i64;
	v23 = sub_1405BE150(v5, *(_DWORD*)(v4 + 8));
	if (!v23)
		return 0i64;
	sub_1400B52A0((__int64)v25);
	sub_1407E4830(&v24, 0i64, 0x1F0ui64);
	sub_1407E4830(v25, 0i64, 0x138ui64);
	sub_1407E4830(v26, 0i64, 0x90ui64);
	v8 = v26;
	for (i = 15i64; i; --i)
		*v8++ = 197;
	result = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v6 + 12), &v24);
	v10 = result;
	if (result)
	{
		v11 = 0;
		for (j = (int*)(v6 + 36); ; ++j)
		{
			v13 = *j;
			if (*j)
			{
				v14 = j[5];
				if (v14)
				{
					if (!*(_DWORD*)(a1 + 544)
						|| (v15 = *(_QWORD*)(a1 + 608), *(_DWORD*)v15 != 1)
						|| (v16 = *(_DWORD*)(v15 + 8), v17 = v16 == 0, !v16)
						&& (!*(_QWORD*)(v15 + 24) || (v16 = *(_DWORD*)(*(_QWORD*)(v15 + 16) + 16i64), v17 = v16 == 0, !v16)))
					{
						v16 = sub_14079E710(*(_QWORD*)(a1 + 72), *(_DWORD*)(v6 + 8), v10[81], v13);
						v17 = v16 == 0;
					}
					if (v17)
						v16 = v13;
					v18 = sub_1400B5DF0(qword_140C658F0, v16, 0i64);
					if (v18)
					{
						v19 = sub_1405E6300(a1, 6, *(_DWORD*)(v6 + 8), v10[81], v18[81]);
						if ((*(_BYTE*)(v23 + 16) & 4) != 0)
						{
							if (dword_140DC3534)
							{
								LODWORD(v20) = dword_140DC3530;
							}
							else
							{
								dword_140DC3534 = 1;
								v20 = sub_140200220(0x4E9u);
								if (v20)
								{
									LODWORD(v20) = *(_DWORD*)(v20 + 4);
									dword_140DC3530 = v20;
								}
								else
								{
									dword_140DC3530 = 0;
								}
							}
						}
						else if (dword_140DC353C)
						{
							LODWORD(v20) = dword_140DC3538;
						}
						else
						{
							dword_140DC353C = 1;
							v20 = sub_140200220(0x4E9u);
							if (v20)
							{
								LODWORD(v20) = *(_DWORD*)(v20 + 8);
								dword_140DC3538 = v20;
							}
							else
							{
								dword_140DC3538 = 0;
							}
						}
						v21 = v14;
						if ((unsigned int)v20 < v14)
							v21 = v20;
						v22 = v14 <= v21 + v19 ? v21 : v14 - v19;
						if (v22 > (unsigned int)sub_1403AC840(qword_140C65898 + 160, 1030, v16))
							break;
					}
				}
			}
			if ((unsigned int)++v11 >= 5)
				return (int*)1;
		}
		return 0i64;
	}
	return result;
}
// 1405E5BF9: variable 'v5' is possibly undefined
// 1405E5D16: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC352C: using guessed type int dword_140DC352C;
// 140DC3530: using guessed type int dword_140DC3530;
// 140DC3534: using guessed type int dword_140DC3534;
// 140DC3538: using guessed type int dword_140DC3538;
// 140DC353C: using guessed type int dword_140DC353C;
// 1405E5B90: using guessed type int var_230[37];
// 1405E5B90: using guessed type int var_19C[85];

