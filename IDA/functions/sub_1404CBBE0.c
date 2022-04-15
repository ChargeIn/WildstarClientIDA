//----- (00000001404CBBE0) ----------------------------------------------------
__int64 __fastcall sub_1404CBBE0(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	sub_140195D70(a1 + 64);
	*(_DWORD*)(a1 + 64) = 0;
	v2 = *(_QWORD**)(a1 + 80);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 88);
	v3 = *(_QWORD**)(a1 + 88);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
		sub_14018B900(v4, 0);
	sub_140008410(a1);
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
	sub_14018B900(a1, 0);
	return a1;
}

