//----- (000000014006ADC0) ----------------------------------------------------
__int64 __fastcall sub_14006ADC0(__int64 a1, int* a2, _DWORD* a3)
{
	int v6; // r8d
	int v7; // ecx
	int v8; // esi
	int v9; // ecx
	int v10; // eax
	__int64 result; // rax
	int v12; // ecx

	sub_14006A700(a1, a2);
	if (*a2 != 12)
		goto LABEL_5;
	if (a2[4] != a2[5])
	{
		v6 = a2[2];
		if (v6 >= *(unsigned __int8*)(a1 + 74))
		{
			sub_14006A980(a1, a2, v6);
			goto LABEL_6;
		}
	LABEL_5:
		sub_14006AAE0(a1, a2);
	}
LABEL_6:
	if (*a2 == 12)
	{
		v7 = a2[2];
		if ((v7 & 0x100) == 0 && v7 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
	}
	v8 = *(_DWORD*)(a1 + 60);
	v9 = v8 + 2;
	if (v8 + 2 > *(unsigned __int8*)(*(_QWORD*)a1 + 115i64))
	{
		if (v9 >= 250)
			sub_140062CF0(*(_QWORD*)(a1 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
		*(_BYTE*)(*(_QWORD*)a1 + 115i64) = v9;
	}
	*(_DWORD*)(a1 + 60) += 2;
	v10 = sub_14006ABD0(a1, (__int64)a3);
	result = sub_14006BBF0(a1, ((v8 | ((v10 | (a2[2] << 9)) << 8)) << 6) | 0xBu, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	if (*a3 == 12)
	{
		v12 = a3[2];
		if ((v12 & 0x100) == 0)
		{
			result = *(unsigned __int8*)(a1 + 74);
			if (v12 >= (int)result)
				--* (_DWORD*)(a1 + 60);
		}
	}
	a2[2] = v8;
	*a2 = 12;
	return result;
}

