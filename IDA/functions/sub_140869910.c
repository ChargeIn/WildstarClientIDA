//----- (0000000140869910) ----------------------------------------------------
void __fastcall sub_140869910(__int64 a1, unsigned int* a2)
{
	_QWORD* i; // rbx
	__int64 v5; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		if (!*((_BYTE*)a2 + 16) || !*(_QWORD*)(*i + 72i64))
		{
			v5 = *(_QWORD*)(*i + 56i64);
			if (v5
				&& *(_WORD*)(v5 + 72)
				&& !(*(unsigned __int8(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*i + 488i64))(*i, *a2))
			{
				(*(void(__fastcall**)(_QWORD, unsigned int*))(*(_QWORD*)*i + 160i64))(*i, a2);
			}
		}
	}
}

