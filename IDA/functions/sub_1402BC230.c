//----- (00000001402BC230) ----------------------------------------------------
__int64 __fastcall sub_1402BC230(__int64 a1)
{
	signed __int32 v1; // et0
	__int64 result; // rax

	v1 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	result = *(unsigned int*)(a1 + 8);
	if (!v1)
	{
		sub_1402BC0C0((_QWORD*)a1);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}

