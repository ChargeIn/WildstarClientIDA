//----- (00000001400B9FD0) ----------------------------------------------------
void __fastcall sub_1400B9FD0(__int64** a1)
{
	int v2; // eax
	_QWORD* v3; // rdi
	__int64 v4; // rsi
	__int64* v5; // rcx
	int v6; // eax
	__int64* v7; // rcx
	__int64* v8; // rdx
	__int64* v9; // rcx
	__int64 v10; // rax

	if (*a1 && a1[1])
	{
		v2 = *((_DWORD*)a1 + 8);
		if ((v2 & 1) != 0 && (v2 & 2) == 0 && (v2 & 4) == 0)
		{
			v3 = a1 + 6;
			v4 = 3i64;
			*((_DWORD*)a1 + 8) = v2 | 2;
			do
			{
				if (*v3)
					(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**a1 + 24))(
						*a1,
						*v3,
						0i64,
						0i64,
						0i64,
						0i64,
						0i64);
				++v3;
				--v4;
			} while (v4);
			*((_DWORD*)a1 + 9) = sub_14018CDF0();
			v5 = a1[3];
			if (v5)
			{
				(*(void(__fastcall**)(__int64*))(*v5 + 8))(v5);
				a1[3] = 0i64;
			}
			if ((*(int(__fastcall**)(__int64*, __int64*, __int64**, __int64, void(__fastcall*)(__int64, int, __int64), __int64**, _QWORD))(**a1 + 24))(
				*a1,
				a1[1],
				a1 + 3,
				0x80000000i64,
				sub_1400B9DE0,
				a1,
				0i64) < 0)
			{
				*((_DWORD*)a1 + 8) &= ~2u;
				*((_DWORD*)a1 + 8) |= 4u;
			}
		}
		v6 = *((_DWORD*)a1 + 8);
		if ((v6 & 1) == 0 && (v6 & 2) != 0)
		{
			v7 = a1[3];
			if (v7)
			{
				(*(void(__fastcall**)(__int64*))(*v7 + 8))(v7);
				a1[3] = 0i64;
			}
			v8 = a1[2];
			v9 = *a1;
			v10 = **a1;
			if (v8)
				(*(void(__fastcall**)(__int64*, __int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
					v9,
					v8,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
			else
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*, __int64, int))(v10 + 56))(v9, 0i64, a1[1], 500i64, 4);
			*((_DWORD*)a1 + 8) &= ~2u;
		}
	}
}

