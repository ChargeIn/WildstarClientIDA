//----- (00000001401C0F00) ----------------------------------------------------
__int64 __fastcall sub_1401C0F00(__int64 a1, __int64 a2, unsigned __int64* a3, __int64* a4)
{
	int* v8; // rax
	__int64 v9; // r8
	__int64 v10; // rbx
	int v11; // eax
	int v12; // edi

	v8 = sub_14018B280(72i64, 0);
	v10 = (__int64)v8;
	if (v8)
	{
		*(_QWORD*)v8 = off_140B5FD10;
		v8[17] = 1;
		*((_QWORD*)v8 + 1) = a1;
		*((_QWORD*)v8 + 2) = *(_QWORD*)a2;
		*((_QWORD*)v8 + 3) = *(_QWORD*)(a2 + 8);
		v11 = *(_DWORD*)(a2 + 16);
		*(_QWORD*)(v10 + 40) = 0i64;
		*(_QWORD*)(v10 + 48) = -1i64;
		*(_DWORD*)(v10 + 64) = 0;
		*(_DWORD*)(v10 + 32) = v11;
	}
	else
	{
		v10 = 0i64;
	}
	v12 = sub_1401D48F0(v10, a3, v9);
	if (v12 >= 0)
	{
		if (a4)
			*a4 = v10;
		else
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		return (unsigned int)v12;
	}
}
// 1401C0F86: variable 'v9' is possibly undefined
// 140B5FD10: using guessed type __int64 (__fastcall *off_140B5FD10[4])();

