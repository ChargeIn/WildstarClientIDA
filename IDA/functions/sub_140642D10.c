#include "../winhttp.h"

//----- (0000000140642D10) ----------------------------------------------------
__int64 __fastcall sub_140642D10(__int64 a1)
{
	int v1; // eax
	__int64(__fastcall * v2)(wchar_t**, __int64); // rax
	unsigned int v4; // eax
	unsigned __int64 v5; // rax
	__int64 v6; // rax
	unsigned __int64 v7; // kr00_8
	int* v8; // rax
	unsigned __int64 v9; // r8
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax

	v1 = dword_140C636A8;
	*(_DWORD*)(a1 + 8) = 60000;
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(a1 + 12) = 20;
	*(_DWORD*)a1 = v1 - 60000;
	v2 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*(_DWORD*)(a1 + 16) = 3000;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (v2)
	{
		v4 = v2(off_140A69138, qword_140C63858);
	}
	else if (dword_140C64944 || (int)sub_1401E9240() < 0)
	{
		v4 = 0;
	}
	else
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
	}
	*(_QWORD*)(a1 + 32) = 0i64;
	v5 = sub_1401A40C0(v4);
	*(_QWORD*)(a1 + 40) = v5;
	v7 = v5;
	v6 = 8 * v5;
	if (!is_mul_ok(v7, 8ui64))
		v6 = -1i64;
	v8 = sub_14018B280(v6, 0);
	v9 = 8i64 * *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 48) = v8;
	sub_1407E4830(v8, 0i64, v9);
	*(_QWORD*)(a1 + 56) = sub_1400522D0;
	*(_QWORD*)(a1 + 64) = sub_1400522E0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	v10 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = v10;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 16i64) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 24i64) = *(_QWORD*)(a1 + 112);
	*(_DWORD*)(a1 + 136) = 0;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v11 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = v11;
	*(_BYTE*)v11 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 16i64) = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24i64) = *(_QWORD*)(a1 + 168);
	v12 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 200) = v12;
	*(_BYTE*)v12 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 16i64) = *(_QWORD*)(a1 + 200);
	*(_QWORD*)(*(_QWORD*)(a1 + 200) + 24i64) = *(_QWORD*)(a1 + 200);
	v13 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 232) = v13;
	*(_BYTE*)v13 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 16i64) = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 24i64) = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	v14 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 280) = v14;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_BYTE*)v14 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 280) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 280) + 16i64) = *(_QWORD*)(a1 + 280);
	*(_QWORD*)(*(_QWORD*)(a1 + 280) + 24i64) = *(_QWORD*)(a1 + 280);
	return a1;
}
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64944: using guessed type int dword_140C64944;

