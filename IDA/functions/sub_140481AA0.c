//----- (0000000140481AA0) ----------------------------------------------------
void __fastcall sub_140481AA0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rdx
	__int64 v7; // rax
	__int64 i; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	if (*(_QWORD*)a2 == *(_QWORD*)(v4 + 16) && *a3 == v4)
	{
		sub_140008410(a1);
	}
	else
	{
		while (*(_QWORD*)a2 != *a3)
		{
			v9 = *(_QWORD*)a2;
			v7 = *(_QWORD*)(v9 + 24);
			if (v7)
			{
				for (*(_QWORD*)a2 = v7; *(_QWORD*)(v7 + 16); *(_QWORD*)a2 = v7)
					v7 = *(_QWORD*)(v7 + 16);
			}
			else
			{
				for (i = *(_QWORD*)(*(_QWORD*)a2 + 8i64); *(_QWORD*)a2 == *(_QWORD*)(i + 24); i = *(_QWORD*)(i + 8))
					*(_QWORD*)a2 = i;
				if (*(_QWORD*)(*(_QWORD*)a2 + 24i64) != i)
					*(_QWORD*)a2 = i;
			}
			sub_140481F20(a1, &v9);
		}
	}
}

