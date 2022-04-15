//----- (00000001406A1DE0) ----------------------------------------------------
__int64 __fastcall sub_1406A1DE0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // r8
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD**)(v2 + 8)) != 0i64)
	{
		if (v3[2] == *(_QWORD*)(qword_140C635F0 + 5792))
		{
			sub_140184510(a1, v3[17] + 10000000i64 * v3[7]);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

