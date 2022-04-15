#include "../winhttp.h"

//----- (0000000140374420) ----------------------------------------------------
__int64 __fastcall sub_140374420(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	__int64 v5; // r15
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	unsigned __int64* v8; // r14
	__int64 v9; // rbp
	unsigned __int64 v10; // rcx
	int v11; // r12d
	float v12; // xmm6_4
	int v13; // xmm7_4
	int v14; // xmm8_4
	int v15; // xmm9_4
	int v16; // r13d
	int* v17; // rsi
	int* v18; // rbx
	__int64 v19; // rsi
	__int64 v20; // rcx

	v2 = sub_140350F40(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64), *(_DWORD*)(a1 + 24));
	v3 = v2;
	if (!v2)
		return 2147500037i64;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(v2 + 20);
	v5 = 6i64;
	v6 = (_QWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v2 + 16);
	v7 = 6i64;
	do
	{
		if (*v6)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
			*v6 = 0i64;
		}
		++v6;
		--v7;
	} while (v7);
	v8 = (unsigned __int64*)(v3 + 24);
	*(_DWORD*)(a1 + 44) = 0;
	v9 = v3 + 72;
	do
	{
		v10 = *v8;
		v11 = *(_DWORD*)(v9 + 24);
		v12 = *(float*)v9;
		v13 = *(_DWORD*)(v9 + 48);
		v14 = *(_DWORD*)(v9 + 72);
		v15 = *(_DWORD*)(v9 + 96);
		v16 = *(_DWORD*)(v9 + 120);
		if (*v8)
		{
			if (v10 <= qword_140C3FE70)
				v17 = (int*)(v10 + qword_140C3FE68);
			else
				v17 = 0i64;
		}
		else
		{
			v17 = 0i64;
		}
		if (v12 != 0.0 && v17 && *(_WORD*)v17)
		{
			v18 = sub_14018B280(328i64, 0);
			if (v18)
			{
				*(_QWORD*)v18 = off_140B65AA0;
				sub_140327110((__int64)(v18 + 22));
				*((_QWORD*)v18 + 40) = 0i64;
				*((_QWORD*)v18 + 39) = 0i64;
				v18[2] = 1;
				*((_QWORD*)v18 + 2) = 0i64;
				*((_QWORD*)v18 + 3) = 0i64;
				*((_QWORD*)v18 + 8) = 0i64;
				*((_QWORD*)v18 + 9) = 0i64;
				*((_QWORD*)v18 + 10) = 0i64;
			}
			else
			{
				v18 = 0i64;
			}
			if ((int)sub_140373470((__int64)v18, a1, v11, v12, v13, v14, v15, v16, v17) >= 0)
			{
				v19 = *(unsigned int*)(a1 + 44);
				*(_DWORD*)(a1 + 44) = v19 + 1;
				if (*(int**)(a1 + 8 * v19 + 48) != v18)
				{
					if (v18)
						(**(void(__fastcall***)(int*))v18)(v18);
					v20 = *(_QWORD*)(a1 + 8 * v19 + 48);
					if (v20)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
					*(_QWORD*)(a1 + 8 * v19 + 48) = v18;
				}
				if (v18)
					(*(void(__fastcall**)(int*))(*(_QWORD*)v18 + 8i64))(v18);
			}
			else if (v18)
			{
				sub_1403733C0(v18);
				sub_14018B900((__int64)v18, 0);
			}
		}
		v9 += 4i64;
		++v8;
		--v5;
	} while (v5);
	*(_QWORD*)(a1 + 28) = 0i64;
	return 0i64;
}
// 140B65AA0: using guessed type __int64 (__fastcall *off_140B65AA0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

