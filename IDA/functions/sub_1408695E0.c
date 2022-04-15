//----- (00000001408695E0) ----------------------------------------------------
void __fastcall sub_1408695E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* i; // rbx
	__int64 v9; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		v9 = *(_QWORD*)(*i + 56i64);
		if (v9)
		{
			if (*(_WORD*)(v9 + 72))
				(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(*(_QWORD*)*i + 208i64))(*i, a2, a3, a4);
		}
	}
}

