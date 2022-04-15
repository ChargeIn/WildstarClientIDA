#include "../winhttp.h"

//----- (00000001405C7DE0) ----------------------------------------------------
__int64 __fastcall sub_1405C7DE0(__int64 a1, int a2, int a3, int a4, int a5)
{
	int v9; // ebp
	__int64 v11; // rax
	wchar_t* v12; // rsi
	bool v13; // zf
	int* v14; // rcx
	int* v15; // rdi
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // rbx
	unsigned __int64 v18; // rbx

	sub_1403D90D0(qword_140C65898, a5);
	*(_DWORD*)(a1 + 504) = a2;
	*(_DWORD*)(a1 + 508) = a3;
	*(_DWORD*)(a1 + 512) = a5;
	*(_DWORD*)(a1 + 516) = a4;
	if (a4)
	{
		v9 = a4 - 1;
		if (v9)
		{
			if (v9 != 1)
				return 2147500037i64;
			v11 = 0i64;
			v12 = L"Icon_SkillMisc_UI_ss_recharge";
			do
				v13 = aIconSkillmiscU[++v11] == 0;
			while (!v13);
		}
		else
		{
			v11 = 0i64;
			v12 = L"Icon_SkillMisc_UI_misc_dshbck";
			do
				v13 = aIconSkillmiscU_0[++v11] == 0;
			while (!v13);
		}
	}
	else
	{
		v11 = 0i64;
		v12 = L"Icon_PowerSlash";
		do
			v13 = aIconPowerslash[++v11] == 0;
		while (!v13);
	}
	v14 = *(int**)(a1 + 24);
	v15 = (int*)&v12[v11];
	v16 = (__int64)(*(_QWORD*)(a1 + 32) - (_QWORD)v14) >> 1;
	v17 = (2 * v11) >> 1;
	if (v17 > v16)
	{
		sub_1407DB590(v14, (int*)v12, 2 * v16);
		sub_14001C310((_QWORD*)(a1 + 16), (int*)&v12[(__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 1], v15);
	}
	else
	{
		v18 = 2 * v17;
		sub_1407DB590(v14, (int*)v12, v18);
		sub_14001C2B0(a1 + 16, (int*)(v18 + *(_QWORD*)(a1 + 24)), *(int**)(a1 + 32));
	}
	return 0i64;
}
// 140B223E0: using guessed type wchar_t aIconSkillmiscU[30];
// 140B22440: using guessed type wchar_t aIconPowerslash[16];
// 140B22460: using guessed type wchar_t aIconSkillmiscU_0[30];
// 140C65898: using guessed type __int64 qword_140C65898;

