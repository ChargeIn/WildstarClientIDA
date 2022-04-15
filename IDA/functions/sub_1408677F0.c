//----- (00000001408677F0) ----------------------------------------------------
__int64 __fastcall sub_1408677F0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	_DWORD* v4; // rbx
	int v5; // eax
	__int64 result; // rax
	__int64 v7; // rcx
	float v8; // xmm7_4
	float v9; // xmm8_4
	float v10; // xmm9_4
	float v11; // xmm7_4
	int v12; // eax
	int v13; // edx
	int v14; // ecx
	float v15; // xmm8_4
	float v16; // xmm0_4
	float v17; // xmm10_4

	v2 = *(_QWORD*)(a1 + 24);
	v3 = *(unsigned __int16*)(a1 + 36);
	if (v3 < *(_DWORD*)(v2 + 8))
	{
		v4 = (_DWORD*)(*(_QWORD*)v2 + 16i64 * *(unsigned __int16*)(a1 + 36));
		*(_WORD*)(a1 + 36) = v3 + 1;
		*(_DWORD*)(a1 + 100) = *v4;
		*(_DWORD*)(a1 + 104) = v4[1];
		*(_DWORD*)(a1 + 108) = v4[2];
		sub_140867A50(a1, (float*)(a1 + 100));
		v5 = (dword_140C110B8 + v4[3] - 1) / dword_140C110B8;
		if (!v5)
			v5 = 1;
		*(_DWORD*)(a1 + 84) = v5;
	}
	if (*(unsigned __int16*)(a1 + 36) < *(int*)(*(_QWORD*)(a1 + 24) + 8i64)
		|| (result = sub_140867640(a1), (_DWORD)result == 1))
	{
		v7 = **(_QWORD**)(a1 + 24);
		v8 = *(float*)(v7 + 16i64 * *(unsigned __int16*)(a1 + 36));
		v9 = *(float*)(v7 + 16i64 * *(unsigned __int16*)(a1 + 36) + 4);
		v10 = *(float*)(v7 + 16i64 * *(unsigned __int16*)(a1 + 36) + 8);
		v11 = v8
			+ (float)((float)((float)((float)(int)sub_1407DDB28() * 0.000061038882) - 1.0)
				* *(float*)(*(_QWORD*)(a1 + 24) + 12i64));
		v12 = sub_1407DDB28();
		v13 = *(_DWORD*)(a1 + 80);
		v14 = *(_DWORD*)(a1 + 84);
		v15 = v9 - *(float*)(a1 + 104);
		v16 = (float)((float)((float)v12 * 0.000061038882) - 1.0) * *(float*)(*(_QWORD*)(a1 + 24) + 16i64);
		result = (unsigned int)(v14 + v13);
		*(float*)(a1 + 112) = v11 - *(float*)(a1 + 100);
		*(float*)(a1 + 116) = v15;
		*(_DWORD*)(a1 + 76) = v13;
		*(_DWORD*)(a1 + 80) = result;
		v17 = 1.0 / (float)v14;
		*(float*)(a1 + 120) = (float)(v10 + v16) - *(float*)(a1 + 108);
		*(float*)(a1 + 88) = v17;
		*(float*)(a1 + 92) = -(float)((float)v13 * v17);
	}
	else
	{
		*(_DWORD*)a1 = 0;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C110B8: using guessed type int dword_140C110B8;

