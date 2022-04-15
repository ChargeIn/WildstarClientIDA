//----- (00000001401C0E30) ----------------------------------------------------
__int64 __fastcall sub_1401C0E30(__int64 a1, __int64 a2, LARGE_INTEGER a3, LARGE_INTEGER** a4)
{
	int* v8; // rax
	LARGE_INTEGER* v9; // rbx
	DWORD v10; // eax
	signed int v11; // edi

	v8 = sub_14018B280(72i64, 0);
	v9 = (LARGE_INTEGER*)v8;
	if (v8)
	{
		*(_QWORD*)v8 = off_140B5FD10;
		v8[17] = 1;
		*((_QWORD*)v8 + 1) = a1;
		*((_QWORD*)v8 + 2) = *(_QWORD*)a2;
		*((_QWORD*)v8 + 3) = *(_QWORD*)(a2 + 8);
		v10 = *(_DWORD*)(a2 + 16);
		v9[5].QuadPart = 0i64;
		v9[6].QuadPart = -1i64;
		v9[8].LowPart = 0;
		v9[4].LowPart = v10;
	}
	else
	{
		v9 = 0i64;
	}
	v11 = sub_1401D47D0(v9, a3);
	if (v11 >= 0)
	{
		if (a4)
			*a4 = v9;
		else
			(*(void(__fastcall**)(LARGE_INTEGER*))(v9->QuadPart + 8))(v9);
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(LARGE_INTEGER*))(v9->QuadPart + 8))(v9);
		return (unsigned int)v11;
	}
}
// 140B5FD10: using guessed type __int64 (__fastcall *off_140B5FD10[4])();

