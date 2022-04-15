#include "../winhttp.h"

//----- (0000000140757670) ----------------------------------------------------
__int64 __fastcall sub_140757670(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // rdx
	int* v7; // rdi
	__int64* v8; // rax
	int v9; // ebx
	__int64 v10; // rax
	int v11; // edi
	int v12; // ebp
	int v13; // r14d
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	int v18; // ebx
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx

	result = sub_140056D60(a1, 1u);
	v4 = result;
	if ((_DWORD)result)
	{
		v5 = sub_14043CF90(v3, result);
		v7 = (int*)v5;
		if (v5)
		{
			v18 = *(_DWORD*)(v5 + 92);
			if (!v18)
			{
				v19 = sub_140200220(0x1E6u);
				if (v19)
					v18 = *(_DWORD*)(v19 + 4);
				else
					v18 = 0;
			}
			sub_140058900((__int64)a1, v6, 0);
			sub_1400EFFF0((__int64)a1, v20, (unsigned __int64*)"fDuration", (float)v18 * 0.001);
			sub_1400EFF50((__int64)a1, v21, (unsigned __int64*)"ePortraitPlacement", v7[25]);
			sub_1400EFF50((__int64)a1, v22, (unsigned __int64*)"eOverlay", v7[26]);
			sub_1400EFF50((__int64)a1, v23, (unsigned __int64*)"eBackground", v7[27]);
			return 1i64;
		}
		v8 = *(__int64**)qword_140C7CC88;
		if (*(_QWORD*)qword_140C7CC88 != qword_140C7CC88)
		{
			while (v4 != *((_DWORD*)v8 + 4))
			{
				v8 = (__int64*)*v8;
				if (v8 == (__int64*)qword_140C7CC88)
					goto LABEL_6;
			}
			v11 = *((_DWORD*)v8 + 20);
			v9 = *((_DWORD*)v8 + 23);
			v12 = *((_DWORD*)v8 + 24);
			v13 = *((_DWORD*)v8 + 22);
			goto LABEL_16;
		}
	LABEL_6:
		v9 = 0;
		if (qword_140C63840)
		{
			v10 = qword_140C63840(off_140A6A408, 486i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_14;
			v10 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 486i64);
		}
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 4);
		LABEL_15:
			v12 = 0;
			v13 = 0;
		LABEL_16:
			sub_140058900((__int64)a1, v6, 0);
			sub_1400EFFF0((__int64)a1, v14, (unsigned __int64*)"fDuration", (float)v11 * 0.001);
			sub_1400EFF50((__int64)a1, v15, (unsigned __int64*)"ePortraitPlacement", v9);
			sub_1400EFF50((__int64)a1, v16, (unsigned __int64*)"eOverlay", v12);
			sub_1400EFF50((__int64)a1, v17, (unsigned __int64*)"eBackground", v13);
			return 1i64;
		}
	LABEL_14:
		v11 = 0;
		goto LABEL_15;
	}
	return result;
}
// 14075769F: variable 'v3' is possibly undefined
// 14075774B: variable 'v6' is possibly undefined
// 14075776C: variable 'v14' is possibly undefined
// 14075777E: variable 'v15' is possibly undefined
// 140757790: variable 'v16' is possibly undefined
// 1407577A2: variable 'v17' is possibly undefined
// 1407577FA: variable 'v20' is possibly undefined
// 14075780D: variable 'v21' is possibly undefined
// 140757820: variable 'v22' is possibly undefined
// 140757833: variable 'v23' is possibly undefined
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C7CC88: using guessed type __int64 qword_140C7CC88;

