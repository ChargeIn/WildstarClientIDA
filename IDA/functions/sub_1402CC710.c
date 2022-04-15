//----- (00000001402CC710) ----------------------------------------------------
int* __fastcall sub_1402CC710(_QWORD* a1, unsigned int a2, __int64 a3, unsigned int a4)
{
	__int64 v4; // rax
	int* v5; // rdi
	int* result; // rax
	__int64 v11; // rcx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *a1;
	v5 = 0i64;
	v12[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, __int64))(v4 + 64))(a1, v12, 5i64))
	{
		if (!a2
			|| (result = (int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 232i64))(a1, a2),
				v5 = result,
				result != (int*)-1i64))
		{
			result = (int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 296i64))(a1, a4);
			if (!a4 || result != (int*)-1i64)
				return (int*)(*(__int64(__fastcall**)(_QWORD*, int*, __int64, int*))(*a1 + 216i64))(a1, v5, a3, result);
		}
	}
	else
	{
		result = sub_14018B280(64i64, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = a1;
			*((_QWORD*)result + 2) = -1i64;
			*(_QWORD*)result = &off_140B62CA0;
			*((_QWORD*)result + 4) = 0i64;
			*((_QWORD*)result + 3) = a1 + 62;
			*((_QWORD*)result + 4) = a1[62];
			a1[62] = result;
			v11 = *((_QWORD*)result + 4);
			if (v11)
				*(_QWORD*)(v11 + 24) = result + 8;
			result[10] = a2;
			*((_QWORD*)result + 6) = a3;
			*(_QWORD*)result = off_140B62C90;
			result[14] = a4;
		}
	}
	return result;
}
// 140B62C90: using guessed type __int64 (__fastcall *off_140B62C90[3])();
// 140B62CA0: using guessed type __int64 (__fastcall *off_140B62CA0)();
// 1402CC710: using guessed type int var_18[6];

