//----- (000000014054F210) ----------------------------------------------------
int* sub_14054F210()
{
	int* result; // rax
	__int64 v1; // rbx

	result = (int*)qword_140C65B68;
	if (!qword_140C65B68)
	{
		result = sub_14018B280(312i64, 0);
		v1 = (__int64)result;
		if (result)
		{
			*(_QWORD*)result = off_140B6C620;
			*((_QWORD*)result + 1) = 0i64;
			*((_QWORD*)result + 2) = 0i64;
			result[6] = 0;
			sub_1407E4830(result + 8, 0i64, 0x118ui64);
			qword_140C65B68 = v1;
			return (int*)v1;
		}
		else
		{
			qword_140C65B68 = 0i64;
		}
	}
	return result;
}
// 140B6C620: using guessed type __int64 (__fastcall *off_140B6C620[11])();
// 140C65B68: using guessed type __int64 qword_140C65B68;

