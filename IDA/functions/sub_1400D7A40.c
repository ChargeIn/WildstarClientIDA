//----- (00000001400D7A40) ----------------------------------------------------
__int64 __fastcall sub_1400D7A40(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	char v5; // al
	BOOL* v6; // rdx
	BOOL v7; // ecx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(result + 32) + 2896i64);
		if (v3 && (v4 = *(_QWORD*)(v3 + 16)) != 0)
		{
			if (v4 == result)
				v5 = 1;
			else
				v5 = sub_1400D1A90(v4, result);
		}
		else
		{
			v5 = 0;
		}
		v6 = (BOOL*)a1[2];
		v7 = v5 != 0;
		v6[2] = 1;
		result = 1i64;
		*v6 = v7;
		a1[2] += 16i64;
	}
	return result;
}

