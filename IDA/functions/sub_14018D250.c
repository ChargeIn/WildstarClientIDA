//----- (000000014018D250) ----------------------------------------------------
int* __fastcall sub_14018D250(int* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rbx
	__int64 v4; // rdi
	bool v5; // cf
	__int64 v6; // rdx
	int* result; // rax
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	int* v11; // rax

	v2 = a2;
	v4 = 2 * a2 + 18;
	if (a1)
	{
		v5 = *((_QWORD*)a1 - 1) < a2;
		v6 = 2 * a2 + 18;
		if (v5)
			v2 = *((_QWORD*)a1 - 1);
		if ((**((unsigned int(__fastcall***)(__int64, __int64))a1 - 2))((__int64)(a1 - 4), v6))
		{
			*((_QWORD*)a1 - 1) = v2;
			return a1;
		}
		else
		{
			v8 = sub_14018B280(v4, 0);
			if (v8)
			{
				*((_QWORD*)v8 + 1) = v2;
				*(_QWORD*)v8 = off_140B55060;
			}
			else
			{
				v8 = 0i64;
			}
			v9 = v8 + 4;
			v10 = 2 * v2;
			sub_1407DB590(v8 + 4, a1, v10);
			*(_WORD*)((char*)v9 + v10) = 0;
			return v9;
		}
	}
	else
	{
		v11 = sub_14018B280(v4, 0);
		if (v11)
		{
			*((_QWORD*)v11 + 1) = 0i64;
			*(_QWORD*)v11 = off_140B55060;
		}
		else
		{
			v11 = 0i64;
		}
		result = v11 + 4;
		*(_WORD*)result = 0;
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

