#include "../winhttp.h"

//----- (000000014040DF10) ----------------------------------------------------
__int64 __fastcall sub_14040DF10(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v5; // rbx
	__int64 v6; // rcx
	int v7; // eax
	__int64 result; // rax
	float v9; // xmm9_4
	__int64 v10; // rax
	__int64* v11; // rcx
	__int64 v12; // rcx
	float v13; // xmm9_4
	float v14; // xmm7_4
	__int64 v15; // rax
	_DWORD* v16; // rax
	__int64 v17; // rax
	float v18; // xmm6_4
	float v19; // xmm10_4
	__int64 v20; // rax
	float v21; // xmm1_4
	float v22; // xmm9_4
	__int64 v23; // rax
	float v24; // xmm7_4
	float v25; // xmm7_4
	__int64 v26; // rax
	float v27; // xmm3_4
	__int64 v28; // rcx
	__int64 v29; // rax
	float v30; // xmm8_4
	unsigned int v31; // ecx
	__int64 v32; // rcx
	__int64 v33; // rdx
	unsigned int* i; // rax

	v2 = dword_140C8AC08;
	if ((dword_140C8AC08 & 1) == 0)
	{
		dword_140C8AC08 |= 1u;
		qword_140C8AC10 = (__int64)off_140B66A48;
		sub_1407DD89C(sub_140950BA0);
		v2 = dword_140C8AC08;
	}
	if ((v2 & 2) == 0)
	{
		dword_140C8AC08 = v2 | 2;
		qword_140C8ABF8 = (__int64)off_140B66A58;
		sub_1407DD89C(sub_140950B90);
		v2 = dword_140C8AC08;
	}
	v5 = 0i64;
	if ((v2 & 4) == 0)
	{
		v2 |= 4u;
		dword_140C8AC04 = 0;
		dword_140C8AC08 = v2;
	}
	if ((v2 & 8) == 0)
	{
		v2 |= 8u;
		dword_140C8ABDC = 0;
		dword_140C8AC08 = v2;
	}
	if ((v2 & 0x10) == 0)
	{
		v2 |= 0x10u;
		dword_140C8ABE4 = 0;
		dword_140C8AC08 = v2;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140C8ABD4 = 0;
		dword_140C8AC08 = v2 | 0x20;
	}
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *(_DWORD*)(v6 + 320);
	if (v7 == 26 || v7 != 1 && (*(_DWORD*)(v6 + 384) & 0x10580) == 0)
		return 0i64;
	if (v7 == 2)
	{
		v10 = qword_140C8ABF8;
		v11 = &qword_140C8ABF8;
	}
	else
	{
		v10 = qword_140C8AC10;
		v11 = &qword_140C8AC10;
	}
	v9 = *(float*)(a1 + 200);
	v13 = v9 * (*(float(__fastcall**)(__int64*, _QWORD))(v10 + 8))(v11, *(unsigned int*)(a2 + 12));
	v14 = *(float*)(*(_QWORD*)(a1 + 16) + 376i64);
	if (!*(_DWORD*)(a1 + 64))
	{
		if (!*(_DWORD*)(a1 + 68))
			goto LABEL_29;
		v15 = *(_QWORD*)(a1 + 272);
		if (!v15)
			goto LABEL_29;
		v12 = 0i64;
		v16 = (_DWORD*)(v15 + 4);
		while (*v16 != 4)
		{
			v12 = (unsigned int)(v12 + 1);
			++v16;
			if ((unsigned int)v12 >= 5)
				goto LABEL_29;
		}
	}
	v17 = *(_QWORD*)(a1 + 136);
	if (v17)
		v14 = fabs(v14) * (float)((float)((float)((float)*(unsigned __int8*)(v17 + 6) * 0.0039215689) * 2.0) - 1.0);
LABEL_29:
	v18 = 0.0;
	v19 = (float)(v14 + 1.0) * 0.5;
	if (dword_140C8AC04)
	{
		v21 = *(float*)&dword_140C8AC00;
	}
	else
	{
		dword_140C8AC04 = 1;
		v20 = sub_140200220(0x4F1u);
		if (v20)
		{
			v21 = *(float*)(v20 + 24);
			dword_140C8AC00 = LODWORD(v21);
		}
		else
		{
			v21 = 0.0;
			dword_140C8AC00 = 0;
		}
	}
	v22 = v13 * (float)((float)((float)(1.0 - fabs(v14)) * v21) + 1.0);
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 332i64) & 0x8000) == 0)
		goto LABEL_52;
	if (dword_140C8ABDC)
	{
		v24 = *(float*)&dword_140C8ABD8;
	}
	else
	{
		dword_140C8ABDC = 1;
		v23 = sub_140200220(0x4F1u);
		if (v23)
		{
			v24 = *(float*)(v23 + 28);
			dword_140C8ABD8 = LODWORD(v24);
		}
		else
		{
			v24 = 0.0;
			dword_140C8ABD8 = 0;
		}
	}
	v25 = v24 * v22;
	v22 = v22 - v25;
	if (dword_140C8ABE4)
	{
		v27 = *(float*)&dword_140C8ABE0;
	}
	else
	{
		dword_140C8ABE4 = 1;
		v26 = sub_140200220(0x4F1u);
		if (v26)
		{
			v27 = *(float*)(v26 + 32);
			dword_140C8ABE0 = LODWORD(v27);
		}
		else
		{
			v27 = 0.0;
			dword_140C8ABE0 = 0;
		}
	}
	result = sub_14040E610(v12, a2, 48, v27 * v25);
	if (!(_DWORD)result)
	{
		if (dword_140C8ABD4)
		{
			v18 = *(float*)&dword_140C8ABD0;
		}
		else
		{
			dword_140C8ABD4 = 1;
			v29 = sub_140200220(0x4F1u);
			if (v29)
				v18 = *(float*)(v29 + 36);
			dword_140C8ABD0 = LODWORD(v18);
		}
		result = sub_14040E610(v28, a2, 49, v18 * v25);
		if (!(_DWORD)result)
		{
		LABEL_52:
			v30 = (float)(1.0 - v19) * v22;
			v31 = 0;
			if (v30 < 0.0)
				v31 = 0x80000000;
			v32 = v31 - LODWORD(v30);
			if ((int)abs32(v32) > 84)
			{
				v33 = a2 + 148;
				for (i = (unsigned int*)(a2 + 148); ; ++i)
				{
					v32 = *i;
					if ((_DWORD)v32 == 35)
						break;
					if ((_DWORD)v32 == 197)
					{
						*(_DWORD*)(v33 + 4 * v5) = 35;
						break;
					}
					v5 = (unsigned int)(v5 + 1);
					if ((unsigned int)v5 >= 0xF)
						return 149i64;
				}
				*(float*)(v33 + 4 * v5 + 60) = v30 + *(float*)(v33 + 4 * v5 + 60);
			}
			return sub_14040E610(v32, a2, 36, v19 * v22);
		}
	}
	return result;
}
// 14040E214: variable 'v12' is possibly undefined
// 14040E269: variable 'v28' is possibly undefined
// 140950B90: using guessed type __int64 __fastcall sub_140950B90();
// 140950BA0: using guessed type __int64 __fastcall sub_140950BA0();
// 140B66A48: using guessed type __int64 (__fastcall *off_140B66A48[120])();
// 140B66A58: using guessed type __int64 (__fastcall *off_140B66A58[118])();
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C8ABD0: using guessed type int dword_140C8ABD0;
// 140C8ABD4: using guessed type int dword_140C8ABD4;
// 140C8ABD8: using guessed type int dword_140C8ABD8;
// 140C8ABDC: using guessed type int dword_140C8ABDC;
// 140C8ABE0: using guessed type int dword_140C8ABE0;
// 140C8ABE4: using guessed type int dword_140C8ABE4;
// 140C8ABF8: using guessed type __int64 qword_140C8ABF8;
// 140C8AC00: using guessed type int dword_140C8AC00;
// 140C8AC04: using guessed type int dword_140C8AC04;
// 140C8AC08: using guessed type int dword_140C8AC08;
// 140C8AC10: using guessed type __int64 qword_140C8AC10;

