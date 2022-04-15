//----- (0000000140385130) ----------------------------------------------------
__m128* __fastcall sub_140385130(__int64 a1, float* a2, float* a3, float* a4, __int64 a5)
{
	__int64 v5; // rsi
	unsigned int v6; // edi
	__m128* v11; // r12
	bool v12; // zf
	int v13; // xmm1_4
	__m128* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rcx
	_QWORD* v17; // rdx
	__int64 v18; // rax
	__int64 i; // rdx
	__int64 v20; // r8
	_QWORD* v21; // rcx
	__int64 v22; // rax
	__int64 j; // r8
	__int64 v24; // r9
	_QWORD* v25; // rdx
	__int64 v26; // rcx
	int v28[10]; // [rsp+30h] [rbp-28h] BYREF

	v5 = a5;
	v6 = 0;
	v11 = 0i64;
	if ((*(_BYTE*)a5 & 3) != 0)
	{
		if (*(_DWORD*)(a5 + 8))
		{
			v12 = *(_DWORD*)(a1 + 32) == 15;
			v28[0] = -1;
			if (!v12)
				sub_14037CB70(a1);
		}
		if ((*(_BYTE*)(a1 + 32) & 3) == 3)
		{
			v13 = *((_DWORD*)a4 + 1);
			*(float*)&a5 = *a4;
			HIDWORD(a5) = v13;
			v14 = sub_140385390(a1, a2, a3, (float*)&a5, v5);
			if (v14)
			{
				v11 = v14;
				a4[1] = (*(float(__fastcall**)(__m128*))(v14->m128_u64[0] + 16))(v14);
			}
		}
	}
	if ((*(_BYTE*)v5 & 4) != 0)
	{
		if (*(_DWORD*)(v5 + 8))
		{
			v28[0] = -1;
			if (*(_QWORD*)(a1 + 1448))
				sub_14037CC30(a1, (__int64)v28);
		}
		if (*(char*)(a1 + 36) < 0 && *(_QWORD*)(a1 + 1032))
		{
			v15 = 0i64;
			do
			{
				v16 = *(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v15);
				if (v16)
				{
					v17 = (_QWORD*)(*(_QWORD*)a1 + 4328i64);
					if (!*(_QWORD*)(v16 + 224))
					{
						*(_QWORD*)(v16 + 224) = v17;
						*(_QWORD*)(v16 + 232) = *v17;
						*v17 = v16;
						v18 = *(_QWORD*)(v16 + 232);
						if (v18)
							*(_QWORD*)(v18 + 224) = v16 + 232;
					}
				}
				v15 = ++v6;
			} while ((unsigned __int64)v6 < *(_QWORD*)(a1 + 1032));
		}
	}
	if ((*(_DWORD*)v5 & 0x7F8) != 0)
	{
		if (*(_DWORD*)(v5 + 8))
		{
			v12 = *(_QWORD*)(a1 + 1448) == 0i64;
			v28[0] = -1;
			if (!v12)
				sub_14037CC30(a1, (__int64)v28);
		}
		if ((*(_BYTE*)(a1 + 36) & 0x10) != 0)
		{
			for (i = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48i64); i; i = *(_QWORD*)(i + 24))
			{
				v20 = *(_QWORD*)(i + 8);
				if (!*(_QWORD*)(v20 + 1232))
				{
					v21 = (_QWORD*)(*(_QWORD*)a1 + 5056i64);
					*(_QWORD*)(v20 + 1232) = v21;
					*(_QWORD*)(v20 + 1240) = *v21;
					*v21 = v20;
					v22 = *(_QWORD*)(v20 + 1240);
					if (v22)
						*(_QWORD*)(v22 + 1232) = v20 + 1240;
				}
			}
		}
	}
	if ((*(_DWORD*)v5 & 0xF800) != 0)
	{
		for (j = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64i64); j; j = *(_QWORD*)(j + 24))
		{
			v24 = *(_QWORD*)(j + 8);
			if (!*(_QWORD*)(v24 + 1104))
			{
				v25 = (_QWORD*)(*(_QWORD*)a1 + 5296i64);
				*(_QWORD*)(v24 + 1104) = v25;
				*(_QWORD*)(v24 + 1112) = *v25;
				*v25 = v24;
				v26 = *(_QWORD*)(v24 + 1112);
				if (v26)
					*(_QWORD*)(v26 + 1104) = v24 + 1112;
			}
		}
	}
	return v11;
}

