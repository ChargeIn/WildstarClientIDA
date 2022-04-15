//----- (00000001402514B0) ----------------------------------------------------
__int64 __fastcall sub_1402514B0(int a1, __int64 a2, int a3)
{
	int* v3; // rbx
	int* v7; // r8
	__int64 v8; // rax
	int* v10; // rax
	int v11; // edi
	int* v12; // rax

	v3 = 0i64;
	if (!dword_140C6566C)
	{
		qword_140C63778 = (__int64)sub_1407FB190;
		qword_140C63780 = (__int64)sub_1407F8F7C;
		v7 = sub_14018B280(24i64, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = 2i64;
			*((_QWORD*)v7 + 2) = 0i64;
			*(_QWORD*)v7 = &unk_140AE37C8;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = qword_140C63770;
		dword_140C6566C = 1;
		qword_140C63770 = (__int64)v7;
		*((_QWORD*)v7 + 2) = v8;
	}
	if (a1)
	{
		if (a1 != 1)
			return 2685272065i64;
		v10 = sub_14018B280(8672i64, 0);
		if (v10)
			v3 = (int*)sub_140275A30((__int64)v10, a2);
		v11 = sub_1402765B0((__int64)v3, a3);
		if (v11 < 0)
			goto LABEL_20;
	LABEL_19:
		qword_140C65670 = (__int64)v3;
		return 0i64;
	}
	v12 = sub_14018B280(10448i64, 0);
	if (v12)
		v3 = (int*)sub_140268DB0((__int64)v12, a2);
	v3[1560] = a3;
	v11 = sub_140269350((__int64)v3);
	if (v11 >= 0)
	{
		v11 = sub_140269730(v3);
		if (v11 >= 0)
		{
			v11 = sub_1402698C0((__int64)v3);
			if (v11 >= 0)
			{
				v11 = (*(__int64(__fastcall**)(int*, int*))(*(_QWORD*)v3 + 40i64))(v3, v3 + 14);
				if (v11 >= 0)
					goto LABEL_19;
			}
		}
	}
LABEL_20:
	(*(void(__fastcall**)(int*))(*(_QWORD*)v3 + 8i64))(v3);
	return (unsigned int)v11;
}
// 1407FB190: using guessed type __int64 __fastcall sub_1407FB190();
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C63778: using guessed type __int64 qword_140C63778;
// 140C63780: using guessed type __int64 qword_140C63780;
// 140C6566C: using guessed type int dword_140C6566C;
// 140C65670: using guessed type __int64 qword_140C65670;

