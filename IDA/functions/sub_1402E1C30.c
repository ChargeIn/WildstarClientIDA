//----- (00000001402E1C30) ----------------------------------------------------
void __fastcall sub_1402E1C30(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v5; // rax
	int* v6; // rbx
	unsigned __int64 v7; // r15
	unsigned __int64 v8; // r13
	__int64 v9; // r12
	__int64 v10; // r14
	void(__fastcall * v11)(__int64, __int64, _QWORD); // rax
	unsigned __int64 i; // rdi
	unsigned __int64 v13; // rbp
	int* v14; // rbx
	unsigned __int64 v15; // r14
	__int64 v16; // rax
	void(__fastcall * v17)(__int64, _QWORD, _QWORD); // r9
	int* v18; // [rsp+60h] [rbp+18h] BYREF

	if (a2 != 26)
	{
		if (((1i64 << a2) & 0x408072003i64) == 0)
			return;
		v13 = 0i64;
		v18 = 0i64;
		if ((int)sub_1402E1870(a3, a1, &v18) >= 0)
		{
			v14 = v18;
			v15 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v18 + 16i64))(v18);
			if (v15)
			{
				do
				{
					v16 = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v14 + 24i64))(v14, v13);
					*(_QWORD*)(v16 + 48) &= ~(1i64 << a2);
					v17 = *(void(__fastcall**)(__int64, _QWORD, _QWORD))(a3 + 152);
					if (v17)
						v17(v16, a2, *(_QWORD*)(a3 + 224));
					++v13;
				} while (v13 < v15);
			}
			v5 = *(_QWORD*)v14;
		LABEL_21:
			(*(void (**)(void))(v5 + 8))();
			return;
		}
	LABEL_3:
		if (!v18)
			return;
		v5 = *(_QWORD*)v18;
		goto LABEL_21;
	}
	v18 = 0i64;
	if ((int)sub_1402E1870(a3, a1, &v18) < 0)
		goto LABEL_3;
	v6 = v18;
	v7 = 0i64;
	v8 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v18 + 16i64))(v18);
	if (v8)
	{
		v9 = 0x408072003i64;
		do
		{
			v10 = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v6 + 24i64))(v6, v7);
			*(_QWORD*)(v10 + 48) &= ~0x4000000ui64;
			v11 = *(void(__fastcall**)(__int64, __int64, _QWORD))(a3 + 152);
			if (v11)
			{
				v11(v10, 26i64, *(_QWORD*)(a3 + 224));
				for (i = 0i64; i < 0x26; ++i)
				{
					if (_bittest64(&v9, i))
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(a3 + 152))(v10, (unsigned int)i, *(_QWORD*)(a3 + 224));
				}
			}
			++v7;
		} while (v7 < v8);
	}
	(*(void(__fastcall**)(int*))(*(_QWORD*)v6 + 8i64))(v6);
}

