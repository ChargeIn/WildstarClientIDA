#include "../winhttp.h"

//----- (00000001408D19D0) ----------------------------------------------------
__int64 __fastcall sub_1408D19D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	int* v6; // rdx
	int* v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm1
	int v19; // eax
	unsigned int v20; // edi
	int i; // ecx
	unsigned int v22; // eax
	__int64 result; // rax
	unsigned int v24; // eax
	unsigned int v25; // eax
	unsigned int v26; // eax
	unsigned int v27; // eax
	unsigned int v28; // eax
	unsigned int v29; // eax
	int v30; // xmm1_4
	int v31; // xmm0_4
	int v32[6]; // [rsp+20h] [rbp-C8h] BYREF
	char v33; // [rsp+39h] [rbp-AFh]
	char v34; // [rsp+4Dh] [rbp-9Bh]
	char v35; // [rsp+61h] [rbp-87h]
	char v36; // [rsp+7Dh] [rbp-6Bh]
	char v37; // [rsp+95h] [rbp-53h]
	char v38; // [rsp+A1h] [rbp-47h]
	char v39; // [rsp+B1h] [rbp-37h]
	int v40; // [rsp+B4h] [rbp-34h]
	int v41; // [rsp+B8h] [rbp-30h]
	int v42; // [rsp+BCh] [rbp-2Ch]

	*(_QWORD*)(a1 + 16) = a2;
	v6 = (int*)(a4 + 8);
	*(_QWORD*)(a1 + 8) = a4;
	v8 = v32;
	if ((((unsigned __int8)v32 | (unsigned __int8)(a4 + 8)) & 0xF) != 0)
	{
		sub_1407DB590(v32, v6, 0xA4ui64);
	}
	else
	{
		v9 = 1i64;
		do
		{
			v10 = *(_OWORD*)v6;
			v11 = *((_OWORD*)v6 + 1);
			v8 += 32;
			v6 += 32;
			*((_OWORD*)v8 - 8) = v10;
			v12 = *((_OWORD*)v6 - 6);
			*((_OWORD*)v8 - 7) = v11;
			v13 = *((_OWORD*)v6 - 5);
			*((_OWORD*)v8 - 6) = v12;
			v14 = *((_OWORD*)v6 - 4);
			*((_OWORD*)v8 - 5) = v13;
			v15 = *((_OWORD*)v6 - 3);
			*((_OWORD*)v8 - 4) = v14;
			v16 = *((_OWORD*)v6 - 2);
			*((_OWORD*)v8 - 3) = v15;
			v17 = *((_OWORD*)v6 - 1);
			*((_OWORD*)v8 - 2) = v16;
			*((_OWORD*)v8 - 1) = v17;
			--v9;
		} while (v9);
		v18 = *((_OWORD*)v6 + 1);
		v19 = v6[8];
		*(_OWORD*)v8 = *(_OWORD*)v6;
		*((_OWORD*)v8 + 1) = v18;
		v8[8] = v19;
	}
	v20 = 0;
	*(_DWORD*)(a1 + 32) = *a5;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v20;
	*(_DWORD*)(a1 + 28) = 0;
	*(_DWORD*)(a1 + 56) = 0;
	if (v33)
	{
		v22 = sub_1408D3950(a1 + 288, v20);
		result = sub_1408D33D0(a1 + 64, a2, v22);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D3970(a1 + 288, a1 + 64, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (v34)
	{
		v24 = sub_1408D4D40(a1 + 312, v20);
		result = sub_1408D33D0(a1 + 96, a2, v24);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D4D50(a1 + 312, a1 + 96, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (v35)
	{
		v25 = sub_1408D5750(a1 + 328, v20);
		result = sub_1408D33D0(a1 + 128, a2, v25);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D5770(a1 + 328, a1 + 128, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (v36)
	{
		v26 = sub_1408D6060(a1 + 352, v20);
		result = sub_1408D33D0(a1 + 160, a2, v26);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D6070(a1 + 352, a1 + 160, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (v37)
	{
		v27 = sub_1408D6AC0(a1 + 392, v20);
		result = sub_1408D33D0(a1 + 224, a2, v27);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D6AD0(a1 + 392, a1 + 224, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (v38)
	{
		v28 = sub_1408D7480(a1 + 368, v20);
		result = sub_1408D33D0(a1 + 192, a2, v28);
		if ((_DWORD)result != 1)
			return result;
		result = sub_1408D7490(a1 + 368, a1 + 192, v20, *a5);
		if ((_DWORD)result != 1)
			return result;
		++* (_DWORD*)(a1 + 28);
	}
	if (!v39)
	{
	LABEL_36:
		v30 = v41;
		result = 1i64;
		*(_DWORD*)(a1 + 36) = v40;
		v31 = v42;
		*(_DWORD*)(a1 + 40) = v30;
		*(_DWORD*)(a1 + 44) = v31;
		return result;
	}
	v29 = sub_1408D84F0(a1 + 408, v20);
	result = sub_1408D33D0(a1 + 256, a2, v29);
	if ((_DWORD)result == 1)
	{
		result = sub_1408D8500(a1 + 408, a1 + 256, v20, *a5);
		if ((_DWORD)result == 1)
		{
			++* (_DWORD*)(a1 + 28);
			goto LABEL_36;
		}
	}
	return result;
}
// 1408D19D0: using guessed type int var_C8[6];

