#include "../winhttp.h"

//----- (00000001406161F0) ----------------------------------------------------
__int64 __fastcall sub_1406161F0(__int64 a1, unsigned int* a2)
{
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // r9
	unsigned int v9; // r8d
	__int64 v10; // rax
	__int64 v11; // r10
	__int64 v12; // rcx
	int v13; // edx
	bool v14; // dl
	int v15; // ecx
	bool v16; // cl

	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 48) = v4;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 16i64) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(*(_QWORD*)(a1 + 48) + 24i64) = *(_QWORD*)(a1 + 48);
	v5 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 16i64) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 24i64) = *(_QWORD*)(a1 + 80);
	v6 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 16i64) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = *(_QWORD*)(a1 + 120);
	v7 = qword_140C65968;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 152) = a2;
	*(_DWORD*)(a1 + 144) = 0;
	v8 = *(_QWORD*)(v7 + 272);
	v9 = *a2;
	v10 = *(_QWORD*)(v8 + 8);
	v11 = v8;
	v12 = v10;
	if (v10)
	{
		do
		{
			v13 = *(_DWORD*)(v12 + 32);
			if (v13)
				v14 = v13 > 0;
			else
				v14 = v9 < *(_DWORD*)(v12 + 36);
			if (v14)
			{
				v11 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
			else
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
		} while (v12);
		do
		{
			v15 = *(_DWORD*)(v10 + 32);
			if (v15)
				v16 = v15 < 0;
			else
				v16 = *(_DWORD*)(v10 + 36) < v9;
			if (v16)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v8 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		} while (v10);
	}
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 104) = 0;
	*(_DWORD*)(a1 + 160) = v8 != v11;
	sub_140008410(a1 + 40);
	sub_140008410(a1 + 72);
	*(_QWORD*)(a1 + 4) = 0i64;
	*(_DWORD*)(a1 + 12) = 0;
	return a1;
}
// 14061630C: conditional instruction was optimized away because rax.8!=0
// 140C65968: using guessed type __int64 qword_140C65968;

