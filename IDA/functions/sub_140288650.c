#include "../winhttp.h"

//----- (0000000140288650) ----------------------------------------------------
__int64 __fastcall sub_140288650(__int64 a1, int* a2, int a3, int a4, int a5, int a6)
{
	int* v7; // rax
	__int64 v8; // rcx
	__int64 result; // rax
	int v10; // eax
	__int64 v11; // rdi
	__int64 v12; // rdi
	unsigned __int64 v13; // rbp
	int** v14; // rsi
	int* v15; // rax
	int* v16; // rdx
	int* v17; // rcx
	__int64 v18; // rax
	__int64 v19; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+28h] [rbp-20h]
	__int64 v21; // [rsp+30h] [rbp-18h]
	__int64 v22; // [rsp+38h] [rbp-10h]

	if (!a2 || !*(_WORD*)a2)
		return 2147942487i64;
	*(_DWORD*)(a1 + 24) = a3;
	*(_DWORD*)(a1 + 28) = a4;
	*(_DWORD*)(a1 + 32) = a5;
	v7 = sub_14018E9C0(a2);
	*(_DWORD*)(a1 + 48) = a6;
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 40) = v7;
	result = (*(__int64(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)v8 + 72i64))(v8, v7, a1 + 56);
	if ((int)result >= 0)
	{
		v10 = *(_DWORD*)(a1 + 24);
		v19 = 0x100000000i64;
		LODWORD(v20) = v10;
		HIDWORD(v20) = *(_DWORD*)(a1 + 28);
		LODWORD(v21) = *(_DWORD*)(a1 + 32);
		v11 = *(_QWORD*)(a1 + 16);
		v22 = *(_QWORD*)(a1 + 40);
		v12 = v11 + 6200;
		HIDWORD(v21) = *(_DWORD*)(a1 + 48);
		if (*(_QWORD*)v12 == *(_QWORD*)(v12 + 8))
			sub_1400290D0(v12);
		v13 = (*(__int64(__fastcall**)(__int64*))(v12 + 24))(&v19);
		v14 = (int**)(*(_QWORD*)(v12 + 16) + 8 * (v13 % *(_QWORD*)(v12 + 8)));
		v15 = sub_14018B280(56i64, 0);
		v16 = v15;
		if (v15)
		{
			v17 = *v14;
			*(_QWORD*)v15 = v13;
			*((_QWORD*)v15 + 1) = v17;
			*((_QWORD*)v15 + 2) = v19;
			*((_QWORD*)v15 + 3) = v20;
			*((_QWORD*)v15 + 4) = v21;
			v18 = v22;
			*((_QWORD*)v16 + 6) = a1;
			*((_QWORD*)v16 + 5) = v18;
		}
		else
		{
			v16 = 0i64;
		}
		*v14 = v16;
		++* (_QWORD*)v12;
		*(_DWORD*)(a1 + 72) = -2147483638;
		return 0i64;
	}
	return result;
}

