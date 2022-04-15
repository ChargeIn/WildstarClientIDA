//----- (00000001402D9CC0) ----------------------------------------------------
__int64 __fastcall sub_1402D9CC0(__int64 a1, __int64 a2, _QWORD* a3)
{
	BOOL v6; // ebx
	BOOL v7; // eax
	int* v8; // rbx
	int v9; // edi
	void(__fastcall * *v11)(_QWORD); // rax
	void(__fastcall * **v12)(_QWORD); // rcx
	__int64 v13; // rcx

	v6 = a1 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v7 = a2 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	if (!v6)
	{
		if (v7)
		{
			*a3 = a2;
			v11 = *(void(__fastcall***)(_QWORD))a2;
			v12 = (void(__fastcall***)(_QWORD))a2;
		}
		else
		{
			v13 = qword_140C657F8;
			*a3 = *(_QWORD*)(qword_140C657F8 + 656);
			v12 = *(void(__fastcall****)(_QWORD))(v13 + 656);
			v11 = *v12;
		}
		goto LABEL_23;
	}
	if (!v7)
	{
		*a3 = a1;
		v11 = *(void(__fastcall***)(_QWORD))a1;
		v12 = (void(__fastcall***)(_QWORD))a1;
	LABEL_23:
		(*v11)(v12);
		return 0i64;
	}
	v8 = sub_14018B280(32i64, 0);
	if (v8)
	{
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = 0i64;
		*(_QWORD*)v8 = off_140B62F38;
		*((_QWORD*)v8 + 3) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = sub_1402DE970((__int64)v8, a1, a2);
	if (v9 >= 0)
	{
		*a3 = v8;
		return 0i64;
	}
	if (v8)
		sub_1402D9C80(v8);
	return (unsigned int)v9;
}
// 140B62F38: using guessed type __int64 (__fastcall *off_140B62F38[20])();
// 140C657F8: using guessed type __int64 qword_140C657F8;

