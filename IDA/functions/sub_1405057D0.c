//----- (00000001405057D0) ----------------------------------------------------
__int64 __fastcall sub_1405057D0(unsigned int a1)
{
	__int64 result; // rax
	__int64 v3; // rdx

	result = sub_1401E87E0(a1);
	v3 = result;
	if (result)
	{
		if (a1 != 7)
			return *(unsigned int*)(v3 + 4);
		result = 733829i64;
		if ((*(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) == 0)
			return *(unsigned int*)(v3 + 4);
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

