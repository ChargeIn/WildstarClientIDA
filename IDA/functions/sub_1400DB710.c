//----- (00000001400DB710) ----------------------------------------------------
__int64 __fastcall sub_1400DB710(_QWORD* a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64* v7; // rcx
	int v8; // eax
	double v9; // xmm0_8
	float v10; // xmm6_4
	int* v11; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+58h] [rbp+10h] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = sub_1400D66A0(a1, 1u);
	if (v6)
	{
		v7 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v7 = (__int64*)(a1[3] + 16i64);
		v8 = *((_DWORD*)v7 + 2);
		if (v8 != 3)
		{
			if (v8 != 4 || !sub_14005AC80((char*)(*v7 + 32), (unsigned __int64*)&v15))
			{
				v9 = 0.0;
				goto LABEL_13;
			}
			v14 = 3;
			v7 = &v13;
			v13 = v15;
		}
		v9 = *(double*)v7;
	LABEL_13:
		if (!*(_QWORD*)(v6 + 792))
		{
			v11 = sub_14018B280(48i64, 0);
			if (v11)
				v1 = sub_1401095E0((__int64)v11);
			*(_QWORD*)(v6 + 792) = v1;
		}
		v10 = v9;
		*(float*)(*(_QWORD*)(v6 + 792) + 8i64) = *(float*)&dword_140C63664 - v10;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;

