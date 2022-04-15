#include "../winhttp.h"

//----- (000000014068EF30) ----------------------------------------------------
__int64 __fastcall sub_14068EF30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	bool v6; // zf
	__int64 v7; // rax
	unsigned int v8; // kr00_4
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	__int64 v12; // rax
	float v13; // xmm0_4
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) != 25)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 24
			|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 30)
		{
			v15 = a1[2];
			*(_QWORD*)v15 = 0i64;
			*(_DWORD*)(v15 + 8) = 3;
		}
		else if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 27
			|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 32)
		{
			v13 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 208i64))(v5);
			v14 = a1[2];
			*(_DWORD*)(v14 + 8) = 3;
			*(double*)v14 = (float)(v13 * 0.001);
		}
		else if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 472i64))(v5)
			|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 480i64))(v5)
			|| (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5) + 8) & 0x4000) != 0)
		{
			v12 = a1[2];
			*(_QWORD*)v12 = 0x4059000000000000i64;
			*(_DWORD*)(v12 + 8) = 3;
		}
		else
		{
			v6 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) == 13;
			v7 = *(_QWORD*)v5;
			if (v6)
			{
				v8 = (*(__int64(__fastcall**)(__int64))(v7 + 384))(v5);
				v9 = a1[2];
				*(_DWORD*)(v9 + 8) = 3;
				*(double*)v9 = (double)(v8 / 0x3E8);
			}
			else
			{
				v10 = (*(__int64(__fastcall**)(__int64))(v7 + 208))(v5);
				v11 = a1[2];
				*(double*)v11 = (double)v10;
				*(_DWORD*)(v11 + 8) = 3;
			}
		}
	}
	else
	{
		v16 = a1[2];
		*(_DWORD*)(v16 + 8) = 3;
		*(_QWORD*)v16 = 0i64;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

