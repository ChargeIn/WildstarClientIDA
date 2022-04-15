//----- (00000001408364E0) ----------------------------------------------------
__m128 __fastcall sub_1408364E0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
	__int64 v8; // rcx
	float v9; // xmm6_4
	char v10; // r12
	__int64 v11; // rbx
	__int128 i; // xmm7
	unsigned int v13; // edi
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64* v17; // rbx
	__int64 v18; // rax
	__int64* v19; // rsi
	__int64 v20; // rax
	__int64 v21; // rax
	unsigned int v22; // r8d
	float v23; // [rsp+88h] [rbp+20h] BYREF

	if (!a4)
		goto LABEL_5;
	v8 = *(_QWORD*)(a1 + 8i64 * (a4 % 0xC1));
	if (!v8)
		goto LABEL_5;
	while (*(_DWORD*)v8 != a4)
	{
		v8 = *(_QWORD*)(v8 + 8);
		if (!v8)
			goto LABEL_5;
	}
	v17 = (__int64*)(v8 + 24);
	v18 = sub_140834F40((__int64*)(v8 + 24), a3);
	if (v18 || a3 && (v18 = sub_140834F40(v17, 0i64)) != 0)
	{
		v9 = *(float*)(v18 + 8);
		v10 = 1;
	}
	else
	{
	LABEL_5:
		v9 = v23;
		v10 = 0;
	}
	v11 = *(_QWORD*)(a2 + 40);
	for (i = 0i64; v11 != *(_QWORD*)(a2 + 48); v11 += 24i64)
	{
		if (a4 && *(_DWORD*)(v11 + 4) != a4)
			continue;
		if (!v10)
		{
			if (a4)
			{
				v22 = *(_DWORD*)(v11 + 4);
				v15 = *(_QWORD*)(a1 + 8i64 * (v22 % 0xC1));
				if (v15)
				{
					while (*(_DWORD*)v15 != v22)
					{
						v15 = *(_QWORD*)(v15 + 8);
						if (!v15)
							goto LABEL_17;
					}
					goto LABEL_34;
				}
			}
			else
			{
				v13 = *(_DWORD*)(v11 + 4);
				v14 = *(_QWORD*)(a1 + 8i64 * (v13 % 0xC1));
				if (v14)
				{
					while (*(_DWORD*)v14 != v13)
					{
						v14 = *(_QWORD*)(v14 + 8);
						if (!v14)
							goto LABEL_14;
					}
					v19 = (__int64*)(v14 + 24);
					v20 = sub_140834F40((__int64*)(v14 + 24), a3);
					if (v20)
					{
						v9 = *(float*)(v20 + 8);
						goto LABEL_18;
					}
					if (a3)
					{
						v21 = sub_140834F40(v19, 0i64);
						if (v21)
						{
							v9 = *(float*)(v21 + 8);
							goto LABEL_18;
						}
					}
				}
			LABEL_14:
				v15 = *(_QWORD*)(a1 + 8i64 * (v13 % 0xC1));
				if (v15)
				{
					while (*(_DWORD*)v15 != v13)
					{
						v15 = *(_QWORD*)(v15 + 8);
						if (!v15)
							goto LABEL_17;
					}
				LABEL_34:
					v9 = *(float*)(v15 + 16);
					goto LABEL_18;
				}
			}
		LABEL_17:
			v9 = 0.0;
		}
	LABEL_18:
		*(float*)&i = *(float*)&i + sub_140835CA0((_DWORD*)(v11 + 8), v9, 0, &v23);
	}
	return (__m128)i;
}
// 14083664D: conditional instruction was optimized away because rcx.8!=0
// 140836693: conditional instruction was optimized away because rcx.8!=0
// 140836716: conditional instruction was optimized away because rcx.8!=0

