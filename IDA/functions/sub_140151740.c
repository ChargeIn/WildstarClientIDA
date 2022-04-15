//----- (0000000140151740) ----------------------------------------------------
__int64 __fastcall sub_140151740(LARGE_INTEGER* a1, unsigned __int64 a2, __int64 a3, char* a4, _BYTE* a5, __int64 a6)
{
	__int64 result; // rax
	__int64 v10; // rsi
	int* v11; // rax

	result = sub_140151470((__int64)a1, a2, a3, a4);
	v10 = result;
	if (result)
	{
		if (!*(_QWORD*)(a3 + 288))
		{
			v11 = sub_14018B280(32i64, 0);
			if (v11)
			{
				*((_QWORD*)v11 + 2) = 0i64;
				v11[6] = 1;
				*(_QWORD*)v11 = off_140B569F0;
				v11[2] = -2;
			}
			*(_QWORD*)(a3 + 288) = v11;
		}
		return sub_1400F3790(
			a1->QuadPart + 384,
			a1[13],
			*(_DWORD*)(*(_QWORD*)(a3 + 288) + 8i64),
			v10,
			a3,
			(__int64)a4,
			a5,
			a6);
	}
	return result;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

