//----- (00000001400B7540) ----------------------------------------------------
__int64 __fastcall sub_1400B7540(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]

	sub_14018EFA0(&v5, (__int64)L"%d", (unsigned int)(a2 + 1));
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, v6);
	v4 = result;
	if (v6)
	{
		sub_14018B900(v6, 0);
		return v4;
	}
	return result;
}
// 1409D336C: using guessed type wchar_t aD_6[3];

