//----- (0000000140710E00) ----------------------------------------------------
__int64 __fastcall sub_140710E00(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	unsigned int v7; // edi
	char v8; // al
	__int64 v9; // rcx
	float v10; // xmm0_4
	__int64 v11; // r11
	__int64 result; // rax

	v1 = 0i64;
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
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v1 + 384, 1);
	v8 = sub_1400F26A0(v1 + 384, 2);
	*(_QWORD*)(a1 + 16) -= 32i64;
	v10 = COERCE_FLOAT(sub_14048DD20(v9, v7, v8));
	*(_DWORD*)(v11 + 8) = 3;
	result = 1i64;
	*(double*)v11 = v10;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140710E86: variable 'v9' is possibly undefined
// 140710E90: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

