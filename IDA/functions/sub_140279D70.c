//----- (0000000140279D70) ----------------------------------------------------
__int64 __fastcall sub_140279D70(__int64 a1, _QWORD* a2, __int64 a3, void(__fastcall*** a4)(_QWORD), int** a5)
{
	int* v8; // rax
	__int64 v9; // r8
	int* v10; // rdi
	unsigned int v11; // ebx

	v8 = sub_14018B280(80i64, 0);
	v10 = v8;
	if (v8)
	{
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = a1;
		*(_QWORD*)v8 = &off_140B61FD8;
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 4) = a2[1];
		*((_QWORD*)v8 + 3) = *a2;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = a4;
		v8[14] = 0;
		*((_QWORD*)v8 + 8) = 0i64;
		*((_QWORD*)v8 + 9) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = sub_14019E010(0i64, (void(__fastcall***)(_QWORD))v10, v9, a4, a5);
	(*(void(__fastcall**)(int*))(*(_QWORD*)v10 + 8i64))(v10);
	return v11;
}
// 140279DF5: variable 'v9' is possibly undefined
// 140B61FD8: using guessed type __int64 (__fastcall *off_140B61FD8)();

