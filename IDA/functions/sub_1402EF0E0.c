//----- (00000001402EF0E0) ----------------------------------------------------
void __fastcall sub_1402EF0E0(__int64 a1)
{
	__int64 v1; // rdi
	__int64* v3; // rdi
	__int64* v4; // rdi
	__int64* v5; // rcx
	__int64* v6; // rdi
	__int64* v7; // rdi
	__int64 v8; // rdi
	__int64 v9; // rdi

	v1 = *(_QWORD*)(a1 + 88);
	if (v1)
	{
		sub_1402EF310(*(__int64**)(a1 + 88));
		sub_14018B900(v1, 0);
	}
	v3 = *(__int64**)(a1 + 80);
	if (v3)
	{
		sub_14018B900(v3[6], 0);
		sub_14018B900(v3[7], 0);
		sub_14018B900(v3[3], 0);
		sub_14018B900(v3[4], 0);
		sub_14018B900(v3[1], 0);
		sub_14018B900((__int64)v3, 0);
	}
	v4 = *(__int64**)(a1 + 72);
	if (v4)
	{
		sub_14018B900(v4[4], 0);
		sub_14018B900(v4[5], 0);
		sub_14018B900(v4[1], 0);
		sub_14018B900(v4[2], 0);
		sub_14018B900((__int64)v4, 0);
	}
	v5 = *(__int64**)(a1 + 64);
	if (v5)
		sub_1402EF290(v5);
	v6 = *(__int64**)(a1 + 56);
	if (v6)
	{
		sub_14018B900(v6[7], 0);
		sub_14018B900(v6[8], 0);
		sub_14018B900(v6[4], 0);
		sub_14018B900(v6[5], 0);
		sub_14018B900(v6[1], 0);
		sub_14018B900(v6[2], 0);
		sub_14018B900((__int64)v6, 0);
	}
	v7 = *(__int64**)(a1 + 48);
	if (v7)
	{
		sub_14018B900(v7[4], 0);
		sub_14018B900(v7[5], 0);
		sub_14018B900(v7[1], 0);
		sub_14018B900(v7[2], 0);
		sub_14018B900((__int64)v7, 0);
	}
	v8 = *(_QWORD*)(a1 + 40);
	if (v8)
	{
		sub_14018B900(*(_QWORD*)(v8 + 8), 0);
		sub_14018B900(v8, 0);
	}
	v9 = *(_QWORD*)(a1 + 32);
	if (v9)
	{
		sub_14018B900(*(_QWORD*)(v9 + 8), 0);
		sub_14018B900(*(_QWORD*)(v9 + 16), 0);
		sub_14018B900(v9, 0);
	}
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
}

