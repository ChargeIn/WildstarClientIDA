#include "../winhttp.h"

//----- (000000014057D190) ----------------------------------------------------
__int64 __fastcall sub_14057D190(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	int v7; // eax
	int v8; // ecx
	__int64 v9; // r15
	int* v10; // rax
	__int64 v11; // rbx
	unsigned __int64 v12; // r12
	int** v13; // rbp
	int* v14; // rax
	int* v15; // rsi
	int* v16; // rcx
	__int64* v17; // rdi
	__int64 v19; // [rsp+50h] [rbp+8h] BYREF

	v3 = a1 + 664;
	v5 = (*(__int64(__fastcall**)(__int64))(a1 + 688))(a2 + 16);
	v6 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v5 % *(_QWORD*)(v3 + 8)));
	if (!v6)
		goto LABEL_7;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v3 + 32))(a2 + 16, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_7;
	}
	if (v6 == (_QWORD*)-24i64)
	{
	LABEL_7:
		v7 = 200;
		if (*(_DWORD*)(a1 + 16) == 1)
			v7 = 100;
		v8 = *(_DWORD*)(a2 + 36) - v7;
		if (v8 >= 0 && v8 < *(_DWORD*)(a1 + 632))
		{
			v9 = *(_QWORD*)(*(_QWORD*)(a1 + 624) + 8i64 * v8);
			if (v9)
			{
				v10 = sub_14018B280(320i64, 0);
				if (v10)
					v11 = sub_140569A60((__int64)v10);
				else
					v11 = 0i64;
				if ((int)sub_140569C90(v11, a2 + 16) >= 0)
				{
					v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 48i64))(v11);
					if (*(_QWORD*)v3 == *(_QWORD*)(v3 + 8))
						sub_1400290D0(v3);
					v12 = (*(__int64(__fastcall**)(__int64*))(v3 + 24))(&v19);
					v13 = (int**)(*(_QWORD*)(v3 + 16) + 8 * (v12 % *(_QWORD*)(v3 + 8)));
					v14 = sub_14018B280(32i64, 0);
					v15 = v14;
					if (v14)
					{
						v16 = *v13;
						*(_QWORD*)v14 = v12;
						*((_QWORD*)v14 + 1) = v16;
						*((_QWORD*)v14 + 2) = v19;
						*((_QWORD*)v14 + 3) = v11;
						(**(void(__fastcall***)(__int64))v11)(v11);
					}
					else
					{
						v15 = 0i64;
					}
					*v13 = v15;
					++* (_QWORD*)v3;
					v17 = (__int64*)(*(_QWORD*)(v9 + 8) + 8i64 * *(unsigned int*)(a2 + 40));
					if (*v17 != v11)
					{
						(**(void(__fastcall***)(__int64))v11)(v11);
						if (*v17)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)*v17 + 8i64))(*v17);
						*v17 = v11;
					}
					sub_1404277D0(*(_QWORD*)(qword_140C65898 + 29504), a1, v11, 0);
				}
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			}
		}
	}
	return 0i64;
}
// 140569C90: using guessed type __int64 __fastcall sub_140569C90(_QWORD, _QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;

