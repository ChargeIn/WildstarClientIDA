//----- (0000000140173690) ----------------------------------------------------
char __fastcall sub_140173690(__int64 a1)
{
	__int64 v2; // rax
	WCHAR* v3; // rcx
	double v4; // xmm0_8
	__int64 v5; // rdx
	__int64 v6; // r8
	float v7; // xmm4_4
	float v8; // xmm5_4
	float v9; // xmm0_4
	float* v10; // rax
	unsigned __int64 v11; // rcx
	__int64 v12; // rdx
	float* v13; // rax

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1040) + 112i64))(*(_QWORD*)(a1 + 1040));
	v3 = (WCHAR*)&unk_1409DD9F4;
	if (v2)
		v3 = (WCHAR*)v2;
	v4 = *(double*)sub_1407DFD50(v3, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	v5 = *(int*)(a1 + 1136);
	v6 = 0i64;
	v7 = 1.0;
	v8 = v4;
	if (v5 >= 4)
	{
		v9 = *(float*)(a1 + 1060);
		v10 = (float*)(a1 + 1076);
		v11 = ((unsigned __int64)(v5 - 4) >> 2) + 1;
		v6 = 4 * v11;
		do
		{
			if (v9 >= *(v10 - 1))
				v7 = *v10;
			if (v9 >= v10[1])
				v7 = v10[2];
			if (v9 >= v10[3])
				v7 = v10[4];
			if (v9 >= v10[5])
				v7 = v10[6];
			v10 += 8;
			--v11;
		} while (v11);
	}
	if (v6 < v5)
	{
		v12 = v5 - v6;
		v13 = (float*)(a1 + 1076 + 8 * v6);
		do
		{
			if (*(float*)(a1 + 1060) >= *(v13 - 1))
				v7 = *v13;
			v13 += 2;
			--v12;
		} while (v12);
	}
	if (*(_DWORD*)(a1 + 1068) == 2)
		v7 = -v7;
	return sub_1401737F0(a1, fmaxf(*(float*)(a1 + 1052), fminf(*(float*)(a1 + 1056), v7 + v8)), 1);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

