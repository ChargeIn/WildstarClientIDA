//----- (00000001400582A0) ----------------------------------------------------
__int64 __fastcall sub_1400582A0(__int64 a1, int a2)
{
	__int64 i; // r8
	__int64 result; // rax

	if (a2 < 0)
	{
		result = (unsigned int)(a2 + 1);
		*(_QWORD*)(a1 + 16) += 16i64 * (int)result;
	}
	else
	{
		for (i = 16i64 * a2; *(_QWORD*)(a1 + 16) < (unsigned __int64)(i + *(_QWORD*)(a1 + 24)); *(_QWORD*)(a1 + 16) += 16i64)
		{
			result = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(result + 8) = 0;
		}
		*(_QWORD*)(a1 + 16) = i + *(_QWORD*)(a1 + 24);
	}
	return result;
}

