//----- (0000000140015EC0) ----------------------------------------------------
__int64 __fastcall sub_140015EC0(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD), int a4)
{
	int* v8; // rax
	__int64 v9; // rbx
	int v10; // esi
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rdx
	__int64* i; // rax

	v8 = sub_14018B280(112i64, 0);
	v9 = (__int64)v8;
	if (v8)
	{
		*(_QWORD*)v8 = off_140B55048;
		v8[2] = 1;
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		v8[14] = 0;
		*((_QWORD*)v8 + 2) = 0i64;
		*(_QWORD*)v8 = off_140B55540;
		v8[10] = 0;
		v8[19] = a4;
		*((_QWORD*)v8 + 11) = 0i64;
		*((_QWORD*)v8 + 10) = 0i64;
		*((_QWORD*)v8 + 13) = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = sub_140033780(v9, a2, a3);
	if (v10 < 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		return (unsigned int)v10;
	}
	*(_DWORD*)(v9 + 40) = 2;
	v12 = *(_QWORD*)(a1 + 5528);
	if (!v12 || !*(_QWORD*)(v12 + 24))
	{
		if (!*(_QWORD*)(v9 + 24))
		{
			for (i = (__int64*)(a1 + 5552); *i; i = (__int64*)(*i + 32))
				;
			*(_QWORD*)(v9 + 24) = i;
			*(_QWORD*)(v9 + 32) = 0i64;
			*i = v9;
		}
		return 0i64;
	}
	if (*(_QWORD*)(v9 + 24))
		return 0i64;
	v13 = *(_QWORD*)(v12 + 24);
	*(_QWORD*)(v9 + 32) = v12;
	*(_QWORD*)(v9 + 24) = v13;
	v14 = *(__int64**)(v9 + 24);
	if (v14)
		*v14 = v9;
	*(_QWORD*)(v12 + 24) = v9 + 32;
	return 0i64;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55540: using guessed type __int64 (__fastcall *off_140B55540[9])();

