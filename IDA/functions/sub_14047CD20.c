//----- (000000014047CD20) ----------------------------------------------------
unsigned __int64 __fastcall sub_14047CD20(__int64 a1)
{
	unsigned __int64 v1; // r8
	unsigned __int64 result; // rax
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // r9
	bool v5; // zf
	_DWORD* v6; // r8

	v1 = *(_QWORD*)(a1 + 5344);
	result = 0i64;
	while (result < v1)
	{
		v3 = result + ((v1 - result) >> 1);
		if (*(_DWORD*)(a1 + 5316) > *(_DWORD*)(*(_QWORD*)(a1 + 5336) + 48 * v3 + 12))
			result = v3 + 1;
		else
			v1 = result + ((v1 - result) >> 1);
	}
	v4 = *(_QWORD*)(a1 + 5344);
	v5 = result == v4;
	if (result < v4)
	{
		v6 = (_DWORD*)(*(_QWORD*)(a1 + 5336) + 12i64 + 48 * result);
		do
		{
			if (*v6 != *(_DWORD*)(a1 + 5316))
				break;
			++result;
			v6 += 12;
		} while (result < v4);
		v5 = result == v4;
	}
	if (!v5)
	{
		*(_DWORD*)(a1 + 5316) = *(_DWORD*)(*(_QWORD*)(a1 + 5336) + 48 * result + 12);
		return sub_14047CAB0(a1);
	}
	return result;
}
// 14047CAB0: using guessed type __int64 __fastcall sub_14047CAB0(_QWORD);

