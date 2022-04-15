//----- (000000014063A490) ----------------------------------------------------
void __fastcall sub_14063A490(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // rdi
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		do
		{
			v3 = a1[2] + 8 * v1;
			while (*(_QWORD*)v3)
			{
				v4 = *(_QWORD**)v3;
				*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
				v5 = v4[11];
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
				v6 = v4[9];
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
				v7 = v4[7];
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
				v8 = v4[5];
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				v9 = v4[3];
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
				sub_14018B900((__int64)v4, 0);
			}
			++v1;
		} while (v1 < a1[1]);
		*a1 = 0i64;
	}
	else
	{
		*a1 = 0i64;
	}
}

