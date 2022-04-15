//----- (00000001405CF080) ----------------------------------------------------
void __fastcall sub_1405CF080(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rbp
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	__int64 v8; // rdx
	__int64* v9; // rbx
	__int64 v10; // rbx

	v4 = a2 + 8;
	v6 = (*(__int64(__fastcall**)(__int64))(a1 + 592))(a2 + 8);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 584) + 8 * (v6 % *(_QWORD*)(a1 + 576)));
	if (v7)
	{
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 600))(v4, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				return;
		}
		v9 = v7 + 3;
		if (v9)
		{
			v10 = *v9;
			if (v10)
			{
				sub_1405CAE70(v10, v8, a3, a4);
				sub_14018B900(v10, 0);
			}
		}
	}
}
// 1405CF0F2: variable 'v8' is possibly undefined

