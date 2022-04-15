//----- (000000014000AA70) ----------------------------------------------------
__int64 __fastcall sub_14000AA70(__int64* a1)
{
	__int64 v1; // rdi
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	v1 = *a1;
	if (*a1)
	{
		v2 = *(_QWORD***)(v1 + 8);
		v3 = *v2;
		if (*v2 != v2)
		{
			do
			{
				v4 = (__int64)v3;
				v3 = (_QWORD*)*v3;
				sub_14018B900(v4, 0);
			} while (v3 != *(_QWORD**)(v1 + 8));
		}
		**(_QWORD**)(v1 + 8) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8i64) = *(_QWORD*)(v1 + 8);
		sub_14018B900(*(_QWORD*)(v1 + 8), 0);
		sub_14018B900(v1, 0);
	}
	return 1i64;
}

