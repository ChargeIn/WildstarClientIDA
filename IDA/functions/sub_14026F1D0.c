//----- (000000014026F1D0) ----------------------------------------------------
__int64 __fastcall sub_14026F1D0(__int64 a1, int** a2, __int64 a3)
{
	int* v7; // rax
	int* v8; // rbx

	if (!a2)
		return 2147942487i64;
	v7 = sub_14018B280(112i64, 0);
	v8 = v7;
	if (v7)
	{
		*(_QWORD*)v7 = off_140B61C18;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
		v7[6] = 1;
		*((_QWORD*)v7 + 4) = a1;
		v7[12] = *(_DWORD*)a3;
		v7[13] = *(_DWORD*)(a3 + 4);
		v7[14] = *(_DWORD*)(a3 + 8);
		v7[15] = *(_DWORD*)(a3 + 12);
		v7[16] = *(_DWORD*)(a3 + 16);
		v7[17] = *(_DWORD*)(a3 + 20);
		v7[18] = *(_DWORD*)(a3 + 24);
		v7[19] = *(_DWORD*)(a3 + 28);
		v7[20] = *(_DWORD*)(a3 + 32);
		*((_OWORD*)v7 + 6) = *(_OWORD*)(a3 + 48);
		(**(void(__fastcall***)(int*))v7)(v7);
	}
	else
	{
		v8 = 0i64;
	}
	*a2 = v8;
	if (v8)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v8 + 8i64))(v8);
	return 0i64;
}
// 140B61C18: using guessed type __int64 (__fastcall *off_140B61C18[9])();

