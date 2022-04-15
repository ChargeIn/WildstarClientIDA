//----- (00000001402CE0E0) ----------------------------------------------------
int* __fastcall sub_1402CE0E0(_QWORD* a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rax
	int* result; // rax
	__int64 v8; // rcx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v9[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, __int64))(v3 + 64))(a1, v9, 5i64))
	{
		result = (int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 296i64))(a1, a3);
		if (!a3 || result != (int*)-1i64)
			return (int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, int*))(*a1 + 448i64))(a1, a2, result);
	}
	else
	{
		result = sub_14018B280(48i64, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = a1;
			*((_QWORD*)result + 2) = -1i64;
			*(_QWORD*)result = &off_140B62CA0;
			*((_QWORD*)result + 4) = 0i64;
			*((_QWORD*)result + 3) = a1 + 62;
			*((_QWORD*)result + 4) = a1[62];
			a1[62] = result;
			v8 = *((_QWORD*)result + 4);
			if (v8)
				*(_QWORD*)(v8 + 24) = result + 8;
			result[10] = a3;
			result[11] = a2;
			*(_QWORD*)result = off_140B62C80;
		}
	}
	return result;
}
// 140B62C80: using guessed type __int64 (__fastcall *off_140B62C80[5])();
// 140B62CA0: using guessed type __int64 (__fastcall *off_140B62CA0)();
// 1402CE0E0: using guessed type int var_18[6];

