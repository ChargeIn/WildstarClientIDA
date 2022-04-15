//----- (00000001402D28B0) ----------------------------------------------------
__int64 __fastcall sub_1402D28B0(__int64 a1, __int64 a2)
{
	int v4; // eax
	__m128 v5; // xmm0
	int v6; // eax
	__int64 result; // rax

	*(_DWORD*)(a2 + 72) = dword_140B62BC8[*(int*)(a1 + 80)];
	*(_OWORD*)a2 = *(_OWORD*)(a1 + 208);
	*(_OWORD*)(a2 + 16) = *(_OWORD*)(a1 + 224);
	*(_OWORD*)(a2 + 32) = *(_OWORD*)(a1 + 240);
	*(_OWORD*)(a2 + 48) = *(_OWORD*)(a1 + 256);
	v4 = *(_DWORD*)(a1 + 80);
	if (v4 > 0)
	{
		if (v4 <= 2)
		{
			*(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 108);
		}
		else if (v4 <= 4)
		{
			*(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 112);
			*(_DWORD*)(a2 + 68) = *(_DWORD*)(a1 + 116);
		}
		else if (v4 == 5)
		{
			*(_QWORD*)(a2 + 64) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56i64))(*(_QWORD*)(a1 + 16));
		}
	}
	*(__m128*)(a2 + 80) = _mm_mul_ps(
		*(__m128*)(a1 + 128),
		*(__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 120i64))(*(_QWORD*)(a1 + 8)));
	v5 = _mm_mul_ps(
		*(__m128*)(a1 + 144),
		*(__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 120i64))(*(_QWORD*)(a1 + 8)));
	*(__m128*)(a2 + 96) = v5;
	*(__m128*)(a2 + 112) = v5;
	*(float*)(a2 + 76) = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136i64))(*(_QWORD*)(a1 + 8))
		* *(float*)(a1 + 160);
	v6 = *(_DWORD*)(a1 + 80);
	switch (v6)
	{
	case 1:
		goto LABEL_13;
	case 2:
	LABEL_12:
		*(_DWORD*)(a2 + 128) = *(_DWORD*)(a1 + 164);
		*(_DWORD*)(a2 + 132) = *(_DWORD*)(a1 + 168);
		*(_DWORD*)(a2 + 136) = *(_DWORD*)(a1 + 172);
		*(_DWORD*)(a2 + 140) = *(_DWORD*)(a1 + 176);
		goto LABEL_14;
	case 3:
	LABEL_13:
		*(_DWORD*)(a2 + 128) = *(_DWORD*)(a1 + 164);
		*(_DWORD*)(a2 + 132) = *(_DWORD*)(a1 + 168);
		goto LABEL_14;
	}
	if ((unsigned int)(v6 - 4) <= 1)
		goto LABEL_12;
LABEL_14:
	*(_DWORD*)(a2 + 144) = *(_DWORD*)(a1 + 180);
	*(_DWORD*)(a2 + 148) = *(_DWORD*)(a1 + 184);
	*(_DWORD*)(a2 + 152) = *(_DWORD*)(a1 + 188);
	*(_DWORD*)(a2 + 156) = *(_DWORD*)(a1 + 192);
	*(_QWORD*)(a2 + 160) = *(_QWORD*)(a1 + 88);
	result = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a2 + 168) = result;
	return result;
}
// 140B62BC8: using guessed type _DWORD dword_140B62BC8[6];

