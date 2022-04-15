//----- (00000001403D3150) ----------------------------------------------------
int* __fastcall sub_1403D3150(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	int* result; // rax
	int* v5; // rbx
	unsigned __int64 v6; // rbp
	__int64 v7; // rsi

	v3 = *(_QWORD*)(a1 + 8) - 1i64;
	result = sub_1407DB590((int*)(*(_QWORD*)a1 + (a2 << 8)), (int*)(*(_QWORD*)a1 + (a2 << 8) + 256), (v3 - a2) << 8);
	v5 = *(int**)a1;
	if (v3)
	{
		if (v5)
		{
			if (v3 <= *((_QWORD*)v5 - 1))
				goto LABEL_10;
			v6 = (unsigned __int64)(sub_14018A3E0((v3 << 8) + 16) - 16) >> 8;
			v7 = (v6 << 8) + 16;
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
			v7 = (v3 << 8) + 16;
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
		result = sub_1407DB590(v5, *(int**)a1, v3 << 8);
		if (*(_QWORD*)a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v5;
	}
	*(_QWORD*)(a1 + 8) = v3;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

