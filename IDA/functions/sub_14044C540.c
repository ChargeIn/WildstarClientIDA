#include "../winhttp.h"

//----- (000000014044C540) ----------------------------------------------------
__int64 __fastcall sub_14044C540(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v3; // r14
	unsigned __int64 i; // rbx
	__int64 v6; // rcx
	unsigned __int64 v7; // rbx
	__int64 v8; // r12
	__int64 v9; // r15
	__int64 v10; // r13
	int* v11; // rsi
	__int64 v12; // rax
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // rdi
	unsigned __int64 v16; // rbx
	int v17; // eax
	unsigned __int64 v19; // [rsp+60h] [rbp+8h]
	__int64 v20; // [rsp+68h] [rbp+10h]

	v2 = 0i64;
	v3 = qword_140C65908;
	for (i = 0i64; i < *(_QWORD*)(v3 + 24); v2 += 56i64)
	{
		v6 = *(_QWORD*)(v2 + *(_QWORD*)(v3 + 16) + 8);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		++i;
	}
	v7 = 0i64;
	*(_QWORD*)(v3 + 24) = 0i64;
	v19 = 0i64;
	if (*a2)
	{
		v8 = 0i64;
		v9 = 0i64;
		do
		{
			sub_140451380((__int64*)(v3 + 16));
			*(_DWORD*)(v9 + *(_QWORD*)(v3 + 16) + 28) = *(_DWORD*)(v8 + *((_QWORD*)a2 + 1) + 16);
			*(_DWORD*)(v9 + *(_QWORD*)(v3 + 16) + 32) = *(_DWORD*)(v8 + *((_QWORD*)a2 + 1) + 20);
			v10 = *(_QWORD*)(v3 + 16);
			v11 = *(int**)(v8 + *((_QWORD*)a2 + 1) + 32);
			v12 = *(_QWORD*)(v9 + v10 + 8);
			v20 = v12;
			if (v11)
			{
				v13 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v13;
					while (*((_WORD*)v11 + v13));
				}
				v14 = sub_14018B280(2 * v13 + 18, 0);
				if (v14)
				{
					*((_QWORD*)v14 + 1) = v13;
					*(_QWORD*)v14 = off_140B55060;
				}
				else
				{
					v14 = 0i64;
				}
				v15 = v14 + 4;
				v16 = 2 * v13;
				sub_1407DB590(v14 + 4, v11, v16);
				*(_WORD*)((char*)v15 + v16) = 0;
				v12 = v20;
				v7 = v19;
				*(_QWORD*)(v9 + v10 + 8) = v15;
			}
			else
			{
				*(_QWORD*)(v9 + v10 + 8) = 0i64;
			}
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			++v7;
			v17 = *(_DWORD*)(v8 + *((_QWORD*)a2 + 1) + 24);
			v8 += 64i64;
			v9 += 56i64;
			*(_DWORD*)(v9 + *(_QWORD*)(v3 + 16) - 32) = v17;
			v19 = v7;
			*(_QWORD*)(v9 + *(_QWORD*)(v3 + 16) - 56) = *(_QWORD*)(v8 + *((_QWORD*)a2 + 1) - 64);
			*(_QWORD*)(v9 + *(_QWORD*)(v3 + 16) - 40) = *(_QWORD*)(v8 + *((_QWORD*)a2 + 1) - 56);
			*(_DWORD*)(v9 + *(_QWORD*)(v3 + 16) - 20) = *(_DWORD*)(v8 + *((_QWORD*)a2 + 1) - 24);
			*(_QWORD*)(v9 + *(_QWORD*)(v3 + 16) - 16) = *(_QWORD*)(v8 + *((_QWORD*)a2 + 1) - 16);
			*(_DWORD*)(v9 + *(_QWORD*)(v3 + 16) - 4) = *(_DWORD*)(v8 + *((_QWORD*)a2 + 1) - 8);
		} while (v7 < *a2);
	}
	if (qword_140C65898)
		Apollo_LUAEvent(
			*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64),
			"StorePurchaseHistoryReady",
			byte_1409D13DB);
	return 0i64;
}
// 1409D13DB: using guessed type _BYTE byte_1409D13DB[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;

