//----- (00000001402DC340) ----------------------------------------------------
__int64 __fastcall sub_1402DC340(__int64* a1, unsigned int a2, __int64* a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rax
	__int64 result; // rax
	int v9; // ebx
	void(__fastcall * ***v10)(_QWORD); // rbx
	void(__fastcall * **v11)(_QWORD); // rbx
	__int64* v12; // [rsp+40h] [rbp+8h] BYREF
	unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
	unsigned int v14; // [rsp+58h] [rbp+20h] BYREF
	unsigned int v15; // [rsp+5Ch] [rbp+24h]

	v13 = a2;
	v5 = ((__int64(__fastcall*)(unsigned int*))a1[221])(&v13);
	v6 = *(_QWORD**)(a1[220] + 8 * (v5 % a1[219]));
	if (!v6)
		goto LABEL_5;
	while (v5 != *v6 || !((unsigned int(__fastcall*)(unsigned int*, _QWORD*))a1[222])(&v13, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_5;
	}
	v10 = (void(__fastcall****)(_QWORD))(v6 + 3);
	if (v10)
	{
		v11 = *v10;
		(**v11)(v11);
		*a3 = (__int64)v11;
		return 0i64;
	}
	else
	{
	LABEL_5:
		v14 = v13 & 0x7F;
		v7 = *a1;
		v15 = (v13 >> 7) & 0x7F;
		result = (*(__int64(__fastcall**)(__int64*, unsigned int*, __int64**))(v7 + 112))(a1, &v14, &v12);
		if ((int)result >= 0)
		{
			v9 = sub_1402E0140(v12, v13, a3);
			(*(void(__fastcall**)(__int64*))(*v12 + 8))(v12);
			if (v9 >= 0)
				return 0i64;
			else
				return (unsigned int)v9;
		}
	}
	return result;
}

