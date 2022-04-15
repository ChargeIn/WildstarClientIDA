//----- (000000014033ED70) ----------------------------------------------------
void __fastcall sub_14033ED70(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdi
	__int64* v4; // rbx
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *(_QWORD*)(a1 + 8);
	if (v2 != v1)
	{
		v4 = (__int64*)(v2 + 32);
		do
		{
			if (!_InterlockedDecrement((volatile signed __int32*)*v4))
			{
				sub_14018B900(v4[1], 0);
				sub_14018B900(*v4, 0);
			}
			v2 += 48i64;
			v4 += 6;
		} while (v2 != v1);
	}
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		sub_14018B900(v5, 0);
}

