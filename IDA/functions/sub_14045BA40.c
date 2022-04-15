//----- (000000014045BA40) ----------------------------------------------------
__int64 __fastcall sub_14045BA40(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rax

	result = *(unsigned int*)(a1 + 48);
	if ((int)result >= 25)
	{
		v2 = *(_QWORD*)(a1 + 24);
		if (v2)
			return *(unsigned int*)(v2 + 20);
		else
			return 25i64;
	}
	return result;
}

