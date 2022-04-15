//----- (00000001404880F0) ----------------------------------------------------
__int64 __fastcall sub_1404880F0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rdx
	__m128* v5; // rax
	unsigned __int64 v6; // r9
	int* v7; // rbp
	__int64 v8; // r15
	__int64 v9; // r13
	int* v10; // r14
	unsigned __int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rbx
	int v15; // eax
	__int64 v16; // rax
	int v17; // edi
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rax
	int v21; // edi
	int* v22; // rax
	int* v23; // rbx
	__int64 v24; // rax
	unsigned int v25; // ebx
	__m128* v27; // [rsp+40h] [rbp-48h]
	unsigned __int64 v28; // [rsp+48h] [rbp-40h]
	unsigned int v31; // [rsp+A8h] [rbp+20h] BYREF

	v3 = a1;
	if (!qword_140C65898)
		return 0i64;
	v5 = *(__m128**)(qword_140C65898 + 25744);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 16);
	if (!v6)
		return 0i64;
	v27 = v5 + 286;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v31 = *(_DWORD*)(qword_140C65898 + 29932);
	v11 = 0i64;
	do
	{
		v12 = *(_QWORD*)(v3 + 8);
		v13 = 0i64;
		v14 = *(_QWORD*)(v12 + 8 * v11);
		v28 = v11 + 1;
		if (v11 + 1 < v6)
			v13 = *(_QWORD*)(v12 + 8 * v11 + 8);
		if ((unsigned int)sub_140487BC0(v14))
		{
			v15 = a2;
			if (!_bittest(&v15, v11))
			{
				if (*(_QWORD*)(v14 + 16))
				{
					if (sub_140487390(v14, v31))
					{
						v20 = *(_QWORD*)(v14 + 32);
						if (a3)
							v21 = *(_DWORD*)(v20 + 8);
						else
							v21 = *(_DWORD*)(v20 + 4);
						v22 = sub_14018DB00((__int64)v7, v8 + 1, 4i64);
						v22[v8] = v21;
						v23 = v22;
						if (v7 != v22)
						{
							sub_1407DB590(v22, v7, 4 * v8);
							if (v7)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
							v7 = v23;
						}
						++v8;
					}
					else if (v13 && (*(_BYTE*)(*(_QWORD*)(v13 + 32) + 16i64) & 1) == 0 && (unsigned int)sub_140487B40(v13, v27))
					{
						v24 = *(_QWORD*)(v14 + 32);
						if (a3)
							v25 = *(_DWORD*)(v24 + 8);
						else
							v25 = *(_DWORD*)(v24 + 4);
						goto LABEL_40;
					}
				}
				else
				{
					v16 = *(_QWORD*)(v14 + 32);
					if (a3)
						v17 = *(_DWORD*)(v16 + 8);
					else
						v17 = *(_DWORD*)(v16 + 4);
					v18 = sub_14018DB00((__int64)v10, v9 + 1, 4i64);
					v18[v9] = v17;
					v19 = v18;
					if (v10 != v18)
					{
						sub_1407DB590(v18, v10, 4 * v9);
						if (v10)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
						v10 = v19;
					}
					++v9;
				}
			}
		}
		v3 = a1;
		v11 = v28;
		v6 = *(_QWORD*)(a1 + 16);
	} while (v28 < v6);
	v31 = 0;
	if (v8)
	{
		if (*(_QWORD*)(qword_140C65898 + 120))
			sub_1403F7E50(qword_140C65898, (unsigned int*)v7, v8, &v31, 0i64, 0, 0i64);
	}
	else if (*(_QWORD*)(qword_140C65898 + 120))
	{
		sub_1403F7E50(qword_140C65898, (unsigned int*)v10, v9, &v31, 0i64, 0, 0i64);
	}
	v25 = v31;
LABEL_40:
	if (v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	if (v7)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	return v25;
}
// 140488180: conditional instruction was optimized away because r9.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

