//----- (000000014002CDB0) ----------------------------------------------------
__int64 sub_14002CDB0()
{
	__int64 result; // rax
	int* v1; // rbx
	int* v2; // rax
	__int64 v3; // rax

	result = qword_140C63610;
	if (!qword_140C63610)
	{
		v1 = sub_14018B280((unsigned int)(qword_140C63610 + 24), 0);
		if (v1)
		{
			v2 = sub_14018B280(24i64, 0);
			*((_QWORD*)v1 + 2) = v2;
			*(_QWORD*)v2 = v2;
			*(_QWORD*)(*((_QWORD*)v1 + 2) + 8i64) = *((_QWORD*)v1 + 2);
			v3 = (__int64)sub_14018B280(872i64, 0);
			if (v3)
				v3 = sub_140129AF0(v3, (__m128i*)L"UI\\Credits.xml");
			*(_QWORD*)v1 = v3;
			sub_14012A290(v3);
			qword_140C63610 = (__int64)v1;
			return (__int64)v1;
		}
		else
		{
			qword_140C63610 = 0i64;
			return 0i64;
		}
	}
	return result;
}
// 1409EEA58: using guessed type wchar_t aUiCreditsXml[15];
// 140C63610: using guessed type __int64 qword_140C63610;

