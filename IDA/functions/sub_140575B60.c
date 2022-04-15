//----- (0000000140575B60) ----------------------------------------------------
__int64 sub_140575B60()
{
	int* v0; // rax
	__int64 v1; // rbx
	int* v2; // rax

	if (!qword_140C65B78)
	{
		v0 = sub_14018B280(48i64, 0);
		v1 = (__int64)v0;
		if (v0)
		{
			*(_QWORD*)v0 = 0i64;
			*((_QWORD*)v0 + 1) = 0i64;
			v2 = sub_14018B280(40i64, 0);
			*(_QWORD*)(v1 + 32) = 0i64;
			*(_QWORD*)(v1 + 24) = v2;
			*(_BYTE*)v2 = 0;
			*(_QWORD*)(*(_QWORD*)(v1 + 24) + 8i64) = 0i64;
			*(_QWORD*)(*(_QWORD*)(v1 + 24) + 16i64) = *(_QWORD*)(v1 + 24);
			*(_QWORD*)(*(_QWORD*)(v1 + 24) + 24i64) = *(_QWORD*)(v1 + 24);
		}
		else
		{
			v1 = 0i64;
		}
		qword_140C65B78 = v1;
		sub_140575C50((const void***)v1);
	}
	return 0i64;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

