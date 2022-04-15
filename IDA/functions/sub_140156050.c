//----- (0000000140156050) ----------------------------------------------------
__int64 __fastcall sub_140156050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD* a6)
{
	__int64 v6; // rcx
	__int64 v7; // rbx
	BOOL v8; // edi
	__int64 result; // rax

	v6 = qword_140C57C00 - *a6;
	if (qword_140C57C00 == *a6)
		v6 = qword_140C57C08 - a6[1];
	v7 = qword_140C63650;
	*(_DWORD*)(qword_140C63650 + 664) = v6 != 0;
	v8 = sub_1401560B0() == 0;
	result = 0i64;
	*(_DWORD*)(v7 + 256) = v8;
	return result;
}
// 140C57C00: using guessed type __int64 qword_140C57C00;
// 140C57C08: using guessed type __int64 qword_140C57C08;
// 140C63650: using guessed type __int64 qword_140C63650;

