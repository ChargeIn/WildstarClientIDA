//----- (000000014084EA60) ----------------------------------------------------
__int64 __fastcall sub_14084EA60(__int64 a1, _DWORD* a2)
{
	__int64 v3; // rax
	__int64 v4; // rdx
	unsigned __int8 v5; // bl
	__int64 v6; // rax
	__int64 v7; // r8
	unsigned __int8 v8; // al
	__int64 v9; // rdx

	*a2 = 0;
	do
	{
		v3 = a1;
		a1 = *(_QWORD*)(a1 + 64);
	} while ((*(_BYTE*)(v3 + 91) & 0x10) == 0 && a1);
	v4 = *(_QWORD*)(v3 + 120);
	v5 = 0;
	if (v4)
	{
		v6 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(v4 + 12));
		v7 = v6;
		if (v6)
		{
			v8 = *(_BYTE*)(v6 + 128);
			if (v8 != 0xFF)
			{
				v9 = v7 + 16 * (v8 + 3i64);
				if (v9)
				{
					v5 = 1;
					*a2 = *(_DWORD*)(*(_QWORD*)v9 + 12i64 * (unsigned int)(*(_DWORD*)(v9 + 8) - 1));
				}
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
		}
	}
	return v5;
}

