#include "../winhttp.h"

//----- (00000001405CD990) ----------------------------------------------------
void __fastcall sub_1405CD990(unsigned __int64 a1, unsigned __int16* a2, _QWORD* a3, double a4)
{
	double v4; // xmm2_8
	int v6; // eax
	_QWORD** v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8
	__int64 v12; // rcx
	int v13; // eax
	int v14; // [rsp+20h] [rbp-58h]
	int v15[18]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v16; // [rsp+88h] [rbp+10h] BYREF

	if ((*a2 & 1) != 0)
	{
		*(_DWORD*)(a1 + 8) = *a2;
		*(_DWORD*)(a1 + 12) = a2[1];
		*(_DWORD*)(a1 + 16) = *((_DWORD*)a2 + 1);
		v6 = *((_DWORD*)a2 + 2);
		*(_QWORD*)(a1 + 44) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_DWORD*)(a1 + 88) = 0;
		*(_DWORD*)(a1 + 20) = v6;
		v7 = *(_QWORD***)(a1 + 136);
		v8 = *v7;
		if (*v7 != v7)
		{
			do
			{
				v9 = (__int64)v8;
				v8 = (_QWORD*)*v8;
				sub_14018B900(v9, 0);
			} while (v8 != *(_QWORD**)(a1 + 136));
		}
		**(_QWORD**)(a1 + 136) = *(_QWORD*)(a1 + 136);
		*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = *(_QWORD*)(a1 + 136);
		sub_1405CCB20(a1, (__int64)a2, v4, a4);
		sub_140195D70(a1 + 192);
		sub_140195D70(a1 + 264);
		sub_14062CC70(*(_QWORD**)a1, v10, v11, a4);
		v12 = qword_140C65898;
		if ((*(_BYTE*)(a1 + 8) & 4) != 0)
		{
			v16 = 0i64;
			*(_DWORD*)(a1 + 120) = 0;
			sub_1403F4900(v12, 0x720u, (__int64)&v16);
		}
		else
		{
			v14 = 0;
			Apollo_LUAEvent(
				*(_QWORD*)(qword_140C65898 + 29504),
				"CinematicsNotify",
				"Si",
				L"There is a cinematic view beginning.",
				v14);
		}
	}
	else
	{
		v13 = *((_DWORD*)a2 + 1);
		v15[0] = 0;
		v15[1] = v13;
		sub_1405CCF20(a1, (__int64)v15, a3, a4);
	}
}
// 1405CDA1E: variable 'a2' is possibly undefined
// 1405CDA1E: variable 'v4' is possibly undefined
// 1405CDA3E: variable 'v10' is possibly undefined
// 1405CDA3E: variable 'v11' is possibly undefined
// 140B225D0: using guessed type wchar_t aThereIsACinema[37];
// 140C65898: using guessed type __int64 qword_140C65898;

