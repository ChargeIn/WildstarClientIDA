//----- (000000014071B140) ----------------------------------------------------
_QWORD* __fastcall sub_14071B140(_DWORD* a1)
{
	_QWORD* result; // rax
	__int64 v3; // rax
	int v4; // xmm6_4
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	double v8; // xmm0_8
	int v9; // xmm7_4
	int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rdi
	double v14; // xmm0_8

	result = (_QWORD*)sub_1403D90D0(qword_140C65898, a1[98]);
	if (result && result[408])
	{
		v3 = sub_1403D90D0(qword_140C65898, a1[98]);
		v4 = -1082130432;
		if (v3
			&& (v5 = *(_QWORD*)(v3 + 3264)) != 0
			&& (v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 112i64))(v5, 20i64), (v7 = v6) != 0))
		{
			v8 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v6 + 120i64))(v6);
			v9 = LODWORD(v8);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 112i64))(v7);
		}
		else
		{
			v9 = -1082130432;
		}
		v10 = a1[98];
		v11 = qword_140C65898;
		a1[57] = v9;
		result = (_QWORD*)sub_1403D90D0(v11, v10);
		if (result)
		{
			v12 = result[408];
			if (v12)
			{
				result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 112i64))(
					v12,
					20i64,
					1i64);
				v13 = result;
				if (result)
				{
					v14 = (*(double(__fastcall**)(_QWORD*))(*result + 120i64))(result);
					v4 = LODWORD(v14);
					result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*v13 + 112i64))(v13);
				}
			}
		}
		a1[56] = v4;
		a1[58] = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

