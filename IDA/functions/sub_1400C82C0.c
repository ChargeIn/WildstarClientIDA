#include "../winhttp.h"

//----- (00000001400C82C0) ----------------------------------------------------
void __fastcall sub_1400C82C0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4)
{
	__int64 v8; // rcx
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rbp
	_QWORD* v12; // rax
	_QWORD* v13; // rbx

	if ((*(_BYTE*)(a1 + 28) & 8) != 0 && *(float*)(a1 + 648) > 0.0)
	{
		v8 = *(_QWORD*)(a1 + 16);
		if (!v8 || sub_1400D1A60(v8))
		{
			if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1) && *(_QWORD*)(a1 + 16))
			{
				if (a1 == a3)
					*a4 = *(_DWORD*)(a2 + 8);
				v9 = *(_QWORD*)(a2 + 8);
				v10 = sub_14018DB00(*(_QWORD*)a2, v9 + 1, 8i64);
				v11 = v10;
				*(_QWORD*)&v10[2 * v9] = a1;
				if (*(int**)a2 != v10)
				{
					sub_1407DB590(v10, *(int**)a2, 8i64 * *(_QWORD*)(a2 + 8));
					if (*(_QWORD*)a2)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a2 - 16i64) + 8i64))(*(_QWORD*)a2 - 16i64);
					*(_QWORD*)a2 = v11;
				}
				*(_QWORD*)(a2 + 8) = v9 + 1;
			}
			else
			{
				v12 = *(_QWORD**)(a1 + 576);
				v13 = (_QWORD*)*v12;
				if ((_QWORD*)*v12 != v12)
				{
					do
					{
						sub_1400C82C0(v13[2], a2, a3, a4);
						v13 = (_QWORD*)*v13;
					} while (v13 != *(_QWORD**)(a1 + 576));
				}
			}
		}
	}
}

