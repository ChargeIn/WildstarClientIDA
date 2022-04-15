#include "../winhttp.h"

//----- (00000001400E7280) ----------------------------------------------------
int* __fastcall sub_1400E7280(__int64 a1, void(__fastcall*** a2)(_QWORD), wchar_t* a3)
{
	wchar_t* v3; // rbx
	__int64 v6; // rsi
	int* v7; // rax
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // r14
	int* v11; // rdx
	__int64 v12; // rcx

	v3 = a3;
	if (!a3 || !*a3)
		v3 = L"DefaultStratum";
	v6 = sub_1400E8FA0(a1, v3);
	if (!v6)
	{
		if (*(_BYTE*)(a1 + 3216) || (v3 = L"DefaultStratum", (v6 = sub_1400E8FA0(a1, L"DefaultStratum")) == 0))
		{
			v7 = sub_14018B280(112i64, 0);
			if (v7)
				v6 = sub_1401569A0((__int64)v7, (int*)v3, 0);
			else
				v6 = 0i64;
			v8 = *(_QWORD*)(a1 + 3208);
			v9 = sub_14018DB00(*(_QWORD*)(a1 + 3200), v8 + 1, 8i64);
			v10 = v9;
			*(_QWORD*)&v9[2 * v8] = v6;
			v11 = *(int**)(a1 + 3200);
			if (v11 != v9)
			{
				sub_1407DB590(v9, v11, 8i64 * *(_QWORD*)(a1 + 3208));
				v12 = *(_QWORD*)(a1 + 3200);
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				*(_QWORD*)(a1 + 3200) = v10;
			}
			*(_QWORD*)(a1 + 3208) = v8 + 1;
		}
	}
	return sub_140156F00(v6, a2);
}
// 140A16988: using guessed type wchar_t aDefaultstratum_3[15];

