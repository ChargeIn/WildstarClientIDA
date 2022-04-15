//----- (00000001405728B0) ----------------------------------------------------
void __fastcall sub_1405728B0(__int64 a1)
{
	unsigned __int64 v2; // rbp
	__int64 v3; // r14
	__int64 v4; // rdi
	__int64 i; // rax

	sub_140195D70(a1 + 216);
	v2 = 0i64;
	if (*(_QWORD*)(a1 + 208))
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + v3 + 8);
			if (v4)
			{
				for (i = *(_QWORD*)(v4 + 24); i; i = *(_QWORD*)(v4 + 24))
					(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)i + 40i64))(i, 0i64, 1i64);
				if (*(_QWORD*)(v4 + 24))
					sub_1401A4A00((const void***)(v4 + 24));
				sub_14018B900(v4, 0);
			}
			++v2;
			v3 += 16i64;
		} while (v2 < *(_QWORD*)(a1 + 208));
		*(_QWORD*)(a1 + 208) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 208) = 0i64;
	}
}

