#include "../winhttp.h"

//----- (0000000140334740) ----------------------------------------------------
void __fastcall sub_140334740(__int64 a1, __int64 a2)
{
	int* v4; // rax
	int* v5; // rbx
	int* v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int128 v9; // xmm0
	__int64 v10; // rcx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
	if (*(_QWORD*)(a2 + 56))
	{
		if (!*(_QWORD*)(a1 + 56))
		{
			v4 = sub_14018B280(1048i64, 0);
			v5 = v4;
			if (v4)
			{
				*(_BYTE*)v4 = 7;
				v4[1] = 128;
				*((_BYTE*)v4 + 8) = 0;
				v4[3] = 1;
				*((_BYTE*)v4 + 16) = 7;
				v4[5] = 128;
				sub_1407E4830(v4 + 6, 0i64, 0x400ui64);
			}
			else
			{
				v5 = 0i64;
			}
			*(_QWORD*)(a1 + 56) = v5;
		}
		v6 = *(int**)(a2 + 56);
		v7 = *(_QWORD*)(a1 + 56);
		if ((((unsigned __int8)v7 | (unsigned __int8)v6) & 0xF) != 0)
		{
			sub_1407DB590((int*)v7, v6, 0x418ui64);
		}
		else
		{
			v8 = 8i64;
			do
			{
				v9 = *(_OWORD*)v6;
				v7 += 128i64;
				v6 += 32;
				*(_OWORD*)(v7 - 128) = v9;
				*(_OWORD*)(v7 - 112) = *((_OWORD*)v6 - 7);
				*(_OWORD*)(v7 - 96) = *((_OWORD*)v6 - 6);
				*(_OWORD*)(v7 - 80) = *((_OWORD*)v6 - 5);
				*(_OWORD*)(v7 - 64) = *((_OWORD*)v6 - 4);
				*(_OWORD*)(v7 - 48) = *((_OWORD*)v6 - 3);
				*(_OWORD*)(v7 - 32) = *((_OWORD*)v6 - 2);
				*(_OWORD*)(v7 - 16) = *((_OWORD*)v6 - 1);
				--v8;
			} while (v8);
			*(_OWORD*)v7 = *(_OWORD*)v6;
			*(_QWORD*)(v7 + 16) = *((_QWORD*)v6 + 2);
		}
	}
	else
	{
		v10 = *(_QWORD*)(a1 + 56);
		if (v10)
		{
			sub_14018B900(v10, 0);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
	}
}

