//----- (000000014035BEC0) ----------------------------------------------------
__int64 __fastcall sub_14035BEC0(__int64 a1, _DWORD* a2, __int64* a3)
{
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int* v8; // rax
	void(__fastcall * ***v9)(_QWORD); // rbx
	void(__fastcall * **v10)(_QWORD); // rbx

	v6 = (*(__int64(__fastcall**)(_DWORD*))(a1 + 2384))(a2);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 2376) + 8 * (v6 % *(_QWORD*)(a1 + 2368)));
	if (!v7)
		goto LABEL_5;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(_DWORD*, _QWORD*))(a1 + 2392))(a2, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_5;
	}
	v9 = (void(__fastcall****)(_QWORD))(v7 + 3);
	if (v9)
	{
		v10 = *v9;
		(**v10)(v10);
		*a3 = (__int64)v10;
	}
	else
	{
	LABEL_5:
		v8 = sub_14018B280(112i64, 0);
		if (v8)
			*a3 = sub_14038F6A0((__int64)v8, a1, a2);
		else
			*a3 = 0i64;
	}
	return 0i64;
}

