#include "../winhttp.h"

//----- (000000014074BC70) ----------------------------------------------------
__int64 __fastcall sub_14074BC70(_QWORD* a1)
{
	int* v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdi
	int* v5; // rsi
	int* v6; // r14
	__int64 v7; // r12
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx
	unsigned int v12; // ebx
	__int64 v14; // [rsp+20h] [rbp-38h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp+10h] BYREF

	v2 = *(int**)(qword_140C65898 + 26392);
	if (v2 && (v3 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && *v2 != *(_DWORD*)(v3 + 8))
	{
		v4 = sub_1403D90D0(qword_140C65898, *v2);
		v5 = sub_14018B280(104i64, 0);
		if (v5)
		{
			if (v4)
			{
				v6 = (int*)&word_140B7B704;
				if (*(_QWORD*)(v4 + 16))
					v6 = *(int**)(v4 + 16);
			}
			else
			{
				v6 = 0i64;
			}
			v7 = (unsigned int)*v2;
			LODWORD(v14) = 0;
			*(_QWORD*)v5 = off_140B55048;
			v5[2] = 1;
			v5[4] = 0;
			*(_QWORD*)v5 = off_140B74C90;
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
				sub_1407DB590(v9 + 4, v6, v11);
				*(_WORD*)((char*)v10 + v11) = 0;
				*((_QWORD*)v5 + 3) = v10;
			}
			else
			{
				*((_QWORD*)v5 + 3) = 0i64;
			}
			*((_QWORD*)v5 + 4) = 0i64;
			*((_QWORD*)v5 + 5) = 0i64;
			*((_QWORD*)v5 + 6) = 0i64;
			*((_QWORD*)v5 + 7) = v14;
			*((_QWORD*)v5 + 8) = 0i64;
			v5[18] = 0;
			v5[19] = 8;
			*((_QWORD*)v5 + 10) = v7;
			GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
			*((struct _FILETIME*)v5 + 11) = SystemTimeAsFileTime;
			*((_QWORD*)v5 + 12) = 0i64;
			sub_14073E320((__int64)v5);
		}
		else
		{
			v5 = 0i64;
		}
		v12 = sub_14073EB30(a1, (void(__fastcall***)(_QWORD))v5);
		if (v5)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5);
		return v12;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14074BD96: variable 'v14' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74C90: using guessed type __int64 (__fastcall *off_140B74C90[3])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

