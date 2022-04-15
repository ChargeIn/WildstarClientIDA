//----- (00000001402B2C70) ----------------------------------------------------
__int64 __fastcall sub_1402B2C70(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int v5; // ecx
	unsigned __int64 v6; // rbx
	int v7; // ecx
	int v8; // ecx
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // r8
	unsigned __int64 v14; // r9
	unsigned __int64 i; // rax
	bool v16; // zf
	unsigned __int64 v17; // rax
	unsigned __int64 v18; // rdx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rbx
	unsigned __int64 v22; // rdi
	__int64 v23; // rax
	int* v24; // rax
	int* v25; // rcx
	__int64 v26; // rax
	unsigned __int64 v27; // [rsp+58h] [rbp+10h] BYREF
	unsigned __int64 v28; // [rsp+60h] [rbp+18h] BYREF

	v3 = *(int*)(a2 + 48);
	if ((unsigned __int64)(v3 - 1) > 0x72 || sub_1402B27D0(v3))
		return 2147942487i64;
	v5 = *(_DWORD*)(a2 + 52);
	v6 = *(_QWORD*)(a2 + 32);
	v27 = v6;
	v7 = v5 - 2;
	if (v7)
	{
		v8 = v7 - 1;
		if (v8)
		{
			if (v8 != 1)
				return 2147942450i64;
			if (*(_QWORD*)a2)
			{
				v10 = *(_QWORD*)(a2 + 8);
				if (v10)
				{
					v11 = *(_QWORD*)(a2 + 16);
					if (v11)
					{
						if (*(_QWORD*)(a2 + 24) == 1i64 && sub_1402C1120(*(_QWORD*)a2, v10, v11, (__int64*)&v27))
						{
							v6 = v27;
							goto LABEL_50;
						}
					}
				}
			}
			return 2147942487i64;
		}
		v12 = *(_QWORD*)a2;
		if (*(_QWORD*)a2)
		{
			v13 = *(_QWORD*)(a2 + 8);
			if (v13)
			{
				if (*(_QWORD*)(a2 + 16) == 1i64)
				{
					v14 = *(_QWORD*)(a2 + 24);
					if (v14)
					{
						if ((*(_DWORD*)(a2 + 40) & 4) == 0 || v14 == 6 * (v14 / 6))
						{
							if (v6 <= 1)
							{
								v16 = v6 == 0;
								v6 = 1i64;
								if (v16)
								{
									while (1)
									{
										while (v13 > 1)
										{
											v13 >>= 1;
											if (v12 > 1)
												v12 >>= 1;
											++v6;
										}
										if (v12 <= 1)
											break;
										v12 >>= 1;
										++v6;
									}
								}
								goto LABEL_50;
							}
							for (i = 1i64; ; ++i)
							{
								if (v13 > 1)
								{
									v13 >>= 1;
									if (v12 <= 1)
										continue;
								}
								else if (v12 <= 1)
								{
									if (v6 > i)
										return 2147942487i64;
									goto LABEL_50;
								}
								v12 >>= 1;
							}
						}
					}
				}
			}
		}
		return 2147942487i64;
	}
	v17 = *(_QWORD*)a2;
	if (!*(_QWORD*)a2 || *(_QWORD*)(a2 + 8) != 1i64 || *(_QWORD*)(a2 + 16) != 1i64 || !*(_QWORD*)(a2 + 24))
		return 2147942487i64;
	if (v6 <= 1)
	{
		if (v6)
		{
			v6 = 1i64;
		}
		else
		{
			v6 = 1i64;
			while (v17 > 1)
			{
				v17 >>= 1;
				++v6;
			}
		}
		goto LABEL_50;
	}
	v18 = 1i64;
	while (v17 > 1)
	{
		v17 >>= 1;
		++v18;
	}
	if (v6 > v18)
		return 2147942487i64;
LABEL_50:
	sub_1402B34D0((_QWORD*)a1);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 16);
	v19 = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 48) = v6;
	*(_QWORD*)(a1 + 40) = v19;
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 48);
	v20 = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 68) = v20;
	if (v20 < 2)
	{
		v21 = 0i64;
		v22 = 0i64;
	}
	else
	{
		sub_1402B2830(a1 + 16, 0, &v28, &v27, v20);
		v21 = v27;
		v22 = v28;
	}
	v23 = 48 * v22;
	if (!is_mul_ok(v22, 0x30ui64))
		v23 = -1i64;
	v24 = sub_14018B280(v23, 1u);
	*(_QWORD*)(a1 + 72) = v24;
	if (!v24)
		return 2147942414i64;
	*(_QWORD*)a1 = v22;
	sub_1407E4830(v24, 0i64, 48 * v22);
	v25 = sub_14018B280(v21, 1u);
	*(_QWORD*)(a1 + 80) = v25;
	if (!v25)
	{
		sub_1402B34D0((_QWORD*)a1);
		return 2147942414i64;
	}
	v26 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 8) = v21;
	if (sub_1402B29B0((unsigned __int64)v25, v21, a1 + 16, 0, v26, v22))
		return 0i64;
	sub_1402B34D0((_QWORD*)a1);
	return 2147500037i64;
}
// 1402B2E27: conditional instruction was optimized away because rcx.8==1
// 1402B2E67: conditional instruction was optimized away because rcx.8==1

