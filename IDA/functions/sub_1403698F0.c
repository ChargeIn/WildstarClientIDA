//----- (00000001403698F0) ----------------------------------------------------
__int64 __fastcall sub_1403698F0(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int* v8; // rax
	void(__fastcall * **v9)(_QWORD); // rbx
	void(__fastcall * ***v10)(_QWORD); // rbx
	int v12; // edi
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	if (!a2 || !a3)
		return 2147942487i64;
	v13 = a2;
	v6 = (*(__int64(__fastcall**)(__int64*))(a1 + 5120))(&v13);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 5112) + 8 * (v6 % *(_QWORD*)(a1 + 5104)));
	if (v7)
	{
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 5128))(&v13, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				goto LABEL_7;
		}
		v10 = (void(__fastcall****)(_QWORD))(v7 + 3);
		if (v10)
		{
			v9 = *v10;
			(**v9)(v9);
		LABEL_11:
			*a3 = v9;
			return 0i64;
		}
	}
LABEL_7:
	v8 = sub_14018B280(1312i64, 0);
	if (v8)
		v9 = (void(__fastcall***)(_QWORD))sub_1403757E0((__int64)v8, a1);
	else
		v9 = 0i64;
	v12 = sub_1403763A0((__int64)v9, a2);
	if (v12 >= 0)
		goto LABEL_11;
	if (v9)
	{
		sub_140375B60((__int64)v9);
		sub_14018B900((__int64)v9, 0);
	}
	return (unsigned int)v12;
}

