//----- (0000000140572FC0) ----------------------------------------------------
void __fastcall sub_140572FC0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 i; // rax
	__int64 j; // rax

	if (*(_DWORD*)(a1 + 80))
	{
		v2 = *(_QWORD*)(a1 + 16);
		v3 = *(_QWORD*)(v2 + 16);
		if (v3 != v2)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v3 + 40) + 200i64))(*(_QWORD*)(v3 + 40), 0i64);
				v4 = *(_QWORD*)(v3 + 24);
				if (v4)
				{
					v3 = *(_QWORD*)(v3 + 24);
					for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
						v3 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v3 = j;
					if (*(_QWORD*)(v3 + 24) != j)
						v3 = j;
				}
			} while (v3 != *(_QWORD*)(a1 + 16));
		}
		*(_DWORD*)(a1 + 80) = 0;
	}
}

