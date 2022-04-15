//----- (000000014003E2C0) ----------------------------------------------------
__int64 sub_14003E2C0()
{
	int* v1; // rax
	__int64 v2; // rcx
	int v3; // eax
	int v4; // ebx

	if (qword_140C63618)
		return 0i64;
	v1 = sub_14018B280(3632i64, 8u);
	if (v1)
	{
		v2 = sub_1400E2EF0(
			(__int64)v1,
			(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
			(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
			0i64,
			0i64);
		qword_140C63618 = v2;
	}
	else
	{
		v2 = 0i64;
		qword_140C63618 = 0i64;
	}
	v3 = *(_DWORD*)(v2 + 60);
	if (v3 > 1366)
		v3 = 1366;
	*(_DWORD*)(v2 + 56) = v3;
	v4 = sub_1400E4E80(v2, 0);
	if (v4 < 0)
	{
		if (qword_140C63618)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C63618 + 8i64))(qword_140C63618, 1i64);
		qword_140C63618 = 0i64;
	}
	return (unsigned int)v4;
}
// 1409F7480: using guessed type wchar_t aUiAssetsDocsGe_4[41];
// 1409F7500: using guessed type wchar_t aUiAssetsDocsGe_5[39];
// 140C63618: using guessed type __int64 qword_140C63618;

