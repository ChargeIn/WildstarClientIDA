//----- (000000014018DC50) ----------------------------------------------------
__int64 __fastcall sub_14018DC50(int* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int* v4; // rax
	int* v5; // rbx
	int* v6; // rax

	if (a1)
	{
		if ((unsigned __int64)(sub_14018A370((__int64)(a1 - 4)) - 17) < 0xFF)
		{
			v3 = sub_14018A3E0(0x110ui64);
			if ((**((unsigned int(__fastcall***)(__int64, __int64))a1 - 2))((__int64)(a1 - 4), v3))
			{
				*((_QWORD*)a1 - 1) = 255i64;
				return (__int64)a1;
			}
			else
			{
				v4 = sub_14018B280(v3, 0);
				if (v4)
				{
					*((_QWORD*)v4 + 1) = 255i64;
					*(_QWORD*)v4 = off_140B55060;
				}
				v5 = v4 + 4;
				sub_1407DB590(v4 + 4, a1, *((_QWORD*)a1 - 1));
				return (__int64)v5;
			}
		}
		else
		{
			*((_QWORD*)a1 - 1) = 255i64;
			return (__int64)a1;
		}
	}
	else
	{
		v6 = sub_14018B280(272i64, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = 255i64;
			result = (__int64)(v6 + 4);
			*(_QWORD*)(result - 16) = off_140B55060;
		}
		else
		{
			return 16i64;
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

