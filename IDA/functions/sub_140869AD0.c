//----- (0000000140869AD0) ----------------------------------------------------
void __fastcall sub_140869AD0(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	_QWORD* v5; // rcx
	__int64 v6; // rax

	for (i = *(_QWORD*)(a1 + 168); i != *(_QWORD*)(a1 + 176); i += 8i64)
	{
		v5 = *(_QWORD**)i;
		if ((*(_BYTE*)(*(_QWORD*)i + 90i64) & 0x40) == 0)
		{
			v6 = v5[7];
			if (v6)
			{
				if (*(_WORD*)(v6 + 72))
					(*(void(__fastcall**)(_QWORD*, __int64))(*v5 + 168i64))(v5, a2);
			}
		}
	}
}

