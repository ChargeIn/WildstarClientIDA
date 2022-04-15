//----- (000000014039EFF0) ----------------------------------------------------
void __fastcall sub_14039EFF0(__int64 a1, int a2, int a3)
{
	__int64 v6; // rax
	int v7; // esi
	int v8; // r12d
	int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // r13
	int v14; // edi
	__int64 v15; // rdi
	int v16; // r10d
	int v17; // ecx
	BOOL v18; // edx
	__int64 v19; // rcx
	__int64 v20; // rbp
	int v21; // eax
	__int64 v22; // r14
	__int64 v23; // r15
	__int64 v24; // rax
	__int64 v25; // rbp
	__int64 v26; // rax
	__int64 v27; // r8
	__int64 v28; // r8
	int v29; // eax
	__int64 v30; // rax
	unsigned int v31; // ecx
	__int64 v32; // rax
	unsigned int* v33; // rsi
	__int64 v34; // r14
	__int64 v35; // rax
	__int64 v36; // rdi
	__int64 v37; // rbp
	__int64 v38; // rax
	int v39[7]; // [rsp+30h] [rbp-108h] BYREF
	int v40; // [rsp+4Ch] [rbp-ECh]
	int v41; // [rsp+54h] [rbp-E4h]
	int v42; // [rsp+88h] [rbp-B0h]
	int v43; // [rsp+140h] [rbp+8h]
	int v44; // [rsp+158h] [rbp+20h] BYREF

	if (!*(_QWORD*)(a1 + 120))
		return;
	v6 = *(_QWORD*)(a1 + 25744);
	if (!v6 || !*(_DWORD*)(v6 + 3408) || *(_DWORD*)(a1 + 30936) || *(_DWORD*)(a1 + 30168))
		return;
	v7 = a2;
	v8 = 0;
	v9 = 0;
	v43 = 0;
	if (*(_DWORD*)(a1 + 31000) || (v10 = *(_QWORD*)(a1 + 29080)) != 0 && *(_DWORD*)(v10 + 80))
	{
		v7 = 1;
	LABEL_31:
		v43 = v7;
		v8 = v7;
		goto LABEL_32;
	}
	if (sub_14039E1A0(a1) || !a3)
		goto LABEL_31;
	if (sub_1404DACF0(a1))
	{
		if (!sub_1404DAD90(a1))
		{
			v7 = 3;
			v9 = 3;
			v43 = 3;
		}
	}
	else if (sub_1404DAD90(a1))
	{
		v9 = 4;
		v43 = 4;
		v7 = 4;
	}
	if (dword_140C89AA0
		|| sub_1404DAAC0(a1)
		|| *(_DWORD*)(a1 + 28856)
		|| sub_1404DAF50(a1) && sub_1404DAEB0(a1, 0) && !(unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)))
	{
		if (!sub_1404DAB80(a1))
		{
			v7 = 1;
			goto LABEL_26;
		}
	}
	else if (sub_1404DAB80(a1))
	{
		v7 = 2;
	LABEL_26:
		v8 = v7;
	}
	if (!v9 && !v8)
		goto LABEL_31;
