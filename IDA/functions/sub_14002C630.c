//----- (000000014002C630) ----------------------------------------------------
void __fastcall sub_14002C630(__int64 a1)
{
	__int64 v1; // rdi
	__int64 i; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	for (i = *(_QWORD*)(a1 + 8); i != v1; i += 32i64)
	{
		v4 = *(_QWORD*)(i + 8);
		if (v4)
			sub_14018B900(v4, 0);
	}
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		sub_14018B900(v5, 0);
}

