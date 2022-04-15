//----- (000000014033DF80) ----------------------------------------------------
__int64* __fastcall sub_14033DF80(_QWORD* a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v4; // r11
	__int64 v6; // rdx
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // r8
	__int64* result; // rax

	v3 = a1[2];
	v4 = a1[3];
	v6 = a1[1];
	v7 = a3 + ((*a1 - v6) >> 4);
	if ((unsigned __int64)v7 > 0x1E)
	{
		if (v7 <= 0)
			v9 = -1i64 - (-1 - v7) / 0x1Fui64;
		else
			v9 = v7 / 31;
		v6 = *(_QWORD*)(v4 + 8 * v9);
		v4 += 8 * v9;
		v3 = v6 + 496;
		v8 = v6 + 16 * (v7 - 31 * v9);
	}
	else
	{
		v8 = 16 * a3 + *a1;
	}
	*a2 = v8;
	a2[2] = v3;
	result = a2;
	a2[1] = v6;
	a2[3] = v4;
	return result;
}

