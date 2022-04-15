//----- (000000014079D700) ----------------------------------------------------
__int64 __fastcall sub_14079D700(__int64* a1, int a2, int a3, int a4, int a5)
{
	int v5; // eax
	BOOL v8; // eax
	unsigned int v9; // ebp
	unsigned int v10; // esi
	bool v11; // zf
	__int64 v12; // rax
	_QWORD* v13; // rax
	_QWORD* v14; // rbx
	_QWORD* v15; // rax
	_QWORD* v16; // rbx
	_QWORD* v17; // rax
	_QWORD* v18; // rbx

	v5 = *((_DWORD*)a1 + 9);
	if (v5 == a2 && *((_DWORD*)a1 + 7) == a3 && *((_DWORD*)a1 + 8) == a4)
		return 0i64;
	v8 = !v5 && a2;
	v9 = *((_DWORD*)a1 + 7);
	v10 = *((_DWORD*)a1 + 8);
	v11 = !v8;
	v12 = *a1;
	*((_DWORD*)a1 + 7) = a3;
	*((_DWORD*)a1 + 8) = a4;
	*((_DWORD*)a1 + 9) = a2;
	if (v11)
	{
		(*(void (**)(void))(v12 + 160))();
		if (a5)
			(*(void(__fastcall**)(__int64*))(*a1 + 24))(a1);
	}
	else
	{
		(*(void (**)(void))(v12 + 152))();
		v13 = (_QWORD*)a1[2];
		v14 = (_QWORD*)*v13;
		if ((_QWORD*)*v13 != v13)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v14[2] + 40i64))(v14[2]);
				v14 = (_QWORD*)*v14;
			} while (v14 != (_QWORD*)a1[2]);
		}
		(*(void(__fastcall**)(__int64*))(*a1 + 32))(a1);
	}
	if (v9 != *((_DWORD*)a1 + 7))
	{
		v15 = (_QWORD*)a1[2];
		v16 = (_QWORD*)*v15;
		if ((_QWORD*)*v15 != v15)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)v16[2] + 48i64))(
					v16[2],
					v9,
					*((unsigned int*)a1 + 7));
				v16 = (_QWORD*)*v16;
			} while (v16 != (_QWORD*)a1[2]);
		}
		(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 184))(a1, v9, *((unsigned int*)a1 + 7));
	}
	if (v10 != *((_DWORD*)a1 + 8))
	{
		v17 = (_QWORD*)a1[2];
		v18 = (_QWORD*)*v17;
		if ((_QWORD*)*v17 != v17)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)v18[2] + 56i64))(
					v18[2],
					v10,
					*((unsigned int*)a1 + 8));
				v18 = (_QWORD*)*v18;
			} while (v18 != (_QWORD*)a1[2]);
		}
		(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 192))(a1, v10, *((unsigned int*)a1 + 8));
	}
	(*(void(__fastcall**)(__int64*, _QWORD))(*a1 + 136))(a1, 0i64);
	return 1i64;
}

