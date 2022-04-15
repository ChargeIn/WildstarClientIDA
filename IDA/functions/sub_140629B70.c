//----- (0000000140629B70) ----------------------------------------------------
__int64 __fastcall sub_140629B70(_QWORD* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r11
	__int64 v4; // rsi
	unsigned __int64 v5; // r8
	__int64 v7; // rbx
	unsigned __int64 v8; // rcx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx

	v2 = a1[5];
	v3 = a1[4];
	v4 = (__int64)(a1 + 4);
	v5 = 0i64;
	while (v5 < v2)
	{
		v7 = v5 + ((v2 - v5) >> 1);
		v8 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v7) + 8i64);
		if (a2 < v8)
		{
			v5 = v7 + 1;
		}
		else
		{
			if (a2 <= v8)
				goto LABEL_8;
			v2 = v5 + ((v2 - v5) >> 1);
		}
	}
	v7 = v5;
LABEL_8:
	if (v7 != a1[5])
	{
		v9 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v7) + 8i64);
		if (v9 == a2)
		{
			if (v9 == a1[6])
				a1[6] = 0i64;
			v10 = *(void(__fastcall****)(_QWORD, __int64))(v3 + 8 * v7);
			if (v10)
				(**v10)(v10, 1i64);
			sub_140007270(v4, v7);
		}
	}
	return 0i64;
}

