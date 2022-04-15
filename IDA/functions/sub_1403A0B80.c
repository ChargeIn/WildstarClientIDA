//----- (00000001403A0B80) ----------------------------------------------------
void __fastcall sub_1403A0B80(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // r8
	_QWORD* v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rbx
	_QWORD* v8; // rax

	v2 = *(_QWORD*)(a1 + 26664);
	if (v2)
	{
		v3 = *(_QWORD*)(a1 + 120);
		if (v3)
		{
			if (*(_DWORD*)(a1 + 26672))
			{
				if (*(_DWORD*)(v2 + 84) == *(_DWORD*)(v3 + 8))
					return;
				sub_1403A0C50(a1);
			}
			*(_DWORD*)(*(_QWORD*)(a1 + 26664) + 84i64) = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
			v4 = *(_QWORD*)(a1 + 26664);
			v5 = (_QWORD*)(*(_QWORD*)(a1 + 120) + 5616i64);
			if (!*(_QWORD*)(v4 + 40))
			{
				*(_QWORD*)(v4 + 40) = v5;
				*(_QWORD*)(v4 + 48) = *v5;
				*v5 = v4;
				v6 = *(_QWORD*)(v4 + 48);
				if (v6)
					*(_QWORD*)(v6 + 40) = v4 + 48;
			}
			if (sub_1405BBBB0())
			{
				v7 = *(_QWORD*)(a1 + 26664);
				v8 = sub_1405BBBB0();
				sub_1405BBC70((__int64)v8, *(_DWORD*)(v7 + 84), v7);
			}
			*(_DWORD*)(a1 + 26672) = 1;
		}
	}
}

