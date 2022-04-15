//----- (0000000140629AF0) ----------------------------------------------------
__int64 __fastcall sub_140629AF0(__int64 a1, unsigned __int64 a2)
{
	__int64 v3; // r11
	unsigned __int64 v4; // rbx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // r10
	__int64 result; // rax

	if (!a2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 32);
	v4 = *(_QWORD*)(a1 + 40);
	v5 = 0i64;
	v6 = v4;
	while (v5 < v6)
	{
		v7 = v5 + ((v6 - v5) >> 1);
		v8 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v7) + 8i64);
		if (a2 < v8)
		{
			v5 = v7 + 1;
		}
		else
		{
			if (a2 <= v8)
				goto LABEL_9;
			v6 = v5 + ((v6 - v5) >> 1);
		}
	}
	v7 = v5;
LABEL_9:
	if (v7 == v4)
		return 0i64;
	result = *(_QWORD*)(v3 + 8 * v7);
	if (*(_QWORD*)(result + 8) != a2)
		return 0i64;
	return result;
}

