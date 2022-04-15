//----- (0000000140869E20) ----------------------------------------------------
void __fastcall sub_140869E20(__int64 a1, unsigned int a2)
{
	_QWORD* i; // rbx
	__int64 v5; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		v5 = *(_QWORD*)(*i + 56i64);
		if (v5)
		{
			if (*(_WORD*)(v5 + 72))
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*i + 264i64))(*i, a2);
		}
	}
}

