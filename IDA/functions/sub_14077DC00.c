//----- (000000014077DC00) ----------------------------------------------------
void __fastcall sub_14077DC00(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64* v5; // rbx
	__int64 v6; // rbp
	unsigned __int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // [rsp+38h] [rbp+10h] BYREF

	v10 = a2;
	v3 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v10);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v3 % *(_QWORD*)(a1 + 8)));
	if (v4)
	{
		while (v3 != *v4 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 32))(&v10, v4 + 2))
		{
			v4 = (_QWORD*)v4[1];
			if (!v4)
				return;
		}
		v5 = v4 + 3;
		if (v5)
		{
			v6 = *v5;
			v7 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v10);
			v8 = *(_QWORD*)(a1 + 16) + 8 * (v7 % *(_QWORD*)(a1 + 8));
			if (*(_QWORD*)v8)
			{
				while (v7 != **(_QWORD**)v8
					|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 32))(&v10, *(_QWORD*)v8 + 16i64))
				{
					v8 = *(_QWORD*)v8 + 8i64;
					if (!*(_QWORD*)v8)
						goto LABEL_13;
				}
				v9 = *(_QWORD*)v8;
				*(_QWORD*)v8 = *(_QWORD*)(*(_QWORD*)v8 + 8i64);
				sub_14018B900(v9, 0);
				--* (_QWORD*)a1;
			}
		LABEL_13:
			sub_14018B900(v6, 0);
		}
	}
}

