#include "../winhttp.h"

//----- (00000001408377F0) ----------------------------------------------------
void __fastcall sub_1408377F0(__int64* a1, unsigned __int64 a2)
{
	int v2; // eax
	_QWORD* v5; // rbx
	__int64 v6; // rdx
	int v7; // esi
	_QWORD* v8; // rdx
	_QWORD* v9; // rcx
	_QWORD* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // r14d

	v2 = 0;
	if (a2)
	{
		v8 = (_QWORD*)a1[6];
		if (v8)
		{
			v9 = 0i64;
			v10 = v8;
			while (v10[4] != a2)
			{
				v9 = v10;
				v10 = (_QWORD*)v10[1];
				if (!v10)
					goto LABEL_21;
			}
			v11 = v10[1];
			if (v10 == v8)
				a1[6] = v11;
			else
				v9[1] = v11;
			v12 = v10[2];
			v13 = dword_140C10F20;
			*v10 = &off_1409A2EB8;
			if (v12)
				sub_14083B060(qword_140C61B70, v12, (__int64)v10);
			sub_140881720(v13, (__int64)v10);
		}
	LABEL_21:
		sub_140835110(a1 + 3, a2);
	}
	else
	{
		v5 = (_QWORD*)a1[6];
		LOBYTE(v2) = v5 != 0i64;
		if (v2)
		{
			while (1)
			{
				if (v5 == (_QWORD*)a1[6])
					a1[6] = v5[1];
				else
					MEMORY[8] = v5[1];
				v6 = v5[2];
				v7 = dword_140C10F20;
				*v5 = &off_1409A2EB8;
				if (v6)
					sub_14083B060(qword_140C61B70, v6, (__int64)v5);
				sub_140881720(v7, (__int64)v5);
			}
		}
		a1[4] = a1[3];
	}
}
// 1409A2EB8: using guessed type __int64 (__fastcall *off_1409A2EB8)();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;

