//----- (00000001400E9080) ----------------------------------------------------
__int64 __fastcall sub_1400E9080(_QWORD* a1, unsigned __int16* a2)
{
	_QWORD* v2; // rax
	__int64 v3; // rbx
	unsigned __int16* v4; // rsi
	_QWORD* v6; // rcx
	unsigned __int16 v7; // ax
	__int64 i; // r8
	__int64 result; // rax

	v2 = (_QWORD*)a1[404];
	v3 = 0i64;
	v4 = a2;
	if ((_QWORD*)*v2 == v2)
		goto LABEL_13;
	v6 = *(_QWORD**)(v2[1] + 16i64);
	if (!v6 || !a2)
		goto LABEL_13;
	v7 = *a2;
	for (i = 0i64; *a2; v7 = *a2)
	{
		++a2;
		i = v7 + 2860486313i64 * i;
	}
	result = sub_1400D3940(v6, v4, i);
	if (!result)
	{
	LABEL_13:
		if (a1[401])
		{
			while (1)
			{
				result = sub_140156FA0(*(_QWORD*)(a1[400] + 8 * v3), (int*)v4);
				if (result)
					break;
				if ((unsigned __int64)++v3 >= a1[401])
					return 0i64;
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

