//----- (000000014074AF50) ----------------------------------------------------
__int64 __fastcall sub_14074AF50(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int16 v8; // ax
	int v9; // eax
	_DWORD* v10; // rcx
	bool v11; // sf
	__int64 result; // rax
	int v13; // [rsp+30h] [rbp+8h] BYREF
	int v14; // [rsp+34h] [rbp+Ch]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v13 = HIBYTE(v8);
	v14 = (unsigned __int8)v8;
	if (*(_QWORD*)(qword_140C65898 + 26392))
		v9 = sub_1403A6B50(qword_140C65898, &v13);
	else
		v9 = -2147467259;
	v10 = *(_DWORD**)(a1 + 16);
	v11 = v9 < 0;
	result = 1i64;
	LOBYTE(v1) = !v11;
	v10[2] = 1;
	*v10 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

