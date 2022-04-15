#include "../winhttp.h"

//----- (000000014010F000) ----------------------------------------------------
unsigned __int64 __fastcall sub_14010F000(_QWORD* a1, unsigned __int64 a2)
{
	unsigned __int64 result; // rax
	__int64 v5; // rcx
	int* v6; // rax
	int* v7; // rsi
	__int64 v8; // rdi
	int* v9; // rax
	int* v10; // rbx
	unsigned __int64 v11; // rdi

	LODWORD(result) = 31744;
	if ((int)a2 < 31744)
		LODWORD(result) = a2;
	result = (int)result;
	a1[132] = (int)result;
	v5 = a1[135];
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5);
		if (result > a1[132])
		{
			sub_14010EF50((__int64)a1, a2, 0x7C00ui64);
			v6 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[135] + 64i64))(a1[135]);
			v7 = v6;
			if (v6)
			{
				v8 = 0i64;
				if (*(_WORD*)v6)
				{
					do
						++v8;
					while (*((_WORD*)v6 + v8));
				}
				v9 = sub_14018B280(2 * v8 + 18, 0);
				if (v9)
				{
					*((_QWORD*)v9 + 1) = v8;
					*(_QWORD*)v9 = off_140B55060;
				}
				else
				{
					v9 = 0i64;
				}
				v10 = v9 + 4;
				v11 = 2 * v8;
				sub_1407DB590(v9 + 4, v7, v11);
				*(_WORD*)((char*)v10 + v11) = 0;
			}
			else
			{
				v10 = 0i64;
			}
			*((_WORD*)v10 + a2) = 0;
			result = (*(__int64(__fastcall**)(_QWORD*, int*))(*a1 + 80i64))(a1, v10);
			if (v10)
				return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

