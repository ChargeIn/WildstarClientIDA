//----- (0000000140877090) ----------------------------------------------------
void __fastcall sub_140877090(__int64 a1, __int64 a2, float a3, char a4)
{
	float v7; // xmm0_4
	__int64 v8; // rcx
	float v9; // xmm6_4
	__int64 v10; // r8
	float v11; // xmm0_4

	v7 = sub_14085A7D0(*(_QWORD*)(a1 + 8), a2);
	v8 = *(_QWORD*)(a1 + 8);
	*(float*)(a1 + 24) = a3;
	v9 = v7;
	v11 = sub_14085A7D0(v8, a2);
	if (a4)
	{
		sub_140859AC0(*(_QWORD*)(a1 + 8));
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	if ((float)(v11 - v9) != 0.0)
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 176i64))(
			*(_QWORD*)(a1 + 8),
			(unsigned int)dword_1409A3530[a2],
			v10,
			0i64,
			0i64);
}
// 140877116: variable 'v10' is possibly undefined
// 1409A3530: using guessed type int dword_1409A3530[];

