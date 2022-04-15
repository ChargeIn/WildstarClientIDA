//----- (0000000140711110) ----------------------------------------------------
__int64 __fastcall sub_140711110(__int64 a1)
{
	unsigned __int64 v2; // rcx
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rcx
	__int64 v9; // rbx
	float v10; // xmm0_4
	int v11; // r8d
	__int64 result; // rax
	int v13; // r11d

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if ((dword_140DC4DAC & 1) == 0)
	{
		dword_140DC4DB4 = 0;
		dword_140DC4DBC = 0;
		dword_140DC4DC4 = 0;
		dword_140DC4DCC = 0;
		dword_140DC4DD4 = 0;
		dword_140DC4DAC |= 1u;
	}
	sub_14079D2F0(v8, v7);
	v9 = *(_QWORD*)(a1 + 16);
	v10 = sub_1403AC060(qword_140C65898 + 7160, 4, 3u);
	*(_DWORD*)(v9 + 8) = v11;
	result = (unsigned int)(v11 - 2);
	*(double*)v9 = (double)(int)(float)(v10 * (float)v13);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 1407111A8: variable 'v8' is possibly undefined
// 1407111D0: variable 'v11' is possibly undefined
// 1407111DB: variable 'v13' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4DAC: using guessed type int dword_140DC4DAC;
// 140DC4DB4: using guessed type int dword_140DC4DB4;
// 140DC4DBC: using guessed type int dword_140DC4DBC;
// 140DC4DC4: using guessed type int dword_140DC4DC4;
// 140DC4DCC: using guessed type int dword_140DC4DCC;
// 140DC4DD4: using guessed type int dword_140DC4DD4;

