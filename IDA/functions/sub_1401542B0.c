//----- (00000001401542B0) ----------------------------------------------------
void __fastcall sub_1401542B0(__int64* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	sub_140154390((__int64)a1);
	v2 = (_QWORD**)a1[10];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != (_QWORD*)a1[10]);
	}
	*(_QWORD*)a1[10] = a1[10];
	*(_QWORD*)(a1[10] + 8) = a1[10];
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		sub_140044CA0((__int64)(a1 + 5), *(_QWORD**)(a1[6] + 8));
		*(_QWORD*)(a1[6] + 16) = a1[6];
		*(_QWORD*)(a1[6] + 8) = 0i64;
		*(_QWORD*)(a1[6] + 24) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		sub_140044CA0((__int64)(a1 + 1), *(_QWORD**)(a1[2] + 8));
		*(_QWORD*)(a1[2] + 16) = a1[2];
		*(_QWORD*)(a1[2] + 8) = 0i64;
		*(_QWORD*)(a1[2] + 24) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
