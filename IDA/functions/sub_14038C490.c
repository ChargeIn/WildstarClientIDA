//----- (000000014038C490) ----------------------------------------------------
void __fastcall sub_14038C490(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
	__int64* v7; // rcx
	unsigned int v8; // edi
	__int64 v9; // r8
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 32))
	{
		v8 = sub_14038C430(a1, a3);
		if (v8)
		{
			v9 = *v7;
			v10[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v9 + 32))(v7, v10);
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD**)(a1 + 32) + 1320i64))(
				*(_QWORD*)(a1 + 32),
				a2,
				v8,
				a4);
		}
	}
}
// 14038C4C2: variable 'v7' is possibly undefined
// 14038C490: using guessed type int var_18[6];

