#include "../winhttp.h"

//----- (00000001402FCA50) ----------------------------------------------------
void __fastcall sub_1402FCA50(__int64 a1)
{
	void(__fastcall * *v2)(_QWORD); // rax
	__int64 v3; // rbx
	int v4; // edx
	int* v5; // rax
	int* v6; // rbx

	if (*(_DWORD*)(a1 + 1440))
	{
		v2 = *(void(__fastcall***)(_QWORD))a1;
		v3 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 1440) = 0;
		v4 = ((__int64 (*)(void))v2[144])() + *(_DWORD*)(v3 + 208);
		*(_DWORD*)(a1 + 1012) = v4;
		if (v4 == *(_DWORD*)(v3 + 208))
		{
			v5 = sub_14018B280(64i64, 0);
			v6 = v5;
			if (v5)
			{
				sub_1403272B0((__int64)v5, *(_DWORD*)(a1 + 1012), (void(__fastcall***)(_QWORD))a1, 1);
				*(_QWORD*)v6 = off_140B644D8;
			}
			else
			{
				v6 = 0i64;
			}
			sub_1403129A0(*(_QWORD*)(a1 + 16), (__int64)v6);
			*(_DWORD*)(a1 + 1008) = 1;
		}
		else
		{
			sub_140306300(a1, v4);
		}
	}
}
// 140B644D8: using guessed type __int64 (__fastcall *off_140B644D8[5])();

