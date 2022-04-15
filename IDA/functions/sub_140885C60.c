//----- (0000000140885C60) ----------------------------------------------------
__int64 __fastcall sub_140885C60(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	__int64 v4; // r10
	__int64 result; // rax
	__int64 v6; // rdx
	int v7; // r8d

	v4 = a2;
	if (a4)
		*a4 = 0i64;
	if ((*(_DWORD*)(a1 + 56) & 0xF) == 2)
		return 2i64;
	if (a3)
	{
		if (a3 == 1)
		{
			v4 = *(_QWORD*)(a1 + 8) + a2;
		}
		else
		{
			if (a3 != 2)
				return 31i64;
			v4 = **(_QWORD**)(a1 - 80) + a2;
		}
	}
	if (v4 < 0)
		return 31i64;
	v6 = v4 % *(unsigned int*)(a1 - 8);
	if (v6)
		v4 -= v6;
	if (!a4)
		goto LABEL_20;
	if (!a3)
	{
		*a4 = v4;
	LABEL_20:
		*(_QWORD*)(a1 + 8) = v4;
		return 1i64;
	}
	v7 = a3 - 1;
	if (v7)
	{
		if (v7 != 1)
			return 2i64;
		result = 1i64;
		*a4 = v4 - **(_QWORD**)(a1 - 80);
		*(_QWORD*)(a1 + 8) = v4;
	}
	else
	{
		*a4 = v4 - *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = v4;
		return 1i64;
	}
	return result;
}

