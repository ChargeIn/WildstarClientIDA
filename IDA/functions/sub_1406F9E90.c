//----- (00000001406F9E90) ----------------------------------------------------
__int64 __fastcall sub_1406F9E90(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	BOOL v8; // ebx
	int v9; // eax
	int v10; // eax
	int v11; // ebx
	__int64 v12; // r11
	__int64 v13; // r11
	_DWORD* v14; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = 0;
	v9 = sub_1400F26A0(v7 + 384, 1);
	if (v9)
	{
		v10 = v9 - 1;
		if (v10)
		{
			if (v10 != 1)
				sub_140056570(a1, 1u, "bad GuildHolomark");
			v11 = *(_DWORD*)(qword_140C65898 + 25384) >> 7;
			goto LABEL_16;
		}
		if ((unsigned int)sub_1403ABFE0(qword_140C65898 + 7160, 28, 0))
		{
			v11 = *(_DWORD*)(v12 + 25384) >> 6;
		LABEL_16:
			v8 = (v11 & 1) == 0;
		}
	}
	else if ((unsigned int)sub_1403ABFE0(qword_140C65898 + 7160, 28, 0))
	{
		v11 = *(_DWORD*)(v13 + 25384) >> 5;
		goto LABEL_16;
	}
	v14 = (_DWORD*)a1[2];
	LOBYTE(v1) = v8;
	v14[2] = 1;
	result = 1i64;
	*v14 = v1;
	a1[2] += 16i64;
	return result;
}
// 1406F9F4A: variable 'v12' is possibly undefined
// 1406F9F74: variable 'v13' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

