#include "../winhttp.h"

//----- (000000014038C060) ----------------------------------------------------
void __fastcall sub_14038C060(__int64 a1)
{
	__int64 v2; // r11
	__int64 v3; // rbx
	__int64 v4; // rcx
	__m128 v5; // xmm1
	int v6; // eax
	__int64 v7; // rbx
	_QWORD* i; // rbx
	int* v9; // rax
	int* v10; // rax
	__m128 v11[2]; // [rsp+20h] [rbp-28h] BYREF

	while (*(_QWORD*)(a1 + 952))
	{
		if (*(_QWORD*)(a1 + 952))
		{
			sub_14038FDB0(*(_QWORD**)(a1 + 952));
			sub_14018B900(v2, 0);
		}
	}
	if (*(_QWORD*)(a1 + 1024))
	{
		*(_DWORD*)(a1 + 920) = 1;
	}
	else
	{
		v3 = sub_1403589F0(*(_QWORD*)(a1 + 16), (__m128*)(a1 + 112));
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1))
		{
			v4 = *(_QWORD*)(a1 + 16);
			v5 = _mm_max_ps(_mm_max_ps(*(__m128*)(a1 + 272), *(__m128*)(a1 + 336)), *(__m128*)(a1 + 400));
			v11[0] = _mm_min_ps(_mm_min_ps(*(__m128*)(a1 + 256), *(__m128*)(a1 + 320)), *(__m128*)(a1 + 384));
			v11[1] = v5;
			v6 = sub_140358D20(v4, v3, v11);
			v7 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 920) = v6;
			for (i = *(_QWORD**)(v7 + 5456); i; i = (_QWORD*)i[39])
			{
				if (!(*(unsigned int(__fastcall**)(_QWORD*))(*i + 24i64))(i))
				{
					v9 = sub_14018B280(48i64, 0);
					if (v9)
						sub_14038FCF0(v9, (__int64)i, a1);
				}
			}
		}
		else
		{
			*(_DWORD*)(a1 + 920) = v3 == 0;
			if (v3)
			{
				v10 = sub_14018B280(48i64, 0);
				if (v10)
					sub_14038FCF0(v10, v3, a1);
			}
		}
	}
}
// 14038C08C: variable 'v2' is possibly undefined

