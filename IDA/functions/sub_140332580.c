#include "../winhttp.h"

//----- (0000000140332580) ----------------------------------------------------
int __fastcall sub_140332580(_QWORD* a1, unsigned __int16 a2, unsigned int a3, __int64 a4)
{
	LONGLONG v8; // r15
	unsigned int* v9; // rbp
	int* v10; // rdi
	int* v11; // rbx
	__int64 v12; // rax
	char* v14; // r14
	unsigned __int64 v15; // rbp
	char* v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rax
	int v19; // ebx
	int v20; // eax
	int result; // eax
	__int64 v22; // [rsp+20h] [rbp-58h]
	_QWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(a3);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v9 = (unsigned int*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 304i64))(a1, a3);
	if (!v9)
	{
		if (qword_140C65828)
		{
			if (a3 < 3)
			{
				sub_14018EE90(v23, (__int64)"Base Message Id #%d", a3);
			}
			else
			{
				if (a3 < dword_140C1E564)
				{
					v10 = *(int**)(qword_140C65828 + 16i64 * (a3 - 3) + 8);
					if (v10)
					{
						v11 = 0i64;
						v12 = -1i64;
						while (*((_BYTE*)v10 + ++v12) != 0)
							;
						v14 = (char*)v10 + v12;
						v15 = v12;
						if (v12 != -2)
							v11 = sub_14018B280(v12 + 1, 0);
						sub_1407DB590(v11, v10, v15);
						v16 = &v14[(char*)v11 - (char*)v10];
						if (v16)
							*v16 = 0;
						goto LABEL_20;
					}
				}
				sub_14018EE90(v23, (__int64)"Invalid or foreign Message Id #%d", a3);
			}
		}
		else
		{
			sub_14018EE90(v23, (__int64)"Message Id #%d", a3);
		}
		v11 = (int*)v23[1];
	LABEL_20:
		PerformanceCount.QuadPart = 0x141DEBE70i64;
		sub_1401A2E50(0xBu, 0, &PerformanceCount, v11, a3);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		goto LABEL_34;
	}
	if ((unsigned __int64)a2 < a1[22])
	{
		v17 = *(_QWORD*)(a1[21] + 8i64 * a2);
		if (v17)
		{
			if (dword_140C65820 == 1)
			{
				v18 = *(_QWORD*)(v17 + 24);
				v19 = 100;
				if (v18)
				{
					while (*(_DWORD*)(v18 + 280) == 2)
					{
						if (!--v19)
							break;
						LODWORD(v22) = ntohs(*(_WORD*)(v18 + 146));
						PerformanceCount.QuadPart = 0x141DEBDF0i64;
						sub_1401A3130(21, 2, &PerformanceCount, (unsigned int)(100 - v19), v22);
						Sleep(1u);
						v18 = *(_QWORD*)(v17 + 24);
						if (!v18)
							break;
					}
				}
			}
			v20 = *(_DWORD*)(v17 + 8);
			if (v20 != 2)
			{
				if (v20 == 1)
					*(_DWORD*)(v17 + 8) = 2;
				sub_140333FC0((__int64)a1, v17, v9, a4);
			}
		}
	}
LABEL_34:
	result = QueryPerformanceCounter(&PerformanceCount);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(
				L"H Network_SendMessageById",
				a3,
				PerformanceCount.QuadPart - v8 - ::PerformanceCount.QuadPart,
				1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 140332789: variable 'v22' is possibly undefined
// 140AF1778: using guessed type wchar_t aHNetworkSendme[26];
// 140C1E564: using guessed type int dword_140C1E564;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65820: using guessed type int dword_140C65820;
// 140C65828: using guessed type __int64 qword_140C65828;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796CC: using guessed type int dword_140C796CC;

