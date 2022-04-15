#include "../winhttp.h"

//----- (000000014068E520) ----------------------------------------------------
__int64 __fastcall sub_14068E520(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // esi
	int v10; // eax
	__int64 v11; // rcx
	int v12; // eax
	bool v13; // zf
	__int64 v14; // rax
	double v15; // xmm0_8
	float v16; // xmm1_4
	double v17; // xmm0_8
	__int64 v18; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) == 0)
		|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5)
		|| (v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5),
			!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6))
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 336i64))(v5) != 23)
	{
		v18 = a1[2];
		*(_QWORD*)v18 = 0i64;
		goto LABEL_19;
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5);
	if (v7)
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 368i64))(v7);
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5);
		v11 = v5;
		if (v10)
		{
			v13 = v9 == v10;
			v14 = *(_QWORD*)v5;
			if (v13)
			{
				v16 = 1.0 - (*(float(__fastcall**)(__int64))(v14 + 136))(v5);
				goto LABEL_17;
			}
		}
		else
		{
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 368i64))(v5);
			v11 = v5;
			v13 = v9 == v12;
			v14 = *(_QWORD*)v5;
			if (!v13)
			{
				v15 = (*(double(__fastcall**)(__int64))(v14 + 136))(v5);
				v16 = -*(float*)&v15;
			LABEL_17:
				v18 = a1[2];
				*(double*)v18 = (float)(v16 * 100.0);
			LABEL_19:
				*(_DWORD*)(v18 + 8) = 3;
				goto LABEL_20;
			}
		}
		v17 = (*(double(__fastcall**)(__int64))(v14 + 136))(v11);
		v16 = *(float*)&v17;
		goto LABEL_17;
	}
	v8 = a1[2];
	*(_QWORD*)v8 = 0i64;
	*(_DWORD*)(v8 + 8) = 3;
LABEL_20:
	a1[2] += 16i64;
	return 1i64;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

