//----- (000000014001B410) ----------------------------------------------------
int* __fastcall sub_14001B410(__int64 a1, int** a2)
{
	__int64 v2; // r14
	unsigned __int64 v5; // rbp
	int* v6; // rax
	int* v7; // rbx
	int* result; // rax

	v2 = *(_QWORD*)(a1 + 5912);
	if (*a2)
	{
		v5 = *((_QWORD*)*a2 - 1);
		v6 = sub_14018B280(v5 + 17, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		v7 = v6 + 4;
		result = sub_1407DB590(v6 + 4, *a2, v5);
		*((_BYTE*)v7 + v5) = 0;
		*(_QWORD*)(a1 + 5912) = v7;
	}
	else
	{
		result = 0i64;
		*(_QWORD*)(a1 + 5912) = 0i64;
	}
	if (v2)
		result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	if (*a2)
		return (int*)(*(__int64(__fastcall**)(int*))(*((_QWORD*)*a2 - 2) + 8i64))(*a2 - 4);
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

