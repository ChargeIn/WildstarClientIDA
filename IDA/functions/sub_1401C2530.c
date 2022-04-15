//----- (00000001401C2530) ----------------------------------------------------
__int64 __fastcall sub_1401C2530(__int64 a1, int** a2)
{
	int* v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(32i64, 0);
	if (v5)
	{
		*(_QWORD*)v5 = off_140B5F348;
		*((_QWORD*)v5 + 2) = 0i64;
		*((_QWORD*)v5 + 1) = 0i64;
		v5[6] = 1;
	}
	else
	{
		v5 = 0i64;
	}
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 16i64))(
		*(_QWORD*)(a1 + 96),
		0xFFFFFFFFi64))
	{
		sub_1401C3160((__int64*)v5 + 1, *(_QWORD*)(a1 + 120));
		v6 = *(_QWORD*)(a1 + 112);
		v7 = *(_QWORD*)(v6 + 16);
		if (v7 != v6)
		{
			do
			{
				sub_1401C31D0((__int64*)v5 + 1, v7 + 32);
				v8 = *(_QWORD*)(v7 + 24);
				if (v8)
				{
					v7 = *(_QWORD*)(v7 + 24);
					for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
						v7 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v7 = j;
					if (*(_QWORD*)(v7 + 24) != j)
						v7 = j;
				}
			} while (v7 != *(_QWORD*)(a1 + 112));
		}
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96));
	}
	*a2 = v5;
	return 0i64;
}
// 140B5F348: using guessed type __int64 (__fastcall *off_140B5F348[6])();

