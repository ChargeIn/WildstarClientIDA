//----- (00000001404A0A70) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A0A70(__int64 a1, int a2, float a3, unsigned int a4)
{
	float v7; // xmm6_4
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rbx
	double v12; // xmm0_8
	float v13; // xmm6_4

	if (!qword_140C65980)
		return 0i64;
	v7 = 0.0;
	v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
		qword_140C65980,
		a4,
		0i64);
	if (v8)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 104i64))(v8))
		{
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
				qword_140C65980,
				a4,
				0i64);
			v11 = v10;
			if (v10)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 240i64))(v10))
				{
					v12 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v11 + 136i64))(v11);
					v7 = *(float*)&v12;
				}
				else if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 208i64))(v11))
				{
					v13 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v11 + 152i64))(v11);
					v7 = v13 / (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v11 + 208i64))(v11);
				}
			}
		}
	}
	return sub_1404A2010(v9, a2, v7 * 100.0, a3);
}
// 1404A0B6A: variable 'v9' is possibly undefined
// 140C65980: using guessed type __int64 qword_140C65980;

