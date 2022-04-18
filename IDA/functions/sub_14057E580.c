#include "../winhttp.h"

//----- (000000014057E580) ----------------------------------------------------
__int64 __fastcall sub_14057E580(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r15
	int* v4; // rsi
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v11; // [rsp+20h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 864);
	v4 = *(int**)(a2 + 16);
	if (v4)
	{
		v6 = 0i64;
		v11 = v2;
		if (*(_WORD*)v4)
		{
			do
				++v6;
			while (*((_WORD*)v4 + v6));
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
		sub_1407DB590(v7 + 4, v4, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 864) = v8;
	}
	else
	{
		*(_QWORD*)(a1 + 864) = 0i64;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentDescription", byte_1409EA9CC, a1, v11);
	return 0i64;
}
// 14057E580: could not find valid save-restore pair for rdi
// 14057E5AE: variable 'v2' is possibly undefined
// 14057E65C: variable 'v11' is possibly undefined
// 1409EA9CC: using guessed type _BYTE byte_1409EA9CC[24];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

