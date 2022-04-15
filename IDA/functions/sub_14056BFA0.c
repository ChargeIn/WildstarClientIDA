//----- (000000014056BFA0) ----------------------------------------------------
__int64 __fastcall sub_14056BFA0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 i; // rbx
	int v5; // eax
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 j; // rax

	result = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(result + 16);
	i = *(_QWORD*)(v3 + 16);
	if (i != v3)
	{
		do
		{
			v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 80i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(*(_QWORD*)(i + 40) + 8i64));
			sub_140570570(**(_QWORD**)(i + 40), ***(_DWORD***)(i + 40), v5 != 0);
			v6 = *(_QWORD*)(i + 24);
			if (v6)
			{
				v7 = *(_QWORD*)(v6 + 16);
				for (i = *(_QWORD*)(i + 24); v7; v7 = *(_QWORD*)(v7 + 16))
					i = v7;
			}
			else
			{
				for (j = *(_QWORD*)(i + 8); i == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					i = j;
				if (*(_QWORD*)(i + 24) != j)
					i = j;
			}
			result = *(_QWORD*)(a1 + 16);
		} while (i != *(_QWORD*)(result + 16));
	}
	return result;
}

