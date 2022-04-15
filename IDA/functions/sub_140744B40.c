#include "../winhttp.h"

//----- (0000000140744B40) ----------------------------------------------------
__int64 __fastcall sub_140744B40(_QWORD* a1)
{
	int* v2; // rsi
	__int64 v3; // r12
	__int64 v4; // rcx
	int* v5; // r14
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	unsigned int v10; // ebx
	__int64 v12; // [rsp+20h] [rbp-38h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 27664))
	{
		v2 = sub_14018B280(104i64, 0);
		if (v2)
		{
			LODWORD(v12) = 0;
			v3 = *(_QWORD*)(qword_140C65898 + 27664);
			if (v3
				&& (v4 = *(unsigned int*)(qword_140C65898 + 27676), (unsigned int)v4 < *(_DWORD*)(qword_140C65898 + 27680)))
			{
				v5 = *(int**)(168 * v4 + *(_QWORD*)(qword_140C65898 + 27688));
			}
			else
			{
				v5 = 0i64;
			}
			*(_QWORD*)v2 = off_140B55048;
			v2[2] = 1;
			v2[4] = 0;
			*(_QWORD*)v2 = off_140B74C90;
			if (v5)
			{
				v6 = 0i64;
				if (*(_WORD*)v5)
				{
					do
						++v6;
					while (*((_WORD*)v5 + v6));
				}
				v7 = sub_14018B280(2 * v6 + 18, 0);
				if (v7)
				{
					*((_QWORD*)v7 + 1) = v6;
					*(_QWORD*)v7 = off_140B55060;
				}
				else
				{
					v7 = 0i64;
				}
				v8 = v7 + 4;
				v9 = 2 * v6;
				sub_1407DB590(v7 + 4, v5, v9);
				*(_WORD*)((char*)v8 + v9) = 0;
				*((_QWORD*)v2 + 3) = v8;
			}
			else
			{
				*((_QWORD*)v2 + 3) = 0i64;
			}
			*((_QWORD*)v2 + 4) = 0i64;
			*((_QWORD*)v2 + 5) = 0i64;
			*((_QWORD*)v2 + 6) = 0i64;
			*((_QWORD*)v2 + 7) = v12;
			*((_QWORD*)v2 + 8) = 0i64;
			v2[18] = 0;
			v2[19] = 3;
			*((_QWORD*)v2 + 10) = v3;
			GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
			*((struct _FILETIME*)v2 + 11) = SystemTimeAsFileTime;
			*((_QWORD*)v2 + 12) = 0i64;
			sub_14073E320((__int64)v2);
		}
		else
		{
			v2 = 0i64;
		}
		v10 = sub_14073EB30(a1, (void(__fastcall***)(_QWORD))v2);
		if (v2)
			(*(void(__fastcall**)(int*))(*(_QWORD*)v2 + 8i64))(v2);
		return v10;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140744C6A: variable 'v12' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B74C90: using guessed type __int64 (__fastcall *off_140B74C90[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

