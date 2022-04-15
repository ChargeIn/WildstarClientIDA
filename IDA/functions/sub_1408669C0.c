//----- (00000001408669C0) ----------------------------------------------------
void __fastcall sub_1408669C0(__int64 a1, char a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rsi
	unsigned int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // rbx
	_QWORD* v11; // rcx
	__int64* v12; // rcx
	_QWORD* v13; // rcx
	unsigned __int64 v14; // rdx
	__int64* v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rcx
	char v20; // al
	int v21; // ecx
	__int64 v22; // rcx
	unsigned __int16 v23; // [rsp+60h] [rbp+8h] BYREF
	unsigned int v24; // [rsp+70h] [rbp+18h] BYREF
	__int64 v25; // [rsp+78h] [rbp+20h] BYREF

	if ((*(_BYTE*)(a1 + 644) & 4) != 0)
		goto LABEL_25;
	v4 = *(_QWORD**)(a1 + 544);
	if (!v4)
		goto LABEL_25;
	if (v4[1] == *v4)
	{
	LABEL_23:
		v19 = *(_QWORD*)(a1 + 544);
		*(_QWORD*)(a1 + 544) = 0i64;
		if (v19)
			sub_140866000(v19);
	LABEL_25:
		*(_BYTE*)(a1 + 644) |= 4u;
		return;
	}
	while (1)
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 544) + 8i64);
		if (!*(_QWORD*)(v5 - 16))
		{
			v6 = sub_14086D020(*(_QWORD*)(v5 - 40), *(__int64**)(a1 + 176), &v23, &v24, (__int64*)(v5 - 32), v5 - 24);
			v7 = v6;
			if (v6)
			{
				*(_WORD*)(a1 + 2i64 * (unsigned int)(*(_DWORD*)(a1 + 552) - 1) + 556) = v23;
				*(_DWORD*)(a1 + 636) = *(_DWORD*)(v6 + 24);
				v20 = sub_14086DF90(*(_QWORD*)(v5 - 40));
				*(_DWORD*)(a1 + 640) &= 0xFFFFFFF0;
				*(_DWORD*)(a1 + 640) |= v20 & 0xF;
				v21 = (int)(*(_DWORD*)(a1 + 640) << 28) >> 28;
				if ((unsigned int)(v21 - 1) <= 2 || v21 == 5)
					*(_DWORD*)(a1 + 632) = sub_14086E020(*(_QWORD*)(v5 - 40), *(_QWORD*)(a1 + 176)).m128_u32[0];
				else
					*(_DWORD*)(a1 + 632) = 0;
				*(_BYTE*)(a1 + 644) |= 4u;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
				return;
			}
			if (-- * (_DWORD*)(a1 + 552))
			{
				do
				{
					v8 = *(_DWORD*)(a1 + 552) - 1;
					if (v8 < 0x20)
					{
						v9 = *(unsigned int*)(a1 + 620);
						if (_bittest64(&v9, v8))
							break;
					}
					*(_DWORD*)(a1 + 552) = v8;
				} while (v8);
			}
			v10 = *(_QWORD*)(a1 + 544);
			sub_140865E90((_QWORD*)(*(_QWORD*)(v10 + 8) - 40i64));
			*(_QWORD*)(v10 + 8) -= 40i64;
			goto LABEL_22;
		}
		if (a2)
			break;
	LABEL_17:
		v14 = *(_QWORD*)(v5 - 8);
		v15 = *(__int64**)(v5 - 16);
		v25 = 0i64;
		sub_140874330(v15, v14, &v25);
		v16 = *(_QWORD*)(a1 + 544);
		sub_140865E90((_QWORD*)(*(_QWORD*)(v16 + 8) - 40i64));
		*(_QWORD*)(v16 + 8) -= 40i64;
		v17 = v25;
		if (!v25)
		{
			v22 = *(_QWORD*)(a1 + 544);
			*(_QWORD*)(a1 + 544) = 0i64;
			if (v22)
			{
				sub_140866000(v22);
				if (v25)
					sub_140866000(v25);
			}
			return;
		}
		sub_140865FB0(v25);
		v18 = *(_QWORD*)(a1 + 544);
		*(_QWORD*)(a1 + 544) = v17;
		if (v18)
			sub_140866000(v18);
		if (v25)
		{
			sub_140866000(v25);
			v25 = 0i64;
		}
	LABEL_22:
		if (*(_QWORD*)(*(_QWORD*)(a1 + 544) + 8i64) == **(_QWORD**)(a1 + 544))
			goto LABEL_23;
	}
	v11 = *(_QWORD**)(v5 - 8);
	if (v11[1] == *v11)
		return;
	v12 = (__int64*)(v11[1] - 40i64);
	if (!v12[3])
	{
	LABEL_16:
		if ((unsigned int)sub_14086DF90(*v12) != 5)
			return;
		goto LABEL_17;
	}
	while (1)
	{
		v13 = (_QWORD*)v12[4];
		if (v13[1] == *v13)
			break;
		v12 = (__int64*)(v13[1] - 40i64);
		if (!v12[3])
			goto LABEL_16;
	}
}

