//----- (000000014070F5D0) ----------------------------------------------------
__int64 __fastcall sub_14070F5D0(_QWORD* a1)
{
	int v2; // ebx
	_QWORD* v3; // rsi
	void(__fastcall * **v4)(_QWORD); // rbx
	int* v5; // rcx
	int* v6; // r8
	int* v7; // rdx
	unsigned int v8; // edi
	_QWORD* v10; // rsi
	int v11; // [rsp+20h] [rbp-38h]
	__int64 v12; // [rsp+28h] [rbp-30h]
	_QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = (_QWORD*)sub_1405E2380(qword_140C65898 + 26680, v2);
	if (v3)
	{
		v4 = 0i64;
		v5 = sub_14018B280(104i64, 0);
		if (v5)
		{
			v6 = (int*)v3[11];
			v7 = (int*)v3[10];
			v12 = v3[2];
			v11 = 2;
		LABEL_4:
			v13[1] = 0i64;
			LODWORD(v13[0]) = 0;
			v4 = (void(__fastcall***)(_QWORD))sub_14073E140((__int64)v5, v7, v6, 0, v11, v12, v13);
		}
	}
	else
	{
		v10 = (_QWORD*)sub_1405E2270(qword_140C65898 + 26680, v2);
		if (!v10)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		v4 = 0i64;
		v5 = sub_14018B280(104i64, 0);
		if (v5)
		{
			v6 = (int*)v10[4];
			v7 = (int*)v10[3];
			v12 = v10[1];
			v11 = 9;
			goto LABEL_4;
		}
	}
	v8 = sub_14073EB30(a1, v4);
	if (v4)
		(*v4)[1](v4);
	return v8;
}
// 140C65898: using guessed type __int64 qword_140C65898;

