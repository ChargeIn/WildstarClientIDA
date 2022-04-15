#include "../winhttp.h"

//----- (0000000140409860) ----------------------------------------------------
__int64 __fastcall sub_140409860(__int64 a1, __int64 a2, unsigned __int16* a3, int a4, int a5, int a6)
{
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	__int64 v12; // rdi
	unsigned __int64 v13; // rbx
	int v14; // esi
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	_DWORD* v17; // rcx
	__int64* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // rdi
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	_DWORD* v25; // rcx
	__int64* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	__int64 v30; // rdi
	unsigned __int64* v31; // rdx
	_DWORD* v32; // rax
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	unsigned __int16* v37; // r9
	__int64 result; // rax
	__int64 v39; // [rsp+20h] [rbp-38h] BYREF
	__int64 v40; // [rsp+28h] [rbp-30h]

	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v11 = *(_QWORD*)(v10 + 16);
	*(_QWORD*)v11 = *v9;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(v10 + 16) += 16i64;
	v12 = *(_QWORD*)(a2 + 16);
	v13 = -1i64;
	v14 = 0;
	v15 = (unsigned __int64*)sub_14018F0E0(&v39, L"bAlien")[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		sub_140058710(v12, v15, v16);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v12 + 16) + 8i64) = 0;
		*(_QWORD*)(v12 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v17 = *(_DWORD**)(v12 + 16);
	v17[2] = 1;
	*v17 = a4 != 0;
	*(_QWORD*)(v12 + 16) += 16i64;
	v18 = (__int64*)sub_1400580E0(v12, -3);
	sub_14005EA50(v12, v18, (int*)(*(_QWORD*)(v12 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v12 + 16) - 16i64));
	*(_QWORD*)(v12 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v21 = *(_QWORD*)(v20 + 16);
	*(_QWORD*)v21 = *v19;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v20 + 16) += 16i64;
	v22 = *(_QWORD*)(a2 + 16);
	v23 = (unsigned __int64*)sub_14018F0E0(&v39, L"bRolePlay")[1];
	if (v23)
	{
		v24 = -1i64;
		do
			++v24;
		while (*((_BYTE*)v23 + v24));
		sub_140058710(v22, v23, v24);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
		*(_QWORD*)(v22 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v25 = *(_DWORD**)(v22 + 16);
	v25[2] = 1;
	*v25 = a6 != 0;
	*(_QWORD*)(v22 + 16) += 16i64;
	v26 = (__int64*)sub_1400580E0(v22, -3);
	sub_14005EA50(v22, v26, (int*)(*(_QWORD*)(v22 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
	*(_QWORD*)(v22 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v29 = *(_QWORD*)(v28 + 16);
	*(_QWORD*)v29 = *v27;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v28 + 16) += 16i64;
	v30 = *(_QWORD*)(a2 + 16);
	v31 = (unsigned __int64*)sub_14018F0E0(&v39, L"bProfanity")[1];
	if (v31)
	{
		do
			++v13;
		while (*((_BYTE*)v31 + v13));
		sub_140058710(v30, v31, v13);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v30 + 16) + 8i64) = 0;
		*(_QWORD*)(v30 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v32 = *(_DWORD**)(v30 + 16);
	LOBYTE(v14) = a5 != 0;
	v32[2] = 1;
	*v32 = v14;
	*(_QWORD*)(v30 + 16) += 16i64;
	v33 = (__int64*)sub_1400580E0(v30, -3);
	sub_14005EA50(v30, v33, (int*)(*(_QWORD*)(v30 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v30 + 16) - 16i64));
	*(_QWORD*)(v30 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v36 = *(_QWORD*)(v35 + 16);
	v37 = (unsigned __int16*)&unk_1409E87EC;
	*(_QWORD*)v36 = *v34;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v35 + 16) += 16i64;
	if (a3)
		v37 = a3;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v36, L"strText", v37);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 140409898: variable 'v10' is possibly undefined
// 140409967: variable 'v20' is possibly undefined
// 140409A39: variable 'v28' is possibly undefined
// 140409B0B: variable 'v35' is possibly undefined
// 140AF8A48: using guessed type wchar_t aBalien[7];
// 140AF8A98: using guessed type wchar_t aStrtext_0[8];
// 140AF8AA8: using guessed type wchar_t aBprofanity[11];
// 140AF8AC0: using guessed type wchar_t aBroleplay[10];

