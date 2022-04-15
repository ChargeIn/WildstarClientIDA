//----- (000000014084F310) ----------------------------------------------------
__int64 __fastcall sub_14084F310(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	unsigned int v4; // esi
	unsigned int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // rdx
	_QWORD* v8; // rcx
	__int64* i; // rdx
	__int64 v10; // rbx
	__int64* v11; // rcx
	_DWORD* v12; // rdx
	unsigned int v14; // edx
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rbx
	__int64 v18; // rdx
	int v19; // r14d
	int v20; // ebp
	float v21; // xmm6_4
	_DWORD* v22; // rbx
	double v23; // xmm1_8
	unsigned int v24; // r8d
	__int64 v25; // rdx
	__int64 v26; // rcx
	unsigned __int16 v28; // [rsp+78h] [rbp+10h] BYREF
	unsigned int v29; // [rsp+80h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a2 + 144);
	v4 = 2;
	if (!v2 || !*(_QWORD*)(v2 + 32))
		return 2i64;
	if (*(_DWORD*)(a2 + 64))
	{
		do
		{
			v5 = *(_DWORD*)(a2 + 64) - 1;
			if (v5 < 0x20)
			{
				v6 = *(unsigned int*)(a2 + 132);
				if (_bittest64(&v6, v5))
					break;
			}
			*(_DWORD*)(a2 + 64) = v5;
		} while (v5);
	}
	v7 = *(_QWORD*)(a2 + 144);
	v28 = 0;
	v8 = *(_QWORD**)(v7 + 32);
	for (i = (__int64*)(v7 + 32); v8[1] != *v8; i = (__int64*)(v18 + 32))
	{
		v10 = v8[1];
		v11 = *(__int64**)(v10 - 16);
		if (v11)
		{
			sub_140874330(v11, *(_QWORD*)(v10 - 8), i);
			v17 = *(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64);
			sub_140865E90((_QWORD*)(*(_QWORD*)(v17 + 8) - 40i64));
			*(_QWORD*)(v17 + 8) -= 40i64;
			if (!*(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64))
			{
				v4 = 3;
				break;
			}
		}
		else
		{
			v12 = (_DWORD*)sub_14086D020(
				*(_QWORD*)(v10 - 40),
				*(__int64**)(a2 + 16),
				&v28,
				&v29,
				(__int64*)(v10 - 32),
				v10 - 24);
			if (v12)
			{
				*(_WORD*)(a2 + 2i64 * (unsigned int)(*(_DWORD*)(a2 + 64) - 1) + 68) = v28;
				v19 = v12[6];
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v12 + 16i64))(v12);
				v20 = sub_14086DF90(*(_QWORD*)(v10 - 40));
				LODWORD(v21) = sub_14086E020(*(_QWORD*)(v10 - 40), *(_QWORD*)(a2 + 16)).m128_u32[0];
				if (v19)
				{
					v22 = sub_14084CDC0(*(_QWORD*)(a2 + 144), a2, v19);
					if (v22)
					{
						if (v20 == 3)
						{
							v23 = (double)dword_140C110B4 * v21 * 0.001;
							if (v23 <= 0.0)
								v24 = (int)(v23 + -0.5);
							else
								v24 = (int)(v23 + 0.5);
						}
						else
						{
							v24 = 10240;
						}
						v4 = sub_14084CE80(*(_QWORD*)(a2 + 144), a2, v24, (__int64)v22);
						(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v22 + 16i64))(v22);
					}
				}
				break;
			}
			if ((*(_DWORD*)(a2 + 64))-- != 1)
			{
				do
				{
					v14 = *(_DWORD*)(a2 + 64) - 1;
					if (v14 < 0x20)
					{
						v15 = *(unsigned int*)(a2 + 132);
						if (_bittest64(&v15, v14))
							break;
					}
					*(_DWORD*)(a2 + 64) = v14;
				} while (v14);
			}
			v16 = *(_QWORD*)(*(_QWORD*)(a2 + 144) + 32i64);
			sub_140865E90((_QWORD*)(*(_QWORD*)(v16 + 8) - 40i64));
			*(_QWORD*)(v16 + 8) -= 40i64;
		}
		v18 = *(_QWORD*)(a2 + 144);
		v8 = *(_QWORD**)(v18 + 32);
	}
	v25 = *(_QWORD*)(a2 + 144);
	if (*(_QWORD*)(v25 + 32) && ((v4 - 1) & 0xFFFFFFFD) != 0)
	{
		v26 = *(_QWORD*)(v25 + 32);
		*(_QWORD*)(v25 + 32) = 0i64;
		if (v26)
			sub_140866000(v26);
	}
	return v4;
}
// 140C110B4: using guessed type int dword_140C110B4;

