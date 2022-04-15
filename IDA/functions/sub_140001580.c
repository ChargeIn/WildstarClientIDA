//----- (0000000140001580) ----------------------------------------------------
__int64 __fastcall sub_140001580(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = sub_140001320(a1);
	if (result)
	{
		v3 = *(_QWORD*)(result + 1056);
		if (v3)
			v3 = *(_QWORD*)(v3 + 16);
		if (v3)
		{
			sub_140049EA0(v3, a1);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	return result;
}