LABEL_32:
	if (*(_QWORD*)(a1 + 120) && *(_QWORD*)(a1 + 25744) && (unsigned int)sub_14045E630(*(_QWORD*)(a1 + 25744)))
	{
		if (*(_QWORD*)(v11 + 856) && !*(_QWORD*)(v11 + 1224))
		{
			if (a3)
				sub_14039F600(a1, v7);
			else
				sub_14039F600(a1, a2);
		}
		return;
	}
	if (sub_14039E1A0(a1))
	{
		if ((unsigned int)(a2 - 1) <= 1)
			return;
	}
	else
	{
		v12 = *(_QWORD*)(a1 + 25744);
		if (*(_DWORD*)(v12 + 4232) || (*(_DWORD*)(v12 + 4208) & 0x100) == 0)
			return;
	}
	if (!a2)
	{
		*(_DWORD*)(a1 + 30936) = 0;
		return;
	}
	v13 = sub_14039EF50(a1, v7);
	if (v13)
	{
		v14 = 0;
		if (*(_QWORD*)(a1 + 31016))
		{
			sub_1407E4830(v39, 0i64, 0xC8ui64);
			v15 = *(_QWORD*)(a1 + 120);
			v16 = **(_DWORD**)(v13 + 112);
			v17 = *(_DWORD*)(v15 + 8);
			v42 = 1;
			v40 = v17;
			v39[0] = v16;
			if (!v16)
				goto LABEL_83;
			if (v15)
			{
				v18 = *(_QWORD*)(qword_140C65898 + 120) == v15 || *(_QWORD*)(qword_140C65898 + 25744) == v15;
				v19 = 0i64;
				if (v18)
					v19 = qword_140C65898;
				if (v19 && sub_1405A5B90(v19, v16))
					goto LABEL_59;
			}
			if (sub_1407A0FD0(qword_140C65B70, v16))
			{
			LABEL_59:
				if (v15)
					v41 = *(_DWORD*)(v15 + 8);
				v20 = qword_140C65B70;
				v21 = sub_1403AE8C0(qword_140C65B70, (__int64)v39, 0i64, 0i64, qword_140C659A0, 0);
				v14 = v21;
				if (!v21 || v21 == 317)
				{
					v22 = sub_1403D90D0(qword_140C65898, v40);
					v23 = sub_1403D90D0(qword_140C65898, v41);
					if (v22)
					{
						v24 = sub_1403ACD90(v20, v39[0], v22);
						v25 = v24;
						if (v24)
						{
							v26 = *(_QWORD*)(v24 + 112);
							v27 = *(unsigned int*)(v26 + 360);
							if (!(_DWORD)v27
								|| *(_QWORD*)(v25 + 64) && (*(_BYTE*)(v26 + 264) & 2) != 0
								|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v22,
									v27,
									v23,
									0i64,
									0))
							{
								v28 = *(unsigned int*)(*(_QWORD*)(v25 + 112) + 364i64);
								if ((_DWORD)v28
									&& v23
									&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
										qword_140C659A0,
										v23,
										v28,
										v22,
										0i64,
										0))
								{
									v14 = 281;
								}
							}
							else
							{
								v14 = 151;
							}
						}
						else
						{
							v14 = 4;
						}
					}
					else
					{
						v14 = 30;
					}
				}
				if (!v14 || v14 == 317)
					goto LABEL_78;
			}
			else
			{
			LABEL_83:
				v14 = 4;
			}
			sub_1403A12A0(a1, v14, v13, 0);
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "DashCastFail", &unk_1409D0EFE);
			return;
		}
	LABEL_78:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "DashCastSuccess", byte_1409D0EFF);
		v29 = dword_140C636A8;
		*(_QWORD*)(a1 + 30936) = 1i64;
		*(_DWORD*)(a1 + 30944) = v29;
		*(_DWORD*)(a1 + 30952) = v8;
		*(_DWORD*)(a1 + 30948) = v43;
		if (v14 != 317)
			sub_14046AFC0(*(_QWORD*)(a1 + 120), v13, 0i64);
		v44 = v7;
		sub_1403F4900(a1, 0xDEu, (__int64)&v44);
		if ((dword_140DC21C0 & 1) != 0)
		{
			v31 = dword_140DC21C4;
		}
		else
		{
			dword_140DC21C0 |= 1u;
			v30 = sub_140200220(0x1FCu);
			if (v30)
			{
				v31 = *(_DWORD*)(v30 + 4);
				dword_140DC21C4 = v31;
			}
			else
			{
				v31 = 0;
				dword_140DC21C4 = 0;
			}
		}
		v32 = sub_14023D840(v31);
		if (v32)
		{
			v33 = (unsigned int*)(v32 + 4);
			v34 = 36i64;
			do
			{
				v35 = sub_14023D400(*v33);
				v36 = v35;
				if (v35)
				{
					v37 = sub_140248F00(*(_DWORD*)(v35 + 16));
					if (v37)
					{
						v38 = sub_140248F00(*(_DWORD*)(v36 + 20));
						sub_140578770(*(_QWORD*)(a1 + 25744), *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 8i64), v37, v38, 0i64, 0i64);
					}
				}
				++v33;
				--v34;
			} while (v34);
		}
	}
}
// 14039F18D: variable 'v11' is possibly undefined
// 14039F2CA: variable 'v16' is possibly undefined
// 1409D0EFF: using guessed type _BYTE byte_1409D0EFF[14];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C89AA0: using guessed type int dword_140C89AA0;
// 140DC21C0: using guessed type int dword_140DC21C0;
// 140DC21C4: using guessed type int dword_140DC21C4;

