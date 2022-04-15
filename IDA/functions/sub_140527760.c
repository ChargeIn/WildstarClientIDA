//----- (0000000140527760) ----------------------------------------------------
__int64 __fastcall sub_140527760(__int64* a1, int* a2)
{
	__int64 v2; // rbp
	int* v5; // rsi
	int* v6; // rcx
	__int64 v7; // rax
	__int128 v8; // xmm0
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 380i64);
	v6 = &v5[95 * v2];
	if ((((unsigned __int8)v6 | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590(v6, a2, 0x17Cui64);
	}
	else
	{
		v7 = 2i64;
		do
		{
			v8 = *(_OWORD*)a2;
			v6 += 32;
			a2 += 32;
			*((_OWORD*)v6 - 8) = v8;
			*((_OWORD*)v6 - 7) = *((_OWORD*)a2 - 7);
			*((_OWORD*)v6 - 6) = *((_OWORD*)a2 - 6);
			*((_OWORD*)v6 - 5) = *((_OWORD*)a2 - 5);
			*((_OWORD*)v6 - 4) = *((_OWORD*)a2 - 4);
			*((_OWORD*)v6 - 3) = *((_OWORD*)a2 - 3);
			*((_OWORD*)v6 - 2) = *((_OWORD*)a2 - 2);
			*((_OWORD*)v6 - 1) = *((_OWORD*)a2 - 1);
			--v7;
		} while (v7);
		*(_OWORD*)v6 = *(_OWORD*)a2;
		*((_OWORD*)v6 + 1) = *((_OWORD*)a2 + 1);
		*((_OWORD*)v6 + 2) = *((_OWORD*)a2 + 2);
		*((_OWORD*)v6 + 3) = *((_OWORD*)a2 + 3);
		*((_OWORD*)v6 + 4) = *((_OWORD*)a2 + 4);
		*((_OWORD*)v6 + 5) = *((_OWORD*)a2 + 5);
		*((_OWORD*)v6 + 6) = *((_OWORD*)a2 + 6);
		*((_QWORD*)v6 + 14) = *((_QWORD*)a2 + 14);
		v6[30] = a2[30];
	}
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 380 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

