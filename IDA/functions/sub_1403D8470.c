//----- (00000001403D8470) ----------------------------------------------------
int* __fastcall sub_1403D8470(__int64 a1, __int64 a2)
{
	int* result; // rax

	result = sub_14018B280(80i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *(_DWORD*)a2;
		*((_QWORD*)result + 5) = &off_140B66870;
		result[12] = *(_DWORD*)(a2 + 16);
		result[13] = *(_DWORD*)(a2 + 20);
		result[14] = *(_DWORD*)(a2 + 24);
		result[15] = *(_DWORD*)(a2 + 28);
		result[16] = *(_DWORD*)(a2 + 32);
		*((_QWORD*)result + 9) = *(_QWORD*)(a2 + 40);
		*((_QWORD*)result + 5) = &off_140B66868;
	}
	return result;
}
// 140B66868: using guessed type __int64 (__fastcall *off_140B66868)();
// 140B66870: using guessed type void (__fastcall __noreturn *off_140B66870)();

