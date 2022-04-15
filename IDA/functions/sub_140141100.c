//----- (0000000140141100) ----------------------------------------------------
void __fastcall sub_140141100(__int64 a1, float a2)
{
	__int64 v3; // rax
	void(__fastcall * **v4)(_QWORD, __int64); // rdi
	__int64 v5; // rsi
	int* v6; // rax
	__int64 v7; // rcx

	if (a2 != *(float*)(a1 + 672) || !*(_QWORD*)(a1 + 664))
	{
		*(float*)(a1 + 672) = a2;
		sub_140140280(a1);
		if (a2 >= 25.0)
		{
			v3 = *(_QWORD*)(a1 + 16);
			v4 = 0i64;
			if (v3)
				v5 = *(_QWORD*)(v3 + 16);
			else
				v5 = 0i64;
			v6 = sub_14018B280(48i64, 0);
			if (v6)
				v4 = (void(__fastcall***)(_QWORD, __int64))sub_14013EEF0((__int64)v6, v5, a1);
			v7 = *(_QWORD*)(a1 + 664);
			if (v7)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 112i64))(v7, v4);
			if (v4)
				(**v4)(v4, 1i64);
		}
		*(_BYTE*)(a1 + 825) = 0;
	}
}

