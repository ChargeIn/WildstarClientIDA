#include "../winhttp.h"

//----- (000000014082C610) ----------------------------------------------------
void __fastcall sub_14082C610(__int64 a1, __int64 a2, __int64* a3, char a4, int a5)
{
	_QWORD* i; // rbx
	__int64 v9; // rdi
	__int64 v10; // rbp
	char v11; // al
	_QWORD* v12; // rbx
	_QWORD* j; // rdi
	__int64 v14; // rbp
	__int64 v15; // r14
	__int64 v16; // rax
	_QWORD* v17; // [rsp+20h] [rbp-48h]
	__int64* v18; // [rsp+80h] [rbp+18h]

	v18 = a3;
	for (i = *(_QWORD**)(a1 + 144); i; i = (_QWORD*)*i)
	{
		v9 = i[2];
		v10 = *(_QWORD*)(v9 + 8);
		if (((*(_WORD*)(v10 + 60) & 0xFF00) != 768 || a4)
			&& (!a2 || a2 == *(_QWORD*)(v9 + 72))
			&& (!a5 || a5 == *(_DWORD*)(v9 + 56)))
		{
			v11 = sub_14082BFE0(a1, *(_QWORD*)(v9 + 8), a3);
			a3 = v18;
			if (!v11 && *(_WORD*)(v10 + 60) != 6176)
				++* (_DWORD*)(v9 + 64);
		}
	}
	v12 = *(_QWORD**)(a1 + 96);
	for (j = 0i64; v12; a3 = v18)
	{
		v14 = v12[2];
		v15 = *(_QWORD*)(v14 + 8);
		if ((*(_WORD*)(v15 + 60) & 0xFF00) == 768 && !a4
			|| a2 && a2 != *(_QWORD*)(v14 + 72)
			|| a5 && a5 != *(_DWORD*)(v14 + 56)
			|| sub_14082BFE0(a1, *(_QWORD*)(v14 + 8), a3)
			|| *(_WORD*)(v15 + 60) == 6176)
		{
			j = v12;
			v12 = (_QWORD*)*v12;
		}
		else
		{
			sub_14082BF30(a1, *(_DWORD*)(v15 + 56), v14, 0);
			v16 = *v12;
			v17 = (_QWORD*)*v12;
			if (v12 == *(_QWORD**)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v16;
			else
				*j = v16;
			if (v12 == *(_QWORD**)(a1 + 104))
				*(_QWORD*)(a1 + 104) = j;
			*v12 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v12;
			v12 = v17;
		}
	}
}

