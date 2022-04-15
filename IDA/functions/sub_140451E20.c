//----- (0000000140451E20) ----------------------------------------------------
__int64 sub_140451E20()
{
	__int64 v0; // rcx
	int* v1; // rbx
	int* v2; // rax
	__int64 v3; // rcx

	if (!qword_140C65910)
	{
		v1 = sub_14018B280(32i64, 0);
		if (v1)
		{
			v2 = sub_14018B280(72i64, 0);
			qword_140C65910 = (__int64)v1;
			*((_QWORD*)v1 + 1) = v2;
			*((_QWORD*)v1 + 2) = 0i64;
			*(_BYTE*)v2 = 0;
			v3 = *((_QWORD*)v1 + 1);
			*(_QWORD*)(v3 + 8) = 0i64;
			*(_QWORD*)(*((_QWORD*)v1 + 1) + 16i64) = *((_QWORD*)v1 + 1);
			*(_QWORD*)(*((_QWORD*)v1 + 1) + 24i64) = *((_QWORD*)v1 + 1);
			sub_140452300(v3);
			return 0i64;
		}
		qword_140C65910 = 0i64;
		sub_140452300(v0);
	}
	return 0i64;
}
// 140451E94: variable 'v0' is possibly undefined
// 140C65910: using guessed type __int64 qword_140C65910;

