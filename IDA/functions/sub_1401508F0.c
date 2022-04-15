//----- (00000001401508F0) ----------------------------------------------------
void __fastcall sub_1401508F0(__int64 a1)
{
	_QWORD* v1; // rdx
	_QWORD* v3; // rax
	__int64 v4; // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx

	v1 = *(_QWORD**)(a1 + 8);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			*(_QWORD*)(v3[2] + 1448i64) = 0i64;
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
		sub_14018B900(v4, 0);
	v5 = *(_QWORD***)(a1 + 8);
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = *(_QWORD*)(a1 + 8);
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
}

