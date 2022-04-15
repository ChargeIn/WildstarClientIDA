//----- (000000014054A370) ----------------------------------------------------
__int64 __fastcall sub_14054A370(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rcx
	unsigned int v4; // edx
	__int64 result; // rax
	__int64 v6; // r10

	v1 = *(_QWORD*)(a1 + 280);
	*(_DWORD*)(a1 + 288) = 0;
	if (v1)
		v3 = *(unsigned int*)(*(_QWORD*)(v1 + 112) + 24i64);
	else
		v3 = 0i64;
	*(_DWORD*)(a1 + 292) = 0;
	if ((_DWORD)v3 == 7)
	{
		v4 = *(_DWORD*)(a1 + 32);
		*(_DWORD*)(a1 + 288) = 3;
		result = sub_140564FB0(v3, v4);
		if ((int)result >= 1)
		{
			if ((int)result > 4)
				result = 4i64;
			*(_DWORD*)(v6 + 292) = result;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(v6 + 292) = 1;
		}
	}
	else
	{
		result = (unsigned int)(v3 - 1);
		if ((unsigned int)result <= 2 || (_DWORD)v3 == 10)
		{
			*(_DWORD*)(a1 + 288) = 2;
		}
		else if (v1 && (result = *(_QWORD*)(v1 + 112), *(_DWORD*)(result + 28)) || (_DWORD)v3 == 8)
		{
			result = 1i64;
			*(_DWORD*)(a1 + 288) = 1;
		}
	}
	return result;
}
// 14054A3C3: variable 'v6' is possibly undefined

