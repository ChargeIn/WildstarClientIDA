//----- (0000000140007270) ----------------------------------------------------
int* __fastcall sub_140007270(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	int* result; // rax
	int* v5; // rbx
	unsigned __int64 v6; // rbp
	__int64 v7; // r15

	v3 = *(_QWORD*)(a1 + 8) - 1i64;
	result = sub_1407DB590((int*)(*(_QWORD*)a1 + 8 * a2), (int*)(*(_QWORD*)a1 + 8 * a2 + 8), 8 * (v3 - a2));
	v5 = *(int**)a1;
	if (v3)
	{
		if (v5)
		{
			if (v3 <= *((_QWORD*)v5 - 1))
				goto LABEL_10;
			v6 = (unsigned __int64)(sub_14018A3E0(8 * v3 + 16) - 16) >> 3;
			v7 = 8 * v6 + 16;
			result = (int*)(**((__int64(__fastcall***)(__int64, __int64))v5 - 2))((__int64)(v5 - 4), v7);
			if ((_DWORD)result)
			{
				*((_QWORD*)v5 - 1) = v6;
				goto LABEL_10;
			}
		}
		else
		{
			v6 = v3;
			v7 = 8 * v3 + 16;
		}
		result = sub_14018B280(v7, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = v6;
			*(_QWORD*)result = off_140B55060;
		}
		v5 = result + 4;
	}
LABEL_10:
	if (*(int**)a1 != v5)
	{
		result = sub_1407DB590(v5, *(int**)a1, 8 * v3);
		if (*(_QWORD*)a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v5;
	}
	*(_QWORD*)(a1 + 8) = v3;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

