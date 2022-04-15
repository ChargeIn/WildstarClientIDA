#include "../winhttp.h"

//----- (00000001407A7C30) ----------------------------------------------------
__int64 __fastcall sub_1407A7C30(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	unsigned int v4; // ebx
	unsigned int v5; // ebx
	__int64 v6; // rcx
	__int64* v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64* v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // r8d
	__int64* v14; // rcx
	__int64* v15; // rdx
	__int64 v16; // rdx
	__int64* v17; // rdx
	int v18; // r8d
	__int64* v19; // rcx
	__int64* v20; // rdx
	__int64 v21; // rdx
	__int64* v22; // rdx
	const void*** v23; // rbx
	int i; // esi
	const void*** v25; // rbx
	int j; // esi
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx

	*(_QWORD*)a1 = off_140B78580;
	result = sub_1407A8080((_QWORD*)a1);
	v3 = 0;
	if (*(_QWORD*)(a1 + 144))
	{
		result = 0i64;
		do
		{
			sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * result), 0);
			result = ++v3;
		} while ((unsigned __int64)v3 < *(_QWORD*)(a1 + 144));
	}
	v4 = 0;
	*(_QWORD*)(a1 + 144) = 0i64;
	if (*(_QWORD*)(a1 + 112))
	{
		result = 0i64;
		do
		{
			sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8 * result), 0);
			result = ++v4;
		} while ((unsigned __int64)v4 < *(_QWORD*)(a1 + 112));
	}
	v5 = 0;
	*(_QWORD*)(a1 + 112) = 0i64;
	if (*(_QWORD*)(a1 + 128))
	{
		result = 0i64;
		do
		{
			sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8 * result), 0);
			result = ++v5;
		} while ((unsigned __int64)v5 < *(_QWORD*)(a1 + 128));
	}
	for (*(_QWORD*)(a1 + 128) = 0i64; *(_QWORD*)(a1 + 436120); *(_QWORD*)(v6 + 64) = 0i64)
	{
		v6 = *(_QWORD*)(a1 + 436120);
		v7 = *(__int64**)(v6 + 56);
		if (v7)
		{
			result = *(_QWORD*)(v6 + 64);
			*v7 = result;
		}
		v8 = *(_QWORD*)(v6 + 64);
		if (v8)
		{
			result = *(_QWORD*)(v6 + 56);
			*(_QWORD*)(v8 + 56) = result;
		}
		*(_QWORD*)(v6 + 56) = 0i64;
	}
	for (; *(_QWORD*)(a1 + 436128); *(_QWORD*)(v9 + 80) = 0i64)
	{
		v9 = *(_QWORD*)(a1 + 436128);
		v10 = *(__int64**)(v9 + 72);
		if (v10)
		{
			result = *(_QWORD*)(v9 + 80);
			*v10 = result;
		}
		v11 = *(_QWORD*)(v9 + 80);
		if (v11)
		{
			result = *(_QWORD*)(v9 + 72);
			*(_QWORD*)(v11 + 72) = result;
		}
		*(_QWORD*)(v9 + 72) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 436144);
	if (v12)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	if (*(_QWORD*)(a1 + 436128))
		result = (__int64)sub_1401A4A00((const void***)(a1 + 436128));
	if (*(_QWORD*)(a1 + 436120))
		result = (__int64)sub_1401A4A00((const void***)(a1 + 436120));
	v13 = 55;
	v14 = (__int64*)(a1 + 432032);
	do
	{
		v15 = (__int64*)*(v14 - 10);
		v14 -= 11;
		if (v15)
		{
			result = v14[2];
			*v15 = result;
		}
		v16 = v14[2];
		if (v16)
		{
			result = v14[1];
			*(_QWORD*)(v16 + 72) = result;
		}
		v14[1] = 0i64;
		v14[2] = 0i64;
		v17 = (__int64*)*(v14 - 1);
		if (v17)
		{
			result = *v14;
			*v17 = *v14;
		}
		if (*v14)
		{
			result = *(v14 - 1);
			*(_QWORD*)(*v14 + 56) = result;
		}
		--v13;
		*(v14 - 1) = 0i64;
		*v14 = 0i64;
	} while (v13 >= 0);
	v18 = 4095;
	v19 = (__int64*)(a1 + 427104);
	do
	{
		v20 = (__int64*)*(v19 - 10);
		v19 -= 11;
		if (v20)
		{
			result = v19[2];
			*v20 = result;
		}
		v21 = v19[2];
		if (v21)
		{
			result = v19[1];
			*(_QWORD*)(v21 + 72) = result;
		}
		v19[1] = 0i64;
		v19[2] = 0i64;
		v22 = (__int64*)*(v19 - 1);
		if (v22)
		{
			result = *v19;
			*v22 = *v19;
		}
		if (*v19)
		{
			result = *(v19 - 1);
			*(_QWORD*)(*v19 + 56) = result;
		}
		--v18;
		*(v19 - 1) = 0i64;
		*v19 = 0i64;
	} while (v18 >= 0);
	v23 = (const void***)(a1 + 66592);
	for (i = 111; i >= 0; --i)
	{
		if (*--v23)
			result = (__int64)sub_1401A4A00(v23);
	}
	v25 = (const void***)(a1 + 65696);
	for (j = 0x1FFF; j >= 0; --j)
	{
		if (*--v25)
			result = (__int64)sub_1401A4A00(v25);
	}
	v27 = *(_QWORD*)(a1 + 136);
	if (v27)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
	v28 = *(_QWORD*)(a1 + 120);
	if (v28)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
	v29 = *(_QWORD*)(a1 + 104);
	if (v29)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
	return result;
}
// 140B78580: using guessed type __int64 (__fastcall *off_140B78580[30])();

