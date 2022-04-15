//----- (0000000140111750) ----------------------------------------------------
__int64 __fastcall sub_140111750(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v6; // rax
	__int64 result; // rax

	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	if (a2 >= 0)
	{
		if (a2 > v6)
			a2 = v6;
		if (a3 < a2)
		{
			a3 = a2;
			goto LABEL_5;
		}
	}
	else
	{
		a2 = 0i64;
	}
	if (a3 > v6)
		a3 = v6;
LABEL_5:
	*(_QWORD*)(a1 + 1040) = a2;
	result = -1i64;
	if (a2 == a3)
		a2 = -1i64;
	*(_QWORD*)(a1 + 1024) = a3;
	*(_QWORD*)(a1 + 1048) = a3;
	*(_QWORD*)(a1 + 1032) = a2;
	return result;
}

