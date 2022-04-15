//----- (000000014084E780) ----------------------------------------------------
void __fastcall sub_14084E780(__int64 a1, unsigned int a2, __int64* a3, unsigned __int64 a4)
{
	__int64 v6; // rsi
	__int64 v8; // rcx
	__int64 v9; // rcx
	unsigned int v10; // edx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx

	v6 = a2;
	if ((*(_BYTE*)(a1 + 91) & 0x40) != 0 || (v8 = *(_QWORD*)(a1 + 64)) == 0)
	{
		v9 = *(_QWORD*)(a1 + 48);
		if (v9)
		{
			v10 = *(_DWORD*)(v9 + 8i64 * a2 + 4);
			if (v10)
			{
				if (*(_BYTE*)(v9 + 8 * v6 + 1))
					v11 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328), v10);
				else
					v11 = sub_14083EDE0(qword_140C61BA8 + 398, v10);
				v12 = *a3;
				*a3 = v11;
			}
			else
			{
				v12 = *a3;
				*a3 = 0i64;
			}
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
			*((_BYTE*)a3 + 8) = sub_14084E540((_QWORD*)a1, v6, a4);
		}
		else
		{
			v13 = *a3;
			*a3 = 0i64;
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
			*((_BYTE*)a3 + 8) = 0;
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 448i64))(v8, a2);
	}
}

