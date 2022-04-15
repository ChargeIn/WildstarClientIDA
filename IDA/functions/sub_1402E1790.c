//----- (00000001402E1790) ----------------------------------------------------
__int64 __fastcall sub_1402E1790(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD), __int64* a4)
{
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	int* v10; // rax
	__int64 v11; // rax
	void(__fastcall * ***v13)(_QWORD); // rbx
	void(__fastcall * **v14)(_QWORD); // rbx
	__int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF

	v15[0] = a2;
	v15[1] = (__int64)a3;
	v8 = (*(__int64(__fastcall**)(__int64*))(a1 + 112))(v15);
	v9 = *(_QWORD**)(*(_QWORD*)(a1 + 104) + 8 * (v8 % *(_QWORD*)(a1 + 96)));
	if (!v9)
		goto LABEL_5;
	while (v8 != *v9 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 120))(v15, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			goto LABEL_5;
	}
	v13 = (void(__fastcall****)(_QWORD))(v9 + 4);
	if (v13)
	{
		v14 = *v13;
		(**v14)(v14);
		*a4 = (__int64)v14;
		return 0i64;
	}
	else
	{
	LABEL_5:
		v10 = sub_14018B280(56i64, 1u);
		if (v10 && (v11 = sub_1402E6820((__int64)v10, a1, a2, a3)) != 0)
		{
			*a4 = v11;
			return 0i64;
		}
		else
		{
			return 2147942414i64;
		}
	}
}

