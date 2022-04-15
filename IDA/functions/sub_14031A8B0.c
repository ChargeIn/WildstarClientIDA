//----- (000000014031A8B0) ----------------------------------------------------
void __fastcall sub_14031A8B0(__int64 a1)
{
	__int64 v2; // rbp
	unsigned int i; // r14d
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx

	if (!*(_BYTE*)(a1 + 400))
	{
		v2 = 0i64;
		for (i = 0; i < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1272i64); ++i)
		{
			v4 = 16i64 * i;
			v5 = 24i64 * i;
			sub_140317EC0(v5 + *(_QWORD*)(a1 + 416) + 1280i64, v4 + a1 + 1112, (int**)(a1 + 384));
			sub_140317FC0(v5 + *(_QWORD*)(a1 + 416) + 1400i64, v4 + a1 + 1192, (_QWORD*)(a1 + 384));
		}
		if (*(_WORD*)(*(_QWORD*)(a1 + 416) + 1520i64))
		{
			do
			{
				v6 = 16i64 * (unsigned int)v2;
				sub_140317EC0(24 * v2 + *(_QWORD*)(a1 + 416) + 1528i64, v6 + a1 + 1272, (int**)(a1 + 384));
				sub_140317FC0(24 * v2 + *(_QWORD*)(a1 + 416) + 1648i64, v6 + a1 + 1352, (_QWORD*)(a1 + 384));
				v2 = (unsigned int)(v2 + 1);
			} while ((unsigned int)v2 < *(unsigned __int16*)(*(_QWORD*)(a1 + 416) + 1520i64));
		}
		sub_140317EC0(*(_QWORD*)(a1 + 8) + 56i64, a1 + 96, (int**)(a1 + 384));
		sub_1403180D0(*(_QWORD*)(a1 + 416) + 392i64, (__m128i*)(a1 + 720), (__m128i**)(a1 + 384));
		v7 = *(_QWORD*)(a1 + 416);
		if ((*(_BYTE*)(v7 + 3784) & 2) != 0)
			sub_1403181E0(v7 + 632, (__m128*)(a1 + 880), (_QWORD*)(a1 + 384));
		*(_BYTE*)(a1 + 400) = 1;
	}
}

